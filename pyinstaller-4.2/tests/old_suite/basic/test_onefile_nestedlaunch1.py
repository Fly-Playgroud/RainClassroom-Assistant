#-----------------------------------------------------------------------------
# Copyright (c) 2013-2021, PyInstaller Development Team.
#
# Distributed under the terms of the GNU General Public License (version 2
# or later) with exception for distributing the bootloader.
#
# The full license is in the file COPYING.txt, distributed with this software.
#
# SPDX-License-Identifier: (GPL-2.0-or-later WITH Bootloader-exception)
#-----------------------------------------------------------------------------


import os
import sys


if __name__ == '__main__':

    filename =  os.path.join(os.path.dirname(sys.executable),
            'test_onefile_nestedlaunch0.exe')

    try:
        import subprocess
    except ImportError:
        if os.system(filename) != 0:
            raise RuntimeError("os.system failed: %s" % filename)
    else:
        subprocess.check_call([filename])
