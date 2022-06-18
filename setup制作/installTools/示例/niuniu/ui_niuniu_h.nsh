
# ===================== �ⲿ����Լ��� =============================
!include "StrFunc.nsh"
!include "WordFunc.nsh"
${StrRep}
${StrStr}
!include "LogicLib.nsh"
!include "nsDialogs.nsh"
!include "common.nsh"
!include "x64.nsh"
!include "MUI.nsh"
!include "WinVer.nsh" 

!insertmacro MUI_LANGUAGE "SimpChinese"
# ===================== ��װ���汾 =============================
VIProductVersion             		"${PRODUCT_VERSION}"
VIAddVersionKey "ProductVersion"    "${PRODUCT_VERSION}"
VIAddVersionKey "ProductName"       "${PRODUCT_NAME}"
VIAddVersionKey "CompanyName"       "${PRODUCT_PUBLISHER}"
VIAddVersionKey "FileVersion"       "${PRODUCT_VERSION}"
VIAddVersionKey "InternalName"      "${EXE_NAME}"
VIAddVersionKey "FileDescription"   "${PRODUCT_NAME}"
VIAddVersionKey "LegalCopyright"    "${PRODUCT_LEGAL}"

!define INSTALL_PAGE_CONFIG 			0
!define INSTALL_PAGE_LICENSE 			1
!define INSTALL_PAGE_PROCESSING 		2
!define INSTALL_PAGE_FINISH 			3
!define INSTALL_PAGE_UNISTCONFIG 		4
!define INSTALL_PAGE_UNISTFINISH 		5

# �Զ���ҳ��
Page custom DUIPage

# ж�س�����ʾ����
UninstPage custom un.DUIPage

# ======================= DUILIB �Զ���ҳ�� =========================
Var hInstallDlg
Var sCmdFlag
Var sCmdSetupPath
Var sSetupPath 
Var sReserveData   #ж��ʱ�Ƿ������� 
Var InstallState   #���ڰ�װ�л��ǰ�װ���  
Var UnInstallValue  #ж�صĽ���  

Var temp11
Var temp12
Function DUIPage
    StrCpy $InstallState "0"	#����δ��װ���״̬
	InitPluginsDir   	
	SetOutPath "$PLUGINSDIR"
	File "${INSTALL_LICENCE_FILENAME}"
    File "${INSTALL_RES_PATH}"
	nsNiuniuSkin::InitSkinPage "$PLUGINSDIR\" "${INSTALL_LICENCE_FILENAME}" #ָ�����·����Э���ļ�����
    Pop $hInstallDlg
   	
	#���ÿؼ���ʾ��װ·�� 
    nsNiuniuSkin::SetDirValue "$INSTDIR\"
	#���ð�װ���ı��⼰��������ʾ  
	nsNiuniuSkin::SetWindowTile "${PRODUCT_NAME}��װ����"
	nsNiuniuSkin::ShowPageItem "wizardTab" ${INSTALL_PAGE_CONFIG}
	#nsNiuniuSkin::PrePage "wizardTab" 
    Call BindUIControls	
    nsNiuniuSkin::ShowPage	
FunctionEnd

Function un.DUIPage
	StrCpy $InstallState "0"
    InitPluginsDir
	SetOutPath "$PLUGINSDIR"
    File "${INSTALL_RES_PATH}"
	nsNiuniuSkin::InitSkinPage "$PLUGINSDIR\" "" 
    Pop $hInstallDlg
	nsNiuniuSkin::ShowPageItem "wizardTab" ${INSTALL_PAGE_UNISTCONFIG}
	#���ð�װ���ı��⼰��������ʾ  
	nsNiuniuSkin::SetWindowTile "${PRODUCT_NAME}ж�س���"
	
	Call un.BindUnInstUIControls
   
    nsNiuniuSkin::ShowPage
	
FunctionEnd

#��ж�ص��¼� 
Function un.BindUnInstUIControls
	GetFunctionAddress $0 un.ExitDUISetup
    nsNiuniuSkin::BindCallBack "btnUninstalled" $0
	
	GetFunctionAddress $0 un.onUninstall
    nsNiuniuSkin::BindCallBack "btnUnInstall" $0
	
	GetFunctionAddress $0 un.ExitDUISetup
    nsNiuniuSkin::BindCallBack "btnClose" $0
FunctionEnd

#�󶨰�װ�Ľ����¼� 
Function BindUIControls
	# Licenseҳ��
    GetFunctionAddress $0 OnExitDUISetup
    nsNiuniuSkin::BindCallBack "btnLicenseClose" $0
    
    GetFunctionAddress $0 OnBtnMin
    nsNiuniuSkin::BindCallBack "btnLicenseMin" $0
    
	
	GetFunctionAddress $0 OnBtnLicenseClick
    nsNiuniuSkin::BindCallBack "btnAgreement" $0
	
    # Ŀ¼ѡ�� ҳ��
    GetFunctionAddress $0 OnExitDUISetup
    nsNiuniuSkin::BindCallBack "btnDirClose" $0
	
	GetFunctionAddress $0 OnExitDUISetup
    nsNiuniuSkin::BindCallBack "btnLicenseCancel" $0
    
    GetFunctionAddress $0 OnBtnMin
    nsNiuniuSkin::BindCallBack "btnDirMin" $0
    
    GetFunctionAddress $0 OnBtnSelectDir
    nsNiuniuSkin::BindCallBack "btnSelectDir" $0
    
    GetFunctionAddress $0 OnBtnDirPre
    nsNiuniuSkin::BindCallBack "btnDirPre" $0
    
	GetFunctionAddress $0 OnBtnShowConfig
    nsNiuniuSkin::BindCallBack "btnAgree" $0
	
    GetFunctionAddress $0 OnBtnCancel
    nsNiuniuSkin::BindCallBack "btnDirCancel" $0
        
    GetFunctionAddress $0 OnBtnInstall
    nsNiuniuSkin::BindCallBack "btnInstall" $0
    
    # ��װ���� ҳ��
    GetFunctionAddress $0 OnExitDUISetup
    nsNiuniuSkin::BindCallBack "btnDetailClose" $0
    
    GetFunctionAddress $0 OnBtnMin
    nsNiuniuSkin::BindCallBack "btnDetailMin" $0

    # ��װ��� ҳ��
    GetFunctionAddress $0 OnFinished
    nsNiuniuSkin::BindCallBack "btnRun" $0
    
    GetFunctionAddress $0 OnBtnMin
    nsNiuniuSkin::BindCallBack "btnFinishedMin" $0
    
    GetFunctionAddress $0 OnExitDUISetup
    nsNiuniuSkin::BindCallBack "btnClose" $0
	
	GetFunctionAddress $0 OnCheckLicenseClick
    nsNiuniuSkin::BindCallBack "chkAgree" $0
	
FunctionEnd

#����ѡ�е���������ư�ť�Ƿ�Ҷ���ʾ 
Function OnCheckLicenseClick
	nsNiuniuSkin::GetCheckboxStatus "chkAgree"
    Pop $0
	${If} $0 == "0"        
		nsNiuniuSkin::SetControlAttribute "btnInstall" "enabled" "true"
	${Else}
		nsNiuniuSkin::SetControlAttribute "btnInstall" "enabled" "false"
    ${EndIf}
FunctionEnd

Function OnBtnLicenseClick
    nsNiuniuSkin::ShowPageItem "wizardTab" ${INSTALL_PAGE_LICENSE}
FunctionEnd

# ========================= ��װ���� ===============================
Function CreateShortcut
  SetShellVarContext all
  CreateDirectory "$SMPROGRAMS\${PRODUCT_NAME}"
  CreateShortCut "$SMPROGRAMS\${PRODUCT_NAME}\${PRODUCT_NAME}.lnk" "$INSTDIR\${EXE_NAME}"
  CreateShortCut "$SMPROGRAMS\${PRODUCT_NAME}\ж��${PRODUCT_NAME}.lnk" "$INSTDIR\uninst.exe"
  CreateShortCut "$DESKTOP\${PRODUCT_NAME}.lnk" "$INSTDIR\${EXE_NAME}"
  SetShellVarContext current
FunctionEnd

# ����ж����� 
Function CreateUninstall
	
	WriteUninstaller "$INSTDIR\uninst.exe"
	
	# ���ж����Ϣ���������
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PRODUCT_NAME}" "DisplayName" "${PRODUCT_NAME}"
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PRODUCT_NAME}" "UninstallString" "$INSTDIR\uninst.exe"
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PRODUCT_NAME}" "DisplayIcon" "$INSTDIR\${EXE_NAME}"
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PRODUCT_NAME}" "Publisher" "$INSTDIR\${PRODUCT_PUBLISHER}"
FunctionEnd

# ���һ���յ�Section����ֹ����������
Section "None"
SectionEnd


# ��ʼ��װ
Function OnBtnInstall
    nsNiuniuSkin::GetCheckboxStatus "chkAgree"
    Pop $0
	StrCpy $0 "1"
	
	#���δͬ�⣬ֱ���˳� 
	StrCmp $0 "0" InstallAbort 0
	
	#�˴���⵱ǰ�Ƿ��г����������У�����������У���ʾ��ж���ٰ�װ 
	nsProcess::_FindProcess "${EXE_NAME}"
	Pop $R0
	
	${If} $R0 == 0
        nsNiuniuSkin::ShowMsgBox "��ʾ" "${PRODUCT_NAME} �������У����˳�������!" 0
		goto InstallAbort
    ${EndIf}		

	nsNiuniuSkin::GetDirValue
    Pop $0
    StrCmp $0 "" InstallAbort 0
	#$sCmdSetupPath��ʾ �������д���·�� �ķ�ʽ  
	StrCpy $sSetupPath "$0\"
    StrCpy $INSTDIR "$0\${PRODUCT_NAME}"
    
	#д��ע����Ϣ 
	SetRegView 32
	WriteRegStr HKLM "Software\${PRODUCT_NAME}" "InstPath" "$sSetupPath"
	
	nsNiuniuSkin::SetControlAttribute "btnClose" "enabled" "false"
	nsNiuniuSkin::ShowPageItem "wizardTab" ${INSTALL_PAGE_PROCESSING}
    nsNiuniuSkin::SetSliderRange "slrProgress" 0 100
	
    # ����Щ�ļ��ݴ浽��ʱĿ¼
    #Call BakFiles
    
    #����һ�������ȼ��ĺ�̨�߳�
    GetFunctionAddress $0 ExtractFunc
    BgWorker::CallAndWait
	
    #��ԭ�ļ�
    #Call RestoreFiles
    
	#����ģʽ�²���Ҫ������ݷ�ʽ�� 
	Call CreateShortcut
	Call CreateUninstall
    	
	nsNiuniuSkin::ShowPageItem "wizardTab" ${INSTALL_PAGE_FINISH}
	nsNiuniuSkin::SetControlAttribute "btnClose" "enabled" "true"
		
	StrCpy $InstallState "1"
InstallAbort:
FunctionEnd


Function ExtractFunc
    SetOutPath $INSTDIR
    File "${INSTALL_7Z_PATH}"
    GetFunctionAddress $R9 ExtractCallback
    nsis7z::ExtractWithCallback "$INSTDIR\${INSTALL_7Z_NAME}" $R9
	Delete "$INSTDIR\${INSTALL_7Z_NAME}"
	;�˴����ҹ�����ӵ���ͣ��ʱ�䣬�Ա������ʱ����ʾͼƬ�л���ʵ��ʹ��ʱ���õ� 
	Sleep 2000
FunctionEnd

Function ExtractCallback
    Pop $1
    Pop $2
    System::Int64Op $1 * 100
    Pop $3
    System::Int64Op $3 / $2
    Pop $0
   
    nsNiuniuSkin::SetSliderValue "slrProgress" $0
	 ;�˴����ҹ�����ӵ���ͣ��ʱ�䣬�Ա������ʱ����ʾͼƬ�л���ʵ��ʹ��ʱ���õ� 
	Sleep 500
    ${If} $1 == $2
        nsNiuniuSkin::SetSliderValue "slrProgress" 100        				
    ${EndIf}
FunctionEnd

#��װ�������˳���������ʾ 
Function OnExitDUISetup
	${If} $InstallState == "0"		
		nsNiuniuSkin::ShowMsgBox "��ʾ" "��װ��δ��ɣ���ȷ���˳���װô��" 1
		pop $0
		${If} $0 == 0
			goto endfun
		${EndIf}
	${EndIf}
	nsNiuniuSkin::ExitDUISetup
endfun:    
FunctionEnd

Function OnBtnMin
    SendMessage $hInstallDlg ${WM_SYSCOMMAND} 0xF020 0
FunctionEnd

Function OnBtnCancel
	nsNiuniuSkin::ExitDUISetup
FunctionEnd

Function OnFinished	
	# ��������
	nsNiuniuSkin::GetCheckboxStatus "chkBootStart"
	Pop $R0
	${If} $R0 == "1"
		SetShellVarContext all
		CreateShortCut "$SMSTARTUP\${PRODUCT_NAME}.lnk" "$INSTDIR\${EXE_NAME}"
		SetShellVarContext current
	${EndIf}
		    
	#��������
    Exec "$INSTDIR\${EXE_NAME}"
    Call OnExitDUISetup
FunctionEnd

Function OnBtnSelectDir
    nsNiuniuSkin::SelectInstallDir
    Pop $0
FunctionEnd


Function OnBtnShowConfig
    nsNiuniuSkin::ShowPageItem "wizardTab" ${INSTALL_PAGE_CONFIG}
FunctionEnd

Function OnBtnDirPre
    nsNiuniuSkin::PrePage "wizardTab"
FunctionEnd


# ============================== �ص����� ====================================

# �������ԡ�.����ͷ��һ����Ϊ�ص���������.
# �������ԡ�un.����ͷ�ĺ������ᱻ������ж�س������ˣ���ͨ��װ���κͺ������ܵ���ж�غ�������ж�����κ�ж�غ���Ҳ���ܵ�����ͨ������

Function .onInit	
	#�˴���Ҫ���֮ǰ�İ�װ���������Ѿ���װ������Ŀ¼��ϢĬ��д���ַ�� 
	
FunctionEnd


# ��װ�ɹ��Ժ�.
Function .onInstSuccess

FunctionEnd

# �ڰ�װʧ�ܺ��û������ȡ������ťʱ������.
Function .onInstFailed
    
FunctionEnd


# ÿ���û����İ�װ·����ʱ����δ��붼�ᱻ����һ��.
Function .onVerifyInstDir

FunctionEnd

# ж�ز�����ʼǰ.
Function un.onInit
    
FunctionEnd

# ж�سɹ��Ժ�.
Function un.onUninstSuccess

FunctionEnd

Function un.ExitDUISetup
	nsNiuniuSkin::ExitDUISetup
FunctionEnd

#ִ�о����ж�� 
Function un.onUninstall
	nsNiuniuSkin::GetCheckboxStatus "chkReserveData"
    Pop $0
	StrCpy $sReserveData $0
		
	#�˴���⵱ǰ�Ƿ��г����������У�����������У���ʾ��ж���ٰ�װ 
	nsProcess::_FindProcess "${EXE_NAME}"
	Pop $R0
	
	${If} $R0 == 0
		nsNiuniuSkin::ShowMsgBox "��ʾ" "${PRODUCT_NAME} �������У����˳�������!" 0
		goto InstallAbort
    ${EndIf}
	nsNiuniuSkin::SetControlAttribute "btnClose" "enabled" "false"
	nsNiuniuSkin::SetControlAttribute "lblInstalling" "text" "����ж��..."
	nsNiuniuSkin::ShowPageItem "wizardTab" ${INSTALL_PAGE_PROCESSING}
	nsNiuniuSkin::SetSliderRange "slrProgress" 0 100
	IntOp $UnInstallValue 0 + 1
	SetRegView 32
	DeleteRegKey HKLM "Software\${PRODUCT_NAME}"	
	
	; ɾ����ݷ�ʽ
	SetShellVarContext all
	Delete "$SMPROGRAMS\${PRODUCT_NAME}\${PRODUCT_NAME}.lnk"
	Delete "$SMPROGRAMS\${PRODUCT_NAME}\ж��${PRODUCT_NAME}.lnk"
	RMDir "$SMPROGRAMS\${PRODUCT_NAME}\"
	Delete "$DESKTOP\${PRODUCT_NAME}.lnk"
	
	#ɾ����������  
    Delete "$SMSTARTUP\${PRODUCT_NAME}.lnk"
	SetShellVarContext current
	
	IntOp $UnInstallValue $UnInstallValue + 8
    
	#ɾ���ļ� 
	GetFunctionAddress $0 un.RemoveFiles
    BgWorker::CallAndWait
	InstallAbort:
FunctionEnd

#���߳���ɾ���ļ����Ա���ʾ���� 
Function un.RemoveFiles
	${Locate} "$INSTDIR" "/G=0 /M=*.*" "un.onDeleteFileFound"
	StrCpy $InstallState "1"
	nsNiuniuSkin::SetControlAttribute "btnClose" "enabled" "true"
	nsNiuniuSkin::SetSliderValue "slrProgress" 100
	nsNiuniuSkin::ShowPageItem "wizardTab" ${INSTALL_PAGE_UNISTFINISH}
FunctionEnd


#ж�س���ʱɾ���ļ������̣��������Ҫ���˵��ļ����ڴ˺��������  
Function un.onDeleteFileFound
    ; $R9    "path\name"
    ; $R8    "path"
    ; $R7    "name"
    ; $R6    "size"  ($R6 = "" if directory, $R6 = "0" if file with /S=)
    
	
	#�Ƿ����ɾ��  
			
	Delete "$R9"
	RMDir /r "$R9"
    RMDir "$R9"
	
	IntOp $UnInstallValue $UnInstallValue + 2
	${If} $UnInstallValue > 100
		IntOp $UnInstallValue 100 + 0
		nsNiuniuSkin::SetSliderValue "slrProgress" 100
	${Else}
		nsNiuniuSkin::SetSliderValue "slrProgress" $UnInstallValue
		Sleep 100
	${EndIf}	
	undelete:
	Push "LocateNext"	
FunctionEnd