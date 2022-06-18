{
  HM NIS Edit (c) 2003-2004 Héctor Mauricio Rodríguez Segura <ranametal@users.sourceforge.net>
  For conditions of distribution and use, see license.txt

  Plugins interface

}
unit PluginsInt;

interface
uses Windows;

// Allocate enumerated types as unsigned double-word for compatibility with C/C++
{$Z4}

type

  // Command types for the Command function
  TEditorCommand = (
    __EC_FIRST,


    // ***** Editor commands *****

    EC_EDIT_AVAIL,
    // Returns a non cero value if an editor is available. NOTE: if this command
    // return 0 all EC_EDIT_XXXXX commands will fail
    // Note: This command returns 0 when no MDI child windows opened or when a
    // InstallOption page is in design mode.



    EC_EDIT_LEFT,           // Move cursor left one char
    EC_EDIT_RIGHT,          // Move cursor right one char
    EC_EDIT_UP,             // Move cursor up one line
    EC_EDIT_DOWN,           // Move cursor down one line
    EC_EDIT_WORDLEFT,       // Move cursor left one word
    EC_EDIT_WORDRIGHT,      // Move cursor right one word
    EC_EDIT_LINESTART,      // Move cursor to beginning of line
    EC_EDIT_LINEEND,        // Move cursor to end of line
    EC_EDIT_PAGEUP,         // Move cursor up one page
    EC_EDIT_PAGEDOWN,       // Move cursor down one page
    EC_EDIT_PAGELEFT,       // Move cursor right one page
    EC_EDIT_PAGERIGHT,      // Move cursor left one page
    EC_EDIT_PAGETOP,        // Move cursor to top of page
    EC_EDIT_PAGEBOTTOM,     // Move cursor to bottom of page
    EC_EDIT_EDITORTOP,      // Move cursor to absolute beginning
    EC_EDIT_EDITORBOTTOM,   // Move cursor to absolute end

    // Same as commands above, except they affect selection, too
    EC_EDIT_SELLEFT,
    EC_EDIT_SELRIGHT,
    EC_EDIT_SELUP,
    EC_EDIT_SELDOWN,
    EC_EDIT_SELWORDLEFT,
    EC_EDIT_SELWORDRIGHT,
    EC_EDIT_SELLINESTART,
    EC_EDIT_SELLINEEND,
    EC_EDIT_SELPAGEUP,
    EC_EDIT_SELPAGEDOWN,
    EC_EDIT_SELPAGELEFT,
    EC_EDIT_SELPAGERIGHT,
    EC_EDIT_SELPAGETOP,
    EC_EDIT_SELPAGEBOTTOM,
    EC_EDIT_SELEDITORTOP,
    EC_EDIT_SELEDITORBOTTOM,

    EC_EDIT_SELECTALL,     // Select all editor text

    EC_EDIT_UNDOAVAIL,     // Return 1 if can perform undo
    EC_EDIT_REDOAVAIL,     // Return 1 if can perform redo
    EC_EDIT_CANPASTE,      // Return 1 if can paste clipboard

    EC_EDIT_UNDO,          // Perform undo if available
    EC_EDIT_REDO,          // Perform redo if available
    EC_EDIT_CUT,           // Cut selection to clipboard
    EC_EDIT_COPY,          // Copy selection to clipboard
    EC_EDIT_PASTE,         // Paste clipboard to current position

    EC_EDIT_SCROLLUP,      // Scroll up one line leaving cursor position unchanged.
    EC_EDIT_SCROLLDOWN,    // Scroll down one line leaving cursor position unchanged.
    EC_EDIT_SCROLLLEFT,    // Scroll left one char leaving cursor position unchanged.
    EC_EDIT_SCROLLRIGHT,   // Scroll right one char leaving cursor position unchanged.

    EC_EDIT_INSERTMODE,    // Set insert mode
    EC_EDIT_OVERWRITEMODE, // Set overwrite mode
    EC_EDIT_TOGGLEMODE,    // Toggle ins/ovr mode

    EC_EDIT_NORMALSELECT,  // Normal selection mode
    EC_EDIT_COLUMNSELECT,  // Column selection mode
    EC_EDIT_LINESELECT,    // Line selection mode

    EC_EDIT_MATCHBRACKET,  // Go to matching bracket

    EC_EDIT_GOTOBOOKMARK,
    // Go to specified bookmark. Param1 = Bookmark number

    EC_EDIT_SETBOOKMARK,
    // Put a bookmark in the specified point. Param1 = Bookmark number,
    // Param2 pointer to POINT structure with the coordinate of the bookmark

    EC_EDIT_CONTEXTHELP,
    // Show the help of the specified word. Param1 = pointer to null-terminated
    // string with the word

    EC_EDIT_DELETELASTCHAR,  // Delete last char (i.e. backspace key)
    EC_EDIT_DELETECHAR,      // Delete char at cursor (i.e. delete key)
    EC_EDIT_DELETEWORD,      // Delete from cursor to end of word
    EC_EDIT_DELETELASTWORD,  // Delete from cursor to start of word
    EC_EDIT_DELETEBOL,       // Delete from cursor to beginning of line
    EC_EDIT_DELETEEOL,       // Delete from cursor to end of line
    EC_EDIT_CLEARALL,        // Delete everything
    EC_EDIT_LINEBREAK,       // Break line at current position, move caret to new line

    EC_EDIT_CHAR,
    // Insert a character at current position. Param1 = pointer to character

    EC_EDIT_BLOCKINDENT,    // Indent selection
    EC_EDIT_BLOCKUNINDENT,  // Unindent selection

    EC_EDIT_UPPERCASE,      // Convert selected text to uppercase
    EC_EDIT_LOWERCASE,      // Convert selected text to lowercase
    EC_EDIT_TOGGLECASE,     // Toggle selected text case
    EC_EDIT_TITLECASE,

    EC_EDIT_GETCARETPOS,
    // Retrives the current caret position. Param1 = pointer to a POINT
    // structure that receives the caret coordinates

    EC_EDIT_SETCARETPOS,
    // Set the caret position. Param1 = pointer to a POINT structure with the new
    // caret coordinates

    EC_EDIT_SELAVAIL,        // Return 1 if text is selected.
    EC_EDIT_GETSELTEXTLEN,   // Return the length of the selected text not including the terminating null character

    EC_EDIT_GETSELTEXT,
    // Retrives the current selected text. Param1 must point to the buffer that
    // receives the text; Param2 specifies the maximum size, in characters, of the
    // buffer specified by Param1, this value should be set to at least the value
    // returned by EC_EDIT_GETSELTEXTLEN command plus one to allow sufficient room
    // in the buffer for the text. Returns the number of character copied to the
    // buffer (not including the terminating null character).

    EC_EDIT_SETSELTEXT,
    // Replace the selected text, if no text selected insert the text into the
    // current caret position. Param1 points to a null-terminated string that is the text.

    EC_EDIT_GETTEXTLEN,
    // Returns the length of all text in the editor not including the terminating null character

    EC_EDIT_GETTEXT,
    // Retrives all the editor text. Param1 must point to the buffer that
    // receives the text; Param2 specifies the maximum size, in characters, of the
    // buffer specified by Param1, this value should be set to at least the value
    // returned by EC_EDIT_GETTEXTLEN command plus one to allow sufficient room
    // in the buffer for the text. Returns the number of character copied to the
    // buffer (not including the terminating null character).

    EC_EDIT_SETTEXT,
    // Replace all the editor text. Param1 must points to a null-terminated string
    // that is the new editor text.

    EC_EDIT_LINECOUNT,
    // Returns the number of text lines in the editor.

    EC_EDIT_GETLINELENGTH,
    // Return the length (not including the terminating null character) of the
    // specified line number. Param1 is the line number.

    EC_EDIT_GETLINETEXT,
    // Retrives the text of the specified editor line number. Param1 is the line
    // number; Param2 must point to the buffer that receives the text; Param3
    // specifies the maximum size, in characters, of the buffer specified by Param2,
    // this value should be set to at least the value returned by EC_EDIT_GETLINELENGTH
    // command plus one to allow sufficient room in the buffer for the text.
    // Returns the number of character copied to the buffer (not including the
    // terminating null character).

    EC_EDIT_SETLINETEXT,
    // Replace the text of the specified editor line. Param1 is the line number;
    // Param2 must point to a null-terminated string that is the new line text.

    EC_EDIT_GETTOPLINENUMBER,
    // Returns the number of the first visible line in the editor.

    // Set the first visible line in the editor. Param1 is the line number.
    EC_EDIT_SETTOPLINENUMBER,

    EC_EDIT_INSERTLINE,
    // Insert a line at the specified index. Param1 is the index number, set Param1 to
    // a value of -1 to add the line at the bottom; Param2 must point to a
    // null-terminated string that is the text of the new line.

    EC_EDIT_DELETELINE,
    // Delete the specified line. Param1 is the line number.



    // ***** Toolbar commands *****

    EC_TB_CREATENEW,
    // Create a new tool bar. Param1 must point to a null-terminated string that
    // is the toolbar name; Param2 must point to a null-terminated string that is
    // the toolbar caption.

    EC_TB_REMOVE,
    // Remove an existing toolbar. Param1 must point to a null-terminated string that
    // is the name of the toolbar that you want remove. Note you can only remove
    // toolbars created by your plugin or by others plugins.

    EC_TB_INSERTITEM,
    // Create new toolbar item. Param1 must point to a null-terminated string that
    // is the name of the parent item, if the parent item is the name of a toolbar
    // then the item will be inserted at the top list of items of that toolbar;
    // Param2 is the index (zero based) where to insert the new item; Param3 must
    // point to a TTBItemData structure with the item definition. NOTE: For a list of
    // available toolbars and items see comments below.

    EC_TB_REMOVEITEM,
    // Remove an existing toolbar item. Param1 must point to a null-terminated string
    // that is the name of the toolbar item that you want remove. Note you can only
    // remove items created by your plugin or by others plugins.

    EC_TB_GETITEMDATA,
    // Retrives the definition data of a toolbar item. Param1 must point to a
    // null-terminated string that is the name of the item; Param2 must point to TTBItemData
    // that receive the item data. NOTE: You can retrive the data of items created by plugins.

    EC_TB_SETITEMDATA,
    // Set the definition data of a toolbar item. Param1 must point to a
    // null-terminated string that is the name of the item; Param2 must point to TTBItemData
    // with the new item data. NOTE: You can only set the data of items created by plugins.

    EC_TB_GETITEMINDEX,
    // Returns the index of the specified toolbar item. Param1 must point to a
    // null-terminated string that is the name of the item. Note: items arrays are 0 based.

    EC_TB_SETITEMINDEX,
    // Set the index of the specified toolbar item. Param1 must point to a
    // null-terminated string that is the name of the item; Param2 is the new item index.

    EC_TB_GETITEMSTATE,
    // Returns the state of the specified toolbar item. The state is a combination
    // of TBITEM_STATE_ values (see symbols defined below). Param1 must point to a
    // null-terminated string that is the name of the item.

    EC_TB_SETITEMSTATE,
    // Set the item state of the specified toolbar item. Param1 must point to a
    // null-terminated string that is the name of the item; Param2 is the new item state.
    // NOTE: You can only set the state of items created by plugins.

    EC_TB_GETSUBITEMCOUNT,
    // Return the number of subitems of the specified toolbar item. Param1 must point to a
    // null-terminated string that is the name of the item.

    EC_TB_CLICKITEM,
    // Simulate a mouse click in the specified item. Param1 must point to a
    // null-terminated string that is the name of the item.


    // ***** File commands *****

    EC_FILE_OPEN,
    // Open the specified file. Param1 must point to a null-terminated string that is
    // the path to the file, if Param1 = 0 then open a empty edit window.

    EC_FILE_OPENTEMPLATE,
    // Open the specified file as template . Param1 must point to a null-terminated
    // string that is the path to the file.

    EC_FILE_ISFILEOPENED,
    // if the specified file is opened returns the window handle of the MDI Child
    // window that has the file contents else returns 0;



    // ***** Misc commands *****

    EC_GOTOURL,
    // Make the integrated browser show the specified URL. Param1 must point to
    // a null-terminated string that is the URL.

    EC_GETIMAGELIST,
    // Returns the toolbar's image list handle

    EC_ISPLUGINLOADED,
    // Return 1 if the specified plugin is loaded. Param1 must point to a null-terminated
    // string that is the description of the plugin.


    // ***** New file commands *****

    // Get the file name of the current active editor.
    // Param1 must point to a buffer with a least MAX_PATH bytes allocated.
    // If succes returns the number of bytes copied to the buffer.
    EC_FILE_GET_CURRENT_FILENAME,

    __EC_LAST);



  // Event types for the NotifyProc
  TEvent = (
  __E_FIRST,

  E_BEFORECOMPILE,
  E_COMPILEFAIL,
  E_COMPILESUCCES,
  E_COMPILECANCELED,
  E_RUNEXECUTABLE,
  E_LANGCHANGED,
  E_TBTHEMECHANGED,

  __E_LAST);


(******************************************************************************)

const
  // Tool bar item state values
  TBITEM_STATE_ENABLED  = $00000001;
  TBITEM_STATE_CHECKED  = $00000002;
  TBITEM_STATE_VISIBLE  = $00000004;

  // TPluginData.Command return this on command failure.
  COMMAND_FAIL = -1;

  // Version number
  HMNE_VERSION = $00000001;

type
   // This record represents a toolbar item
   PTBItemData = ^TTBItemData;
   TTBItemData = record
     Name: PChar;
     // Item name, this name is used to identify the item must be a unique name,
     // the case is ignored.

     Caption: PChar;
     // Item caption.

     ShortCut: PChar;
     // Item short cut. Can be Ctrl+D, Shift+Ctrl+K, etc.

     Hint: PChar;
     // Usage hint of the item (show in the status bar).

     ImgeListHandle: THandle;
     // Handle of the image list to get the item glyph. if the item don't need
     // a glyph set this value to 0;

     ImageIndex: Integer;
     // Image index to draw as item glyph. If ImgeListHandle = 0 then this value
     // is ignored.

     OnClick: procedure(ItemName: PChar); cdecl;
     // Callback proc called when the item is clicked. Can be null.

     OnUpdate: procedure(ItemName: PChar); cdecl;
     // Callback proc called to update the item state. Can be null.
     // WARNING: Do not add time-intensive code to this function. This executes
     // whenever the application is idle. If the event handler takes too much time,
     // it will adversely affect performance of the entire application.
   end;

   PPluginData = ^TPluginData;
   TPluginData = record
     // ***** Pluign info *****

     Version: DWord;
     // Must be HMNE_VERSION. (Required)

     Description: PChar;
     // A description of the plugin. (Required)

     // ***** Window handles *****

     ApplicationHandle: HWND;
     // Delphi's TApllication object handle. (filled in the program)
     // For C/C++ programers: use this handle as the parent for your dialogs instead
     // of the main form handle.
     // For Delphi programers (taken from the Delphi 5 help file): When writing a
     // DLL that uses VCL forms, assign the window handle of the host EXE’s main
     // window to the DLL’s Application.Handle property. This makes the DLL’s form
     // part of the host application. Never assign to the Handle property in an EXE.

     MainWindowHandle: HWND;
     // Main form handle. (filled in the program)

     MainWindowClientHandle: HWND;
     // Main form client area handle. (filled in the program)

     DllHandle: HINST;
     // Instance handle of the calling dll. (filled in the program)

     // ***** Callbacks *****

     Init: procedure; cdecl;
     // Plugin initialization procedure (can be null). Called when the plug in
     // is loaded. Use it for create toolbar items, initialize data, etc.


     Quit: procedure; cdecl;
     // Plugin deinitialization procedure (can be null). Called when the plug in
     // is unloaded. Use it for free memory allocated at plugin init. Note you don't
     // Need to remove the toolbar and toolbar items that you create, they are freed
     // automatically by the application.

     About: procedure(hwndParent: HWND); cdecl;
     // About box (can be null). Use this procedure to show the about box of the plugin. Use the
     // hwndParent parameter as the parent window for the about box.

     Config: procedure(hwndParent: HWND); cdecl;
     // Configuration dialog (can be null). If your plugin need some configuration
     // use this procedure to show a configuration dialog. Use the hwndParent
     // parameter as the parent window for the dialog.

     MessageHook: function(Msg: PMsg): Integer; cdecl;
     // Assign this to intercept all applications messages. Return 1 for avoid
     // dispatch the message. Note this is called from the main message loop, be
     // careful to don't add time-intensive code. Assign this member only if you
     // know what are you doing.

     NotifyProc: function(Event: TEvent; Param1: Integer;
       Param2: Integer; Param3: Integer): Integer; cdecl;
     // Called when some events occurs. Can be null. See TEvent enum type for a
     // list of possible notifications.

     Command: function(Command: TEditorCommand; Param1: Integer;
       Param2: Integer; Param3: Integer): Integer; cdecl;
     // Command procedure (filled by the program). Call this to perform operations
     // in the editor, see the TEditorCommand enum type for a list of available commands.
     // NOTE: if any command fails this functions returns COMMAND_FAIL
   end;


(*********************************************************************************
 NOTE: Popup menus and the menu bar are treated as toolbars.

        |----------------------------------------------------|
        | List of toolbar names and its items:               |
        |----------------------------------------------------|
        | Toolbar name   |  Items                            |
        |----------------------------------------------------|
        | tbMenu         |                                   |
        |                |  FileMenu                         |
        |                |    fmNewScriptItem                |
        |                |    fmWizardItem                   |
        |                |    fmNewTemplateItem              |
        |                |    fmNewIOItem                    |
        |                |    fmSeparator1                   |
        |                |    fmOpenItem                     |
        |                |    fmReopenItem                   |
        |                |    fmSeparator2                   |
        |                |    fmSaveItem                     |
        |                |    fmSaveAsItem                   |
        |                |    fmSeparator3                   |
        |                |    fmPrintItem                    |
        |                |    fmConfigPrintItem              |
        |                |    fmSeparator4                   |
        |                |    fmExitItem                     |
        |                |  EditMenu                         |
        |                |    emUndoItem                     |
        |                |    emRedoItem                     |
        |                |    emSeparator1                   |
        |                |    emCutItem                      |
        |                |    emCopyItem                     |
        |                |    emCopyHTMLItem                 |
        |                |    emPasteItem                    |
        |                |    emSeparator2                   |
        |                |    emSelectAllItem                |
        |                |  SearchMenu                       |
        |                |    smFindItem                     |
        |                |    smFindNextItem                 |
        |                |    smReplaceItem                  |
        |                |    smSeparator1                   |
        |                |    smGotoLineItem                 |
        |                |    smSeparator2                   |
        |                |    smToggleBookmarkItem           |
        |                |    smGotoBookmarkItem             |
        |                |  ViewMenu                         |
        |                |    vmToolBarsItem                 |
        |                |      vmVisibilityToggleStandarItem|
        |                |      vmVisibilityToggleEditItem   |
        |                |      vmVisibilityToggleSearchItem |
        |                |      vmVisibilityToggleViewItem   |
        |                |      vmVisibilityToggleFormatItem |
        |                |      vmVisibilityToggleNSISItem   |
        |                |      vmVisibilityToggleWindowItem |
        |                |    vmSeparator1                   |
        |                |    vmVisibilityToggleBrowserItem  |
        |                |    vmVisibilityToggleWinListItem  |
        |                |    vmIOPanelItem                  |
        |                |    vmVisibilityToggleStatusBarItem|
        |                |    vmLogBoxItem                   |
        |                |    vmSeparator2                   |
        |                |    vmSpecialCharsItem             |
        |                |    vmToggleDesignModeItem         |
        |                |    vmSeparator3                   |
        |                |    vmOptionsItem                  |
        |                |  FormatMenu                       |
        |                |    fmIndentItem                   |
        |                |    fmUnindentItem                 |
        |                |    fmSeparator5                   |
        |                |    fmUpperCaseItem                |
        |                |    fmLowerCaseItem                |
        |                |    fmToggleCaseItem               |
        |                |    fmQuoteItem                    |
        |                |  ToolsMenu                        |
        |                |    tmInsertColorItem              |
        |                |    tmInsertFileNameItem           |
        |                |    tmSeparator1                   |
        |                |    tmTemplateItem                 |
        |                |    tmEditTemplatesItem            |
        |                |  NSISMenu                         |
        |                |    nmCompItem                     |
        |                |    nmCompRunItem                  |
        |                |    nmStopCompItem                 |
        |                |    nmSeparator1                   |
        |                |    nmRunItem                      |
        |                |    nmSeparator2                   |
        |                |    nmConfigItem                   |
        |                |  WindowMenu                       |
        |                |    wmCacadeItem                   |
        |                |    wmTileHorItem                  |
        |                |    wmTileVerItem                  |
        |                |    wmArrangeItem                  |
        |                |    wmSeparator1                   |
        |                |    wmPriorItem                    |
        |                |    wmNextItem                     |
        |                |    wmSMUItem                      |
        |                |    wmSeparator2                   |        
        |                |    wmCloseItem                    |
        |                |    wmSeparator3Item               |
        |                |    wmListItem                     |
        |                |  HelpMenu                         |
        |                |    hmNSISHelp                     |
        |                |    hmSeparator1                   |
        |                |    hmURLGroupItem                 |
        |                |    hmSeparator2                   |
        |                |    hmAboutItem                    |
        |-----------------------------------------------------
        | tbStandard     |                                   |
        |                |    stbNewScriptItem               |
        |                |    stbWizardItem                  |
        |                |    stbNewIOItem                   |
        |                |    stbOpenItem                    |
        |                |    stbSeparator1                  |
        |                |    stbSaveItem                    |
        |                |    stbSeparator2                  |
        |                |    stbPrintItem                   |
        |-----------------------------------------------------
        | tbEdit         |                                   |
        |                |    etbUndoItem                    |
        |                |    etbRedoItem                    |
        |                |    etbSeparator1                  |
        |                |    etbCutItem                     |
        |                |    etbCopyItem                    |
        |                |    etbPasteItem                   |
        |-----------------------------------------------------
        | tbSearch       |                                   |
        |                |    stbFindItem                    |
        |                |    stbFindNextItem                |
        |                |    stbReplaceItem                 |
        |                |    stbSeparator3                  |
        |                |    stbGotoLineItem                |
        |-----------------------------------------------------
        | tbFormat       |                                   |
        |                |    ftbIndentItem                  |
        |                |    ftbUnIndentItem                |
        |                |    ftbSeparator1                  |
        |                |    ftbUpperCaseItem               |
        |                |    ftbLowerCaseItem               |
        |                |    ftbToggleCaseItem              |
        |                |    ftbQuoteItem                   |
        |-----------------------------------------------------
        | tbView         |                                   |
        |                |    vtbSpecialCharsItem            |
        |                |    vtbToggleDsgModeItem           |
        |-----------------------------------------------------
        | tbNSIS         |                                   |
        |                |    ntbCompItem                    |
        |                |    ntbCompRunItem                 |
        |                |    ntbStopCompItem                |
        |                |    ntbSeparator1                  |
        |                |    ntbRunItem                     |
        |-----------------------------------------------------
        | tbWindow       |                                   |
        |                |    wtbCascadeItem                 |
        |                |    wtbTileHorItem                 |
        |                |    wtbTileVerItem                 |
        |                |    wtbSeparator1                  |
        |                |    wtbPriorItem                   |
        |                |    wtbNextItem                    |
        |                |    wtbSeparator2                  |
        |                |    wtbListItem                    |
        |-----------------------------------------------------
        | tbBrowser      |   btbBackItem                     |
        |                |   btbForwardItem                  |
        |                |   btbStopItem                     |
        |                |   btbRefreshItem                  |
        |                |   btbHomeItem                     |
        |                |   btbSeparator1                   |
        |                |   btbGoItem                       |
        |-----------------------------------------------------
        | EditPopup      |                                   |
        |                |   puInsertColorItem               |
        |                |   puInsertFileNameItem            |
        |                |   puSeparator1                    |
        |                |   puTemplateItem                  |
        |                |   puSeparator2                    |
        |                |   puUndoItem                      |
        |                |   puRedoItem                      |
        |                |   puSeparator3                    |
        |                |   puCutItem                       |
        |                |   puCopyItem                      |
        |                |   puCopyHTMLItem                  |
        |                |   puPasteItem                     |
        |                |   puSelectAllItem                 |
        |                |   puSeparator4                    |
        |                |   puFindItem                      |
        |                |   puFindNextItem                  |
        |                |   puReplaceItem                   |
        |                |   puSeparator5                    |
        |                |   puToggleBookmarkItem            |
        |                |   puGotoBookmarkItem              |
        |-----------------------------------------------------
        | WinListPopup   |                                   |
        |                |   wpuShowItem                     |
        |                |   wpuCloseItem                    |
        |                |   wpuSeparator1                   |
        |                |   wpuSaveItem                     |
        |                |   wpuSaveAsItem                   |
        |                |   wpuSeparator2                   |
        |                |   wpuTileHorItem                  |
        |                |   wpuTileVerItem                  |
        |                |   wpuSeparator3                   |
        |                |   wpuCompItem                     |
        |                |   wpuCompRunItem                  |
        |                |   wpuRunItem                      |
        ------------------------------------------------------
*********************************************************************************)

implementation

end.
