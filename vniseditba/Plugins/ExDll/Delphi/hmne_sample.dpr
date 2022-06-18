(*
  HM NIS Edit (c) 2003 Héctor Mauricio Rodríguez Segura <ranametal@users.sourceforge.net>
  For conditions of distribution and use, see license.txt

  Plugin sample

  This sample plugin try to explain the logic of the plugin system and how to
  create plugins for HM NIS Edit.

  Tested with Delphi 3.0 and Delphi 5.0

  You can use this sample plugin as template for your plugins.


  This plugin will create a new top menu item at the left of the help menu and
  will add two subitems to it, when the first item is clicked a message box will
  show the selected text; when the second item is clicked the current date and time
  will be inserted at the current cursor position.

  All dll files in the Plugins directory that start with the prefix hmne_
  (hmne_*.dll files) are loaded as plugins. Plugins are loaded in alphabetical order.

  Please send your plugins with source code to ranametal@users.sourceforge.net

*)
library hmne_sample;

uses
  Windows, SysUtils,
  PluginsInt in 'PluginsInt.pas';

var
  // Plugin definition data, the exported function must return the address of this variable.
  Data: TPlugindata;

// Toolbar items click handler
procedure TBItemClick(ItemName: PChar); cdecl;
var
  CmdResult, SelectedLength: Integer;
  S: String;
begin
  // if the name of the clicked item is ShowSelectionItem then show a message box
  // with selected text.
  if StrIComp(ItemName, 'ShowSelectionItem') = 0 then
  begin
    // Get the length of selected text to know how many memory we need to allocate.
    SelectedLength := Data.Command(EC_EDIT_GETSELTEXTLEN, 0, 0, 0);

    // Check for errors
    if SelectedLength = COMMAND_FAIL  then
    begin
      MessageBox(Data.ApplicationHandle, 'Failed to get selected text length.', nil, MB_OK or MB_ICONHAND);
      Exit;
    end;

    // Allocate the buffer for receive the selected text.
    SetLength(S, SelectedLength + 1);

    // Get the selected text
    if Data.Command(EC_EDIT_GETSELTEXT, Integer(PChar(S)), SelectedLength + 1, 0) <> COMMAND_FAIL then
      MessageBox(Data.ApplicationHandle, PChar(S), 'Selected text', MB_OK)
    else
      MessageBox(Data.ApplicationHandle, 'Failed to get selected text.', nil, MB_OK or MB_ICONHAND);

    // free the buffer
    SetLength(S, 0);
  end else
  // if the name of the clicked item is InsertDateTimeItem then insert the current
  // date and time.
  if StrIComp(ItemName, 'InsertDateTimeItem') = 0 then
  begin
    // Get the current date and time
    S := DateTimeToStr(Now);

    // Insert the date and time
    CmdResult := Data.Command(EC_EDIT_SETSELTEXT, Integer(PChar(S)), 0, 0);

    // Check for errors
    if CmdResult = COMMAND_FAIL then
      MessageBox(Data.ApplicationHandle, 'Failed to insert date and time.', nil, MB_OK or MB_ICONHAND);
  end;
end;

// Update the enabled state of the items
procedure TBItemUpdate(ItemName: PChar); cdecl;
var
  ItemState: Integer;
begin
  // Get item state
  ItemState := Data.Command(EC_TB_GETITEMSTATE, Integer(ItemName), 0, 0);

  // Check for errors
  if ItemState = COMMAND_FAIL then
  begin
    MessageBox(Data.ApplicationHandle, 'Failed to get item state.', nil, MB_OK or MB_ICONHAND);
    Exit;
  end;

  if StrIComp(ItemName, 'ShowSelectionItem') = 0 then
  begin
    // The ShowSelectionItem will be enabled only if an editor is available and if
    // text is selected in that editor.
    if (Data.Command(EC_EDIT_AVAIL, 0, 0, 0) <> 0) and
           (Data.Command(EC_EDIT_SELAVAIL, 0, 0, 0) = 1) then
      ItemState := ItemState or TBITEM_STATE_ENABLED
    else
      ItemState := ItemState and not TBITEM_STATE_ENABLED;
  end else
  if StrIComp(ItemName, 'InsertDateTimeItem') = 0 then
  begin
    if Data.Command(EC_EDIT_AVAIL, 0, 0, 0) <> 0 then
      ItemState := ItemState or TBITEM_STATE_ENABLED
    else
      ItemState := ItemState and not TBITEM_STATE_ENABLED;
  end;
  // Update the item state
  if Data.Command(EC_TB_SETITEMSTATE, Integer(ItemName), ItemState, 0) = COMMAND_FAIL then
    MessageBox(Data.ApplicationHandle, 'Failed to update item state.', nil, MB_OK or MB_ICONHAND);
end;

// Plugins initialization procedure. Called to add toolbars, items, etc.
procedure Init; cdecl;
var
  ItemData: TTBItemData;
  I, CmdResult: Integer;
begin
  // we want to insert a new top menu item at the left of the help menu, then
  // get the help menu index
  I := Data.Command(EC_TB_GETITEMINDEX, Integer(PChar('HelpMenu')), 0, 0);

  // Fill the item definition data. For item with subitems we only need the name
  // and caption.
  ZeroMemory(@ItemData, SizeOf(TTBItemData));
  ItemData.Name := 'MyNewItem';
  ItemData.Caption := 'Plugin sample';

  // Now perform the operation
  CmdResult := Data.Command(
  EC_TB_INSERTITEM, // Command for insert the item.
  Integer(PChar('tbMenu')), // Parent item name, if the name is the name of a toolbar
                            // instead of a item then the new item will be inserted
                            // at the top item list of that toolbar.
  I, // The index where we want to put the new item.
  Integer(@ItemData) // The item definition data.
  );

  // Check for errors
  if CmdResult = COMMAND_FAIL then
  begin
    MessageBox(Data.ApplicationHandle, 'Failed to insert toolbar item.', nil, MB_OK or MB_ICONHAND);
    Exit;
  end;

  // Fill the item definition data for a item that when clicked will show the current selected text.
  ZeroMemory(@ItemData, SizeOf(TTBItemData));
  ItemData.Name := 'ShowSelectionItem';
  ItemData.Caption := '&Show selection.';
  ItemData.ShortCut := 'Ctrl+F1';
  ItemData.Hint := 'Enabled only if text is selected. When clicked show the selected text.';
  ItemData.OnClick := TBItemClick;
  ItemData.OnUpdate := TBItemUpdate;

  // Insert the item
  CmdResult := Data.Command(
  EC_TB_INSERTITEM, // Command for insert the item.
  Integer(PChar('MyNewItem')), // Parent item name.
  -1, // If the index is -1 then the item will be inserted at the bottom of all items.
  Integer(@ItemData) // The item definition data.
  );

  // Check for errors
  if CmdResult = COMMAND_FAIL then
  begin
    MessageBox(Data.ApplicationHandle, 'Failed to insert toolbar item.', nil, MB_OK or MB_ICONHAND);
    Exit;
  end;

  // Fill the item definition data for a item that when clicked will insert the
  // current date and time.
  ZeroMemory(@ItemData, SizeOf(TTBItemData));
  ItemData.Name := 'InsertDateTimeItem';
  ItemData.Caption := '&Inset date && time';
  ItemData.ShortCut := 'Ctrl+F2';
  ItemData.Hint := 'Insert the current date and time.';
  ItemData.OnClick := TBItemClick;
  ItemData.OnUpdate := TBItemUpdate;

  // Insert the item
  CmdResult := Data.Command(
  EC_TB_INSERTITEM, // Command for insert the item.
  Integer(PChar('MyNewItem')), // Parent item name.
  -1, // If the index is -1 then the item will be inserted at the bottom of all items.
  Integer(@ItemData) // The item definition data.
  );

  // Check for errors
  if CmdResult = COMMAND_FAIL then
  begin
    MessageBox(Data.ApplicationHandle, 'Failed to insert toolbar item.', nil, MB_OK or MB_ICONHAND);
    Exit;
  end;

  // Now insert a separator item
  CmdResult := Data.Command(
  EC_TB_INSERTITEM, // Command for insert the item.
  Integer(PChar('MyNewItem')), // Parent item name.
  1, // Index
  0 // if no data is specified then a separator is inserted.
  );

  // Check for errors
  if CmdResult = COMMAND_FAIL then
  begin
    MessageBox(Data.ApplicationHandle, 'Failed to insert separator item.', nil, MB_OK or MB_ICONHAND);
    Exit;
  end;

end;

// Plugin finalization procedure. Called at plugin unload, use it for free memory
// allocated by the plugin. NOTE: you don't need to remove toolbars or toolbar
// items that you create, because these objects are freed by the application.
procedure Quit; cdecl;
begin

end;

// If you want to show a nice about box of your plugin you can use this procedure
// to do it, use the parameter as the parent window of your about box.
procedure About(ParentHandle: HWND); cdecl;
begin
  MessageBox(ParentHandle, 'Show an about box here.', 'About box', MB_OK);
end;

// If your plugin allow users to change settings use this procedure for show a
// configuration dialog, use the parameter as the parent window of your
// configuration dialog
procedure Config(ParentHandle: HWND); cdecl;
begin
  MessageBox(ParentHandle, 'Show a configuration dialog here.', 'Configuration', MB_OK);
end;


// Notification procedure. Called when some editor events occurs.
function Notify(Event: TEvent; Param1: Integer; Param2: Integer;
  Param3: Integer): Integer; cdecl;
begin
  case Event of
    E_BEFORECOMPILE:;
    // Param1 = pointer to null-terminated string that is the path to the scrip.
    // Param2 = 0
    // Param3 = 0

    E_COMPILEFAIL:;
    // Param1 = pointer to null-terminated string that is the path to the scrip.
    // Param2 = compiler exit code.
    // Param3 = 0

    E_COMPILESUCCES:;
    // Param1 = pointer to null-terminated string that is the path to the scrip.
    // Param2 = 0
    // Param3 = 0

    E_RUNEXECUTABLE:;
    // Param1 = pointer to null-terminated string that is the path to the executable file.
    // Param2 = 0
    // Param3 = 0

    E_LANGCHANGED:;
    // Param1 = pointer to null-terminated string that is the path to new language file.
    // Param2 = Language ID
    // Param3 = 0

    E_TBTHEMECHANGED:;
    // Param1 = pointer to null-terminated string that is the name of the new toolbar theme.
    // Param2 = 0
    // Param3 = 0
        
  end;
  Result := 0;
end;

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Exported function
function GetHMNEPluginData: PPluginData; stdcall;
begin
  // Set up data
  Data.Version := HMNE_VERSION; // Version number (required)
  Data.Description := 'HM Sample plugin (Delphi)'; // Plugin description (required)
  Data.Init := Init; // Initialization procedure (optional)
  Data.Quit := Quit; // Finalization procedure (optional)
  Data.About := About; // For show the about box (optional)
  Data.Config := Config; // For show the configuration dialog (optional)
  Data.NotifyProc := Notify; // For respond to some events (optional)

  // Return address of data
  Result := @Data;
end;

// The dll need to export only one function called GetHMNEPluginData, that function
// don't take parameters and returns the address of a TPluginData structure with
// the plugin definition.
exports GetHMNEPluginData;

begin
end.
