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

from PyInstaller.utils.tests import skipif

import pytest

from PyInstaller import compat


def test_exec_command_subprocess_wrong_encoding_reports_nicely(capsys):
    # Ensure a nice error message is printed if decoding the output of the
    # subprocess fails.
    # Actually `exec_python()` is used for running the progam, so we can use a
    # small Python script.
    prog = ("""import sys; sys.stdout.buffer.write(b'dfadfadf\\xa0:::::')""")
    with pytest.raises(UnicodeDecodeError):
        res = compat.exec_python('-c', prog)
    out, err = capsys.readouterr()
    assert 'bytes around the offending' in err
