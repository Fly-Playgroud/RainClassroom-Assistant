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


# This hook was tested with Pillow 2.9.0 (Maintained fork of PIL):
# https://pypi.python.org/pypi/Pillow

from PyInstaller.compat import modname_tkinter

# Ignore 'FixTk' (Python 2) or tkinter to prevent inclusion of Tcl/Tk library
# and other GUI libraries.
# Assume that if people are really using tkinter in their application, they
# will also import it directly and thus PyInstaller bundles the right GUI
# library.
excludedimports = [modname_tkinter, 'FixTk', 'PyQt5']
