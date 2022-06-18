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


import Tix as tix

root = tix.Tk()
root.title("Test for TiX")

tix.Label(text="Press <ESC> to exit").pack()
tix.DirList(root).pack()
tix.Button(root, text="Close", command=root.destroy).pack()
root.bind("<Escape>", lambda x: root.destroy())

tix.mainloop()
