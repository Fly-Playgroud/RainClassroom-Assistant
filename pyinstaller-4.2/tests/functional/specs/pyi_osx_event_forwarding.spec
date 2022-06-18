# -*- mode: python -*-
#-----------------------------------------------------------------------------
# Copyright (c) 2005-2021, PyInstaller Development Team.
#
# Distributed under the terms of the GNU General Public License (version 2
# or later) with exception for distributing the bootloader.
#
# The full license is in the file COPYING.txt, distributed with this software.
#
# SPDX-License-Identifier: (GPL-2.0-or-later WITH Bootloader-exception)
#-----------------------------------------------------------------------------

import os

app_name = 'pyi_osx_event_forwarding'
custom_url_scheme = os.environ.get('PYI_CUSTOM_URL_SCHEME', 'pyi-test-app')
custom_file_ext = os.environ.get('PYI_CUSTOM_FILE_EXT', 'pyi_test_ext')

a = Analysis([os.path.join(os.path.dirname(SPECPATH), 'scripts/pyi_pyqt5_log_events.py')])
pyz = PYZ(a.pure, a.zipped_data)
exe = EXE(pyz,
          a.scripts,
          a.binaries,
          a.zipfiles,
          a.datas,
          name=app_name,
          debug=True,
          bootloader_ignore_signals=False,
          strip=False,
          upx=False,
          console=False )
app = BUNDLE(exe,
             name=app_name + '.app',
             # Register custom protocol handler and custom file extension
             info_plist={
                'CFBundleURLTypes': [{
                    'CFBundleURLName': 'PYITestApp' + custom_url_scheme,
                    'CFBundleTypeRole': 'Viewer',
                    'CFBundleURLSchemes': [custom_url_scheme],
                }],
                'CFBundleDocumentTypes': [{
                    'CFBundleTypeName': "PYITestApp_" + custom_file_ext,
                    'CFBundleTypeExtensions': [
                        custom_file_ext,
                    ],
                    'CFBundleTypeRole': "Viewer",
                }],
             })
