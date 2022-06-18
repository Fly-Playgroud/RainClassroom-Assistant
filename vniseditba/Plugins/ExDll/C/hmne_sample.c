/*
  HM NIS Edit (c) 2003 Héctor Mauricio Rodríguez Segura <ranametal@users.sourceforge.net>
  For conditions of distribution and use, see license.txt

  Plugin sample

  This sample plugin try to explain the logic of the plugin system and how to
  create plugins for HM NIS Edit.

  Tested with Dev-C++/MinGW 3.2 (free dowload at http://www.bloodshed.net/dev/devcpp.html)
  and MS Visual C++ 6

  You can use this sample plugin as template for your plugins.


  This plugin will create a new top menu item at the left of the help menu and
  will add two subitems to it, when the first item is clicked a message box will
  show the selected text; when the second item is clicked the current date and time
  will be inserted at the current cursor position.

  All dll files in the Plugins directory that start with the prefix hmne_
  (hmne_*.dll files) are loaded as plugins. Plugins are loaded in alphabetical order.

  Please send your plugins with source code to ranametal@users.sourceforge.net

*/
#include <windows.h>
#include <stdlib.h>

#include "PluginsInt.h"

#ifdef __GNUC__
  #define PLUGIN_DESCRIPTION "HM Sample plugin (C/C++) GCC"
#else 
  #define PLUGIN_DESCRIPTION "HM Sample plugin (C/C++) VC"
#endif  



// Plugin definition data, the exported function must return the address of this variable.
PluginData Data;

// Toolbar items click handler
void TBItemClick(char *ItemName)
{
  char *S;
  int CmdResult;

  // if the name of the clicked item is ShowSelectionItem then show a message box
  // with selected text.
  if(strcmp(ItemName, "ShowSelectionItem") == 0)
  {
    // Get the length of selected text to know how many memory we need to allocate.
    int SelectedLength = Data.Command(EC_EDIT_GETSELTEXTLEN, 0, 0, 0);

    // Check for errors
    if(SelectedLength == COMMAND_FAIL)
    {
      MessageBox(Data.ApplicationHandle, "Failed to get selected text length.", NULL, MB_OK|MB_ICONHAND);
      return;
    }

    // Allocate the buffer for receive the selected text.
    S = (char*)malloc(SelectedLength + 1);

    // Get the selected text
    if(Data.Command(EC_EDIT_GETSELTEXT, (int)(S), SelectedLength + 1, 0) != COMMAND_FAIL)
    {
      MessageBox(Data.ApplicationHandle, S, "Selected text", MB_OK);
    }
    else
    {
      MessageBox(Data.ApplicationHandle, "Failed to get selected text.", NULL, MB_OK|MB_ICONHAND);
    }

    // free the buffer
    free(S);
  }
  else
  // if the name of the clicked item is InsertDateTimeItem then insert the current
  // date and time.
  if(strcmp(ItemName, "InsertDateTimeItem") == 0)
  {
    // Get the current date and time
    SYSTEMTIME stime;
    char datebuf[64];
    char timebuf[32];
    int I;
    GetLocalTime(&stime);
    I = GetDateFormat(LOCALE_USER_DEFAULT, DATE_SHORTDATE, &stime, NULL, datebuf, sizeof(datebuf));
    datebuf[I-1] = ' '; datebuf[I] = '\0';
    GetTimeFormat(LOCALE_USER_DEFAULT, 0, &stime, NULL, timebuf, sizeof(timebuf));

    // Insert the date and time
    CmdResult = Data.Command(EC_EDIT_SETSELTEXT, (int)(strcat(datebuf, timebuf)), 0, 0);

    // Check for errors
    if(CmdResult == COMMAND_FAIL)
      MessageBox(Data.ApplicationHandle, "Failed to insert date and time.", NULL, MB_OK|MB_ICONHAND);
  }
}

// Update the enabled state of the items
void TBItemUpdate(char *ItemName)
{
  // Get item state
  int ItemState = Data.Command(EC_TB_GETITEMSTATE, (int)(ItemName), 0, 0);

  // Check for errors
  if(ItemState == COMMAND_FAIL)
  {
    MessageBox(Data.ApplicationHandle, "Failed to get item state.", NULL, MB_OK|MB_ICONHAND);
    return;
  }

  if(strcmp(ItemName, "ShowSelectionItem") == 0)
  {
    // The ShowSelectionItem will be enabled only if an editor is available and if
    // text is selected in that editor.
    if(Data.Command(EC_EDIT_AVAIL, 0, 0, 0) && Data.Command(EC_EDIT_SELAVAIL, 0, 0, 0))
    {
		ItemState |= TBITEM_STATE_ENABLED;
	}
	else
    {
		ItemState &= ~TBITEM_STATE_ENABLED;
	}

  } else

  if(strcmp(ItemName, "InsertDateTimeItem") == 0)
  {
    if(Data.Command(EC_EDIT_AVAIL, 0, 0, 0))
      ItemState |= TBITEM_STATE_ENABLED;
    else
      ItemState &= ~TBITEM_STATE_ENABLED;
  }

  // Update the item state
  if(Data.Command(EC_TB_SETITEMSTATE, (int)(ItemName), ItemState, 0) == COMMAND_FAIL)
    MessageBox(Data.ApplicationHandle, "Failed to update item state.", NULL, MB_OK|MB_ICONHAND);
}

// Plugins initialization procedure. Called to add toolbars, items, etc.
void Init()
{
  int CmdResult;

  // we want to insert a new top menu item at the left of the help menu, then
  // get the help menu index
  int I = Data.Command(EC_TB_GETITEMINDEX, (int)("HelpMenu"), 0, 0);

  // Fill the item definition data. For item with subitems we only need the name
  // and caption.
  TBItemData ItemData;
  ZeroMemory(&ItemData, sizeof(TBItemData));
  ItemData.Name = "MyNewItem";
  ItemData.Caption = "Plugin sample";

  // Now perform the operation
  CmdResult = Data.Command(
  EC_TB_INSERTITEM, // Command for insert the item.
  (int)("tbMenu"), // Parent item name, if the name is the name of a toolbar
                   // instead of a item then the new item will be inserted
                   // at the top item list of that toolbar.
  I, // The index where we want to put the new item.
  (int)(&ItemData) // The item definition data.
  );

  // Check for errors
  if(CmdResult == COMMAND_FAIL)
  {
    MessageBox(Data.ApplicationHandle, "Failed to insert toolbar item.", NULL, MB_OK|MB_ICONHAND);
    return;
  }

  // Fill the item definition data for a item that when clicked will show the current selected text.
  ZeroMemory(&ItemData, sizeof(TBItemData));
  ItemData.Name = "ShowSelectionItem";
  ItemData.Caption = "&Show selection.";
  ItemData.ShortCut = "Ctrl+F1";
  ItemData.Hint = "Enabled only if text is selected. When clicked show the selected text.";
  ItemData.OnClick = TBItemClick;
  ItemData.OnUpdate = TBItemUpdate;

  // Insert the item
  CmdResult = Data.Command(
  EC_TB_INSERTITEM, // Command for insert the item.
  (int)("MyNewItem"), // Parent item name.
  -1, // If the index is -1 then the item will be inserted at the bottom of all items.
  (int)(&ItemData) // The item definition data.
  );

  // Check for errors
  if(CmdResult == COMMAND_FAIL)
  {
    MessageBox(Data.ApplicationHandle, "Failed to insert toolbar item.", NULL, MB_OK|MB_ICONHAND);
    return;
  }

  // Fill the item definition data for a item that when clicked will insert the
  // current date and time.
  ZeroMemory(&ItemData, sizeof(TBItemData));
  ItemData.Name = "InsertDateTimeItem";
  ItemData.Caption = "&Inset date && time";
  ItemData.ShortCut = "Ctrl+F2";
  ItemData.Hint = "Insert the current date and time.";
  ItemData.OnClick = TBItemClick;
  ItemData.OnUpdate = TBItemUpdate;

  // Insert the item
  CmdResult = Data.Command(
  EC_TB_INSERTITEM, // Command for insert the item.
  (int)("MyNewItem"), // Parent item name.
  -1, // If the index is -1 then the item will be inserted at the bottom of all items.
  (int)(&ItemData) // The item definition data.
  );

  // Check for errors
  if(CmdResult == COMMAND_FAIL)
  {
    MessageBox(Data.ApplicationHandle, "Failed to insert toolbar item.", NULL, MB_OK| MB_ICONHAND);
    return;
  }

  // Now insert a separator item
  CmdResult = Data.Command(
  EC_TB_INSERTITEM, // Command for insert the item.
  (int)("MyNewItem"), // Parent item name.
  1, // Index
  0 // if no data is specified then a separator is inserted.
  );

  // Check for errors
  if(CmdResult == COMMAND_FAIL)
  {
    MessageBox(Data.ApplicationHandle, "Failed to insert separator item.", NULL, MB_OK|MB_ICONHAND);
    return;
  }
}

// Plugin finalization procedure. Called at plugin unload, use it for free memory
// allocated by the plugin. NOTE: you don't need to remove toolbars or toolbar
// items that you create, because these objects are freed by the application.
void Quit() { }

// If you want to show a nice about box of your plugin you can use this procedure
// to do it, use the parameter as the parent window for your about box.
void About(HWND ParentHandle)
{
  MessageBox(ParentHandle, "Show an about box here.", "About box", MB_OK);
}

// If your plugin allow users to change settings use this procedure for show a
// configuration dialog, use the parameter as the parent window of your
// configuration dialog
void Config(HWND ParentHandle)
{
  MessageBox(ParentHandle, "Show a configuration dialog here.", "Configuration", MB_OK);
}


// Notification procedure. Called when some editor events occurs.
int Notify(Event event, int Param1, int Param2, int Param3)
{
  switch(event)
  {
    case E_BEFORECOMPILE:
    // Param1 = pointer to null-terminated string that is the path to the scrip.
    // Param2 = 0
    // Param3 = 0
    break;

    case E_COMPILEFAIL:
    // Param1 = pointer to null-terminated string that is the path to the scrip.
    // Param2 = compiler exit code.
    // Param3 = 0
    break;

    case E_COMPILESUCCES:
    // Param1 = pointer to null-terminated string that is the path to the scrip.
    // Param2 = 0
    // Param3 = 0
    break;

    case E_RUNEXECUTABLE:
    // Param1 = pointer to null-terminated string that is the path to the executable file.
    // Param2 = 0
    // Param3 = 0
    break;

    case E_LANGCHANGED:
    // Param1 = pointer to null-terminated string that is the path to new language file.
    // Param2 = Language ID
    // Param3 = 0
    break;

    case E_TBTHEMECHANGED:
    // Param1 = pointer to null-terminated string that is the name of the new toolbar theme.
    // Param2 = 0
    // Param3 = 0
    break;
  }
  return 0;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Exported function
PPluginData __declspec(dllexport) GetHMNEPluginData()
{
  // Set up data
  Data.Version = HMNE_VERSION; // Version number (required)
  Data.Description = PLUGIN_DESCRIPTION; // Plugin description (required)
  Data.Init = Init; // Initialization procedure (optional)
  Data.Quit = Quit; // Finalization procedure (optional)
  Data.About = About; // For show the about box (optional)
  Data.Config = Config; // For show the configuration dialog (optional)
  Data.NotifyProc = Notify; // For respond to some events (optional)

  // Return address of data
  return &Data;
}

// The dll need to export only one function called GetHMNEPluginData, that function
// don't take parameters and returns the address of a PluginData structure with
// the plugin definition.
