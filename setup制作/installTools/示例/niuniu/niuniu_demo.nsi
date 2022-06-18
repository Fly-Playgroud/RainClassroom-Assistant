# ====================== 自定义宏 产品信息==============================
!define PRODUCT_NAME           		"牛牛截图"
!define EXE_NAME               		"牛牛截图.exe"
!define PRODUCT_VERSION        		"2.1.0.0"
!define PRODUCT_PUBLISHER      		"乖乖牛在线"
!define PRODUCT_LEGAL          		"版权所有（c）2015 乖乖牛在线"
!define INSTALL_OUTPUT_NAME    		"NiuniuCapture_Setup.exe"

# ====================== 自定义宏 安装信息==============================
!define INSTALL_7Z_PATH 	   		"app.7z"
!define INSTALL_7Z_NAME 	   		"app.7z"
!define INSTALL_RES_PATH       		"skin.zip"
!define INSTALL_LICENCE_FILENAME    "license.txt"
!define INSTALL_ICO 			"logo.ico"


!include "ui_niuniu_h.nsh"

# ==================== NSIS属性 ================================

# 针对Vista和win7 的UAC进行权限请求.
# RequestExecutionLevel none|user|highest|admin
RequestExecutionLevel admin

#SetCompressor zlib

; 安装包名字.
Name "${PRODUCT_NAME}"

# 安装程序文件名.

OutFile ".\${INSTALL_OUTPUT_NAME}"

InstallDir "D:\NiuniuCapture"

# 安装和卸载程序图标
Icon              "${INSTALL_ICO}"
UninstallIcon     "${INSTALL_ICO}"
