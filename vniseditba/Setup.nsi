##################################################################################################
#  HM NIS Edit (c) 2003-2005 H閏tor Mauricio Rodr韌uez Segura <ranametal@users.sourceforge.net>  #
#  For conditions of distribution and use, see license.txt                                       #
#  Installation script                                                                           #
# ---------------------------------------------------------------------------------------------- #
#  VNISEdit 2.0.3 安装脚本 <restools@21cn.com> URL: http://restools.hanzify.org/                 #
##################################################################################################

; 安装程序定义
!define APP_NAME "HM VNISEdit"
!define APP_VERSION "2.0.3"
!define APP_HOME_PAGE "http://hmne.sourceforge.net/"

!include "MUI.nsh"

SetCompressor lzma

 ########## MUI 界面设置 ##########
!define MUI_ABORTWARNING
!define MUI_ICON "${NSISDIR}\Contrib\Graphics\Icons\classic-install.ico"
!define MUI_UNICON "${NSISDIR}\Contrib\Graphics\Icons\classic-uninstall.ico"
!define MUI_HEADERIMAGE
!define MUI_HEADERIMAGE_BITMAP "header.bmp"

 ########## 页面设置 ##########
!insertmacro MUI_PAGE_WELCOME
!insertmacro MUI_PAGE_LICENSE "License.txt"
!insertmacro MUI_PAGE_DIRECTORY
!insertmacro MUI_PAGE_INSTFILES
!define MUI_FINISHPAGE_RUN "$INSTDIR\VNISEdit.exe"
!insertmacro MUI_PAGE_FINISH

!insertmacro MUI_UNPAGE_CONFIRM
!insertmacro MUI_UNPAGE_INSTFILES

 ########## 语言设置 ##########
;!insertmacro MUI_LANGUAGE "Spanish"
;!insertmacro MUI_LANGUAGE "English"
;!insertmacro MUI_LANGUAGE "Polish"
;!insertmacro MUI_LANGUAGE "French"
;!insertmacro MUI_LANGUAGE "Czech"
;!insertmacro MUI_LANGUAGE "Italian"
;!insertmacro MUI_LANGUAGE "Russian"
;!insertmacro MUI_LANGUAGE "German"
;!insertmacro MUI_LANGUAGE "Greek"
;!insertmacro MUI_LANGUAGE "TradChinese"
!insertmacro MUI_LANGUAGE "SimpChinese"
;!insertmacro MUI_LANGUAGE "Ukrainian"
;!insertmacro MUI_LANGUAGE "PortugueseBR"
;!insertmacro MUI_LANGUAGE "Korean"
;!insertmacro MUI_LANGUAGE "Hungarian"
;!insertmacro MUI_LANGUAGE "Japanese"
;!insertmacro MUI_LANGUAGE "Finnish"

;-------------------------------------------------------------------------
; 如果你没有 UPX 压缩程序( http://upx.sourceforge.net/ ) 请注释掉以下定义。
;!define HAVE_UPX

!ifdef HAVE_UPX
  !packhdr tmpexe.tmp "UPX --best -q --compress-icons=0 tmpexe.tmp"
!endif

Name "${APP_NAME} ${APP_VERSION}"
OutFile "..\nisedit${APP_VERSION}.exe"
InstallDir "$PROGRAMFILES\HMSoft\NIS Edit"
InstallDirRegKey  HKLM "Software\Microsoft\Windows\CurrentVersion\App Paths\VNISEdit.exe" ""
ShowInstDetails show
ShowUnInstDetails show

############ 语言文件 ##################
;LangString LANGFILE ${LANG_SPANISH} "Espa駉l"
;LangString LANGFILE ${LANG_ENGLISH} "English"
;LangString LANGFILE ${LANG_POLISH} "Polski"
;LangString LANGFILE ${LANG_FRENCH} "French"
;LangString LANGFILE ${LANG_CZECH} "Czech"
;LangString LANGFILE ${LANG_ITALIAN} "Italiano"
;LangString LANGFILE ${LANG_RUSSIAN} "Russian"
;LangString LANGFILE ${LANG_GERMAN} "German"
;LangString LANGFILE ${LANG_GREEK} "Greek"
;LangString LANGFILE ${LANG_TRADCHINESE} "Chinese_Traditional"
LangString LANGFILE ${LANG_SIMPCHINESE} "Chinese_Simplified"
;LangString LANGFILE ${LANG_UKRAINIAN} "Ukrainian"
;LangString LANGFILE ${LANG_PORTUGUESEBR} "Portuguese_Brazil"
;LangString LANGFILE ${LANG_KOREAN} "Korean"
;LangString LANGFILE ${LANG_HUNGARIAN} "Hungarian"
;LangString LANGFILE ${LANG_JAPANESE} "Japanese"
;LangString LANGFILE ${LANG_FINNISH} "Finnish"

Var REG_ROOT_KEY

Function .onInit
;  !insertmacro MUI_LANGDLL_DISPLAY

  UserInfo::GetAccountType
  Pop $R0
  StrCmp $R0 "Admin" is_admin

	ReadRegStr $INSTDIR HKCU "Software\Microsoft\Windows\CurrentVersion\App Paths\VNISEdit.exe" "PATH"
	IfErrors 0 +2
    StrCpy $INSTDIR "$PROFILE\HMSoft\NIS Edit"
  SetShellVarContext current
  StrCpy $REG_ROOT_KEY "HKCU"
  Goto start

is_admin:
  SetShellVarContext all
  StrCpy $REG_ROOT_KEY "HKLM"

start:
FunctionEnd


!define MAX_MRU_ITEMS 9
var C
Function _AddToMRU
  Pop $R1 ; File to add to the MRU
  StrCpy $C 0 ; Clear variable
  loopbegin:
    IntOp $C $C + 1
    ifFileExists "$INSTDIR\nisedit.ini" 0 +3
    ReadIniStr $R0 "$INSTDIR\nisedit.ini" "Recent" "MRU$C"
    Goto +2
    ReadRegStr $R0 HKCU "Software\HM Software\Nis Edit\Recent" "MRU$C"
    StrCmp $R0 "" loopend
    StrCmp $R0 $R1 end ; File aready in the MRU
    Goto loopbegin
  loopend:
  IntCmp $C ${MAX_MRU_ITEMS} 0 0 end ; MRU full
  ifFileExists "$INSTDIR\nisedit.ini" 0 +3
  WriteIniStr "$INSTDIR\nisedit.ini" "Recent" "MRU$C" "$R1"
  Goto end
  WriteRegStr HKCU "Software\HM Software\Nis Edit\Recent" "MRU$C" "$R1"
  end:
FunctionEnd

!macro AddToMRU FILE_NAME
  Push "${FILE_NAME}"
  Call _AddToMRU
!macroend

Section "-" SEC01
!ifdef NSIS_CONFIG_LOG
  LogSet on
!endif

  ; Si se instala sobre la versi髇 anterior se hacen las modificaciones respectivas
  Delete $INSTDIR\Default.lng
  Delete $INSTDIR\English.lng
  Delete $INSTDIR\Ejemplo\Lic.txt
  Delete $INSTDIR\Ejemplo\App.hlp
  Delete $INSTDIR\Ejemplo\App.exe
  RmDir  $INSTDIR\Ejemplo
  
  Delete "$INSTDIR\CmpParsing.ini"
  Delete "$INSTDIR\CmpParsing-French.ini"
  Delete "$INSTDIR\HelpIndex.ini"
  Delete "$INSTDIR\NSIS.syn"

  SetOverwrite try
  SetOutPath "$INSTDIR"
  File "VNISEdit.exe"
  CreateShortCut "$DESKTOP\HM NIS Edit.lnk" "$INSTDIR\VNISEdit.exe"
  File "Setup.nsi"
  File "License.txt"
  File "Header.bmp"
  File "TIPS.txt"
  SetOverWrite off
  File "Templates.dat"

  ; Language files
  SetOverwrite on
  SetOutPath "$INSTDIR\Lang"
  File "Lang\Espa駉l.lng"
  File "Lang\English.lng"
  File "Lang\Polski.lng"
  File "Lang\French.lng"
  File "Lang\Czech.lng"
  File "Lang\Italiano.lng"
  File "Lang\Russian.lng"
  File "Lang\German.lng"
  File "Lang\Greek.lng"
  File "Lang\Chinese_Traditional.lng"
  File "Lang\Chinese_Simplified.lng"
  File "Lang\Ukrainian.lng"
  File "Lang\Portuguese_Brazil.lng"
  File "Lang\Korean.lng"
  File "Lang\Hungarian.lng"
  File "Lang\Japanese.lng"
  File "Lang\Finnish.lng"

  ; Configuration files
  SetOutPath "$INSTDIR\Config"
  File "Config\Syntax.ini"
  File "Config\IOCtrlFlags.ini"
  File "Config\HelpIndex.ini"
  File "Config\CmpParsing.ini"
  File "Config\CmpParsing-French.ini" ; <-- Para que amigos de Francia est閚 contentos :)
  
  ; Plugins
  SetOutPath "$INSTDIR\Plugins"
  ; << Install some plugins >>
  SetOutPath "$INSTDIR\Plugins\ExDll\Delphi"
  File "Plugins\ExDll\Delphi\hmne_sample.dpr"
  File "Plugins\ExDll\Delphi\hmne_sample.dof"
;  File "Source\PluginsInt.pas"
  SetOutPath "$INSTDIR\Plugins\ExDll\C"
  File "Plugins\ExDll\C\hmne_sample.dev"
  File "Plugins\ExDll\C\hmne_sample.dsp"
  File "Plugins\ExDll\C\hmne_sample.dsw"
  File "Plugins\ExDll\C\hmne_sample.c"
  File "Plugins\ExDll\C\PluginsInt.h"

  ifFileExists "$INSTDIR\nisedit.ini" 0 +4
  WriteIniStr "$INSTDIR\nisedit.ini" "Options" "Language" "$(LANGFILE)"
  WriteIniStr "$INSTDIR\nisedit.ini" "Options" "IntallLanguage" "$LANGUAGE"
  Goto +3
  WriteRegStr HKCU "Software\HM Software\Nis Edit\Options" "Language" "$(LANGFILE)"
  WriteRegStr HKCU "Software\HM Software\Nis Edit\Options" "IntallLanguage" "$LANGUAGE"
  !insertmacro AddToMRU "$INSTDIR\Setup.nsi"
  !insertmacro AddToMRU "$INSTDIR\TIPS.txt"
SectionEnd

!macro WRITE_REG_DATA FUNCTION SUB_KEY ENTRY_NAME ENTRY_VALUE
  ${FUNCTION} SHCTX "${SUB_KEY}" "${ENTRY_NAME}" "${ENTRY_VALUE}"
!macroend

!macro ADD_UNINSTALL_ENTRY_STR ENTRY_NAME ENTRY_VALUE
  !insertmacro WRITE_REG_DATA WriteRegStr "Software\Microsoft\Windows\CurrentVersion\Uninstall\HM NIS Edit" "${ENTRY_NAME}" "${ENTRY_VALUE}"
!macroend

!macro ADD_UNINSTALL_ENTRY_DWORD ENTRY_NAME ENTRY_VALUE
  !insertmacro WRITE_REG_DATA WriteRegDWORD "Software\Microsoft\Windows\CurrentVersion\Uninstall\HM NIS Edit" "${ENTRY_NAME}" "${ENTRY_VALUE}"
!macroend

Section -Post
  WriteUninstaller "$INSTDIR\uninst.exe"
  !insertmacro WRITE_REG_DATA WriteRegStr "Software\Microsoft\Windows\CurrentVersion\App Paths\VNISEdit.exe" "" "$INSTDIR\VNISEdit.exe"
  !insertmacro WRITE_REG_DATA WriteRegStr "Software\Microsoft\Windows\CurrentVersion\App Paths\VNISEdit.exe" "PATH" "$INSTDIR"
  !insertmacro ADD_UNINSTALL_ENTRY_STR "" "$INSTDIR\VNISEdit.exe"
  !insertmacro ADD_UNINSTALL_ENTRY_STR "DisplayName" "$(^Name)"
  !insertmacro ADD_UNINSTALL_ENTRY_STR "UninstallString" "$INSTDIR\uninst.exe"
  !insertmacro ADD_UNINSTALL_ENTRY_STR "DisplayIcon" "$INSTDIR\VNISEdit.exe"
  !insertmacro ADD_UNINSTALL_ENTRY_STR "DisplayVersion" "${APP_VERSION}"
  !insertmacro ADD_UNINSTALL_ENTRY_STR "URLUpdateInfo" "${APP_HOME_PAGE}"
  !insertmacro ADD_UNINSTALL_ENTRY_STR "URLInfoAbout" "${APP_HOME_PAGE}"
  !insertmacro ADD_UNINSTALL_ENTRY_STR "InstallLocation" "$INSTDIR"
  !insertmacro ADD_UNINSTALL_ENTRY_STR "InstallSource" "$EXEDIR"
  !insertmacro ADD_UNINSTALL_ENTRY_STR "Publisher" "Hector Maurcio Rodriguez Segura"
  !insertmacro ADD_UNINSTALL_ENTRY_DWORD "NoModifiy" 1
  !insertmacro ADD_UNINSTALL_ENTRY_DWORD "NoRepair" 1
  
  WriteRegStr HKCR "NSISFile\shell\HMNISEdit" "" "Edit with HM NIS Edit"
  WriteRegStr HKCR "NSISFile\shell\HMNISEdit\command" "" '$INSTDIR\VNISEdit.exe "%1"'
  WriteRegStr HKCR "NSHFile\shell\HMNISEdit" "" "Edit with HM NIS Edit"
  WriteRegStr HKCR "NSHFile\shell\HMNISEdit\command" "" '$INSTDIR\VNISEdit.exe "%1"'
SectionEnd

############################################################################################
;                                 Desinstalador                                            ;
############################################################################################


Function un.onInit
  FindWindow $R0 "THMNISEdit2_MainWindowClass"
  IsWindow $R0 0 +3
  MessageBox MB_ICONEXCLAMATION|MB_OK "Before uninstall HM NIS Edit you must close it."
  Abort

  ifFileExists "$INSTDIR\nisedit.ini" 0 +3
  ReadIniStr $LANGUAGE "$INSTDIR\nisedit.ini" "Options" "IntallLanguage"
  Goto +2
  ReadRegStr $LANGUAGE HKCU "Software\HM Software\Nis Edit\Options" "IntallLanguage"
  
  UserInfo::GetAccountType
  Pop $R0
  StrCmp $R0 "Admin" is_admin

  SetShellVarContext current
  StrCpy $REG_ROOT_KEY "HKCU"
  Goto start

is_admin:
  SetShellVarContext all
  StrCpy $REG_ROOT_KEY "HKLM"

start:
FunctionEnd

!macro DELETE_REG_KEY REG_KEY
	StrCmp $REG_ROOT_KEY "HKLM" 0 +3
    DeleteRegKey HKLM "${REG_KEY}"
    Goto +2
 	DeleteRegKey HKCU "${REG_KEY}"
!macroend

Section Uninstall
  Delete "$INSTDIR\VNISEdit.exe"
  Delete "$INSTDIR\License.txt"
  Delete "$INSTDIR\Setup.nsi"
  Delete "$INSTDIR\uninst.exe"
  Delete "$INSTDIR\Header.bmp"
  Delete "$INSTDIR\Templates.dat"
  Delete "$INSTDIR\TIPS.txt"
  Delete "$INSTDIR\nisedit.ini"

  Delete "$INSTDIR\Config\HelpIndex.ini"
  Delete "$INSTDIR\Config\Syntax.ini"
  Delete "$INSTDIR\Config\CmpParsing.ini"
  Delete "$INSTDIR\Config\CmpParsing-French.ini"
  Delete "$INSTDIR\Config\IOCtrlFlags.ini"

  Delete "$INSTDIR\Lang\Espa駉l.lng"
  Delete "$INSTDIR\Lang\English.lng"
  Delete "$INSTDIR\Lang\Polski.lng"
  Delete "$INSTDIR\Lang\French.lng"
  Delete "$INSTDIR\Lang\Czech.lng"
  Delete "$INSTDIR\Lang\Italiano.lng"
  Delete "$INSTDIR\Lang\Russian.lng"
  Delete "$INSTDIR\Lang\German.lng"
  Delete "$INSTDIR\Lang\Greek.lng"
  Delete "$INSTDIR\Lang\Chinese_Traditional.lng"
  Delete "$INSTDIR\Lang\Chinese_Simplified.lng"
  Delete "$INSTDIR\Lang\Ukrainian.lng"
  Delete "$INSTDIR\Lang\Portuguese_Brazil.lng"
  Delete "$INSTDIR\Lang\Korean.lng"
  Delete "$INSTDIR\Lang\Hungarian.lng"
  Delete "$INSTDIR\Lang\Japanese.lng"
  Delete "$INSTDIR\Lang\Finnish.lng"

  Delete "$INSTDIR\Plugins\ExDll\Delphi\hmne_sample.dpr"
  Delete "$INSTDIR\Plugins\ExDll\Delphi\hmne_sample.dof"
  Delete "$INSTDIR\Plugins\ExDll\Delphi\PluginsInt.pas"
  Delete "$INSTDIR\Plugins\ExDll\C\hmne_sample.dsp"
  Delete "$INSTDIR\Plugins\ExDll\C\hmne_sample.dsw"
  Delete "$INSTDIR\Plugins\ExDll\C\hmne_sample.dev"
  Delete "$INSTDIR\Plugins\ExDll\C\hmne_sample.c"
  Delete "$INSTDIR\Plugins\ExDll\C\PluginsInt.h"

  Delete "$DESKTOP\HM NIS Edit.lnk"

  RMDir "$INSTDIR\Plugins\ExDll\Delphi"
  RMDir "$INSTDIR\Plugins\ExDll\C"
  RMDir "$INSTDIR\Plugins\ExDll"
  RMDir "$INSTDIR\Plugins"
  RMDir "$INSTDIR\Config"
  RMDir "$INSTDIR\Lang"
  RMDir "$INSTDIR"

  DeleteRegKey HKCU "Software\HM Software\Nis Edit"
  DeleteRegKey /ifempty HKCU "Software\HM Software"
  
  !insertmacro DELETE_REG_KEY "Software\Microsoft\Windows\CurrentVersion\Uninstall\HM NIS Edit"
  !insertmacro DELETE_REG_KEY "Software\Microsoft\Windows\CurrentVersion\App Paths\VNISEdit.exe"
  DeleteRegKey HKCR "NSISFile\shell\HMNISEdit"
  DeleteRegKey HKCR "NSHFile\shell\HMNISEdit"
  
  SetAutoClose false
SectionEnd
