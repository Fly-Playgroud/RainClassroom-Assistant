# ====================== �Զ���� ��Ʒ��Ϣ==============================
!define PRODUCT_NAME           		"ţţ��ͼ"
!define EXE_NAME               		"ţţ��ͼ.exe"
!define PRODUCT_VERSION        		"2.1.0.0"
!define PRODUCT_PUBLISHER      		"�Թ�ţ����"
!define PRODUCT_LEGAL          		"��Ȩ���У�c��2015 �Թ�ţ����"
!define INSTALL_OUTPUT_NAME    		"NiuniuCapture_Setup.exe"

# ====================== �Զ���� ��װ��Ϣ==============================
!define INSTALL_7Z_PATH 	   		"app.7z"
!define INSTALL_7Z_NAME 	   		"app.7z"
!define INSTALL_RES_PATH       		"skin.zip"
!define INSTALL_LICENCE_FILENAME    "license.txt"
!define INSTALL_ICO 			"logo.ico"


!include "ui_niuniu_h.nsh"

# ==================== NSIS���� ================================

# ���Vista��win7 ��UAC����Ȩ������.
# RequestExecutionLevel none|user|highest|admin
RequestExecutionLevel admin

#SetCompressor zlib

; ��װ������.
Name "${PRODUCT_NAME}"

# ��װ�����ļ���.

OutFile ".\${INSTALL_OUTPUT_NAME}"

InstallDir "D:\NiuniuCapture"

# ��װ��ж�س���ͼ��
Icon              "${INSTALL_ICO}"
UninstallIcon     "${INSTALL_ICO}"
