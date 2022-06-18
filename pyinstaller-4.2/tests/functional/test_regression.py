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

from pathlib import Path
from importlib.machinery import EXTENSION_SUFFIXES

from PyInstaller.depend import analysis, bindepend
from PyInstaller.building.build_main import Analysis
from PyInstaller.building.api import PYZ

# :todo: find a way to get this from `conftest` or such
# Directory with testing modules used in some tests.
_MODULES_DIR = Path(__file__).absolute().parent / "modules"

def test_issue_2492(monkeypatch, tmpdir):
    # Crash if an extension module has an hidden import to ctypes (e.g. added
    # by the hook).

    # Need to set up some values
    monkeypatch.setattr('PyInstaller.config.CONF',
                        {'workpath': str(tmpdir),
                         'spec': str(tmpdir),
                         'warnfile': str(tmpdir.join('warn.txt')),
                         'dot-file': str(tmpdir.join('imports.dot')),
                         'xref-file': str(tmpdir.join('imports.xref')),
                         'hiddenimports': [],
                         'specnm': 'issue_2492_script'})
    # Speedup: avoid analyzing base_library.zip
    monkeypatch.setattr(analysis, 'PY3_BASE_MODULES', [])

    script = tmpdir.join('script.py')
    script.write('import _struct')
    # create a hook
    tmpdir.join('hook-_struct.py').write('hiddenimports = ["ctypes"]')
    a = Analysis([str(script)], hookspath=[str(tmpdir)],
                 excludes=['encodings', 'pydoc', 'xml', 'distutils'])


def test_issue_5131(monkeypatch, tmpdir):
    """
    While fixing the endless recursion when the package's __init__ module is
    an extension (see
    tests/unit/test_modulegraph_more.py::package_init_is_extension_*), another
    error occured: PyInstaller.building._utils._load_code() tried to complote
    the source code for extension module - triggered by PYZ.assemble(), which
    is collecting all source files - caused by this being marked as "PYMODULE"
    in the TOC.
    """

    def getImports(*args, **kwargs):
        # Our faked binary does not match the expected file-format for all
        # platforms, thus the resp. code might crash. Simply ignore this.
        try:
            return orig_getImports(*args, **kwargs)
        except:  # noqa
            return []

    monkeypatch.setattr('PyInstaller.config.CONF',
                        {'workpath': str(tmpdir),
                         'spec': str(tmpdir),
                         'warnfile': str(tmpdir.join('warn.txt')),
                         'dot-file': str(tmpdir.join('imports.dot')),
                         'xref-file': str(tmpdir.join('imports.xref')),
                         'hiddenimports': [],
                         'specnm': 'issue_5131_script'})
    # Speedup: avoid analyzing base_library.zip
    monkeypatch.setattr(analysis, 'PY3_BASE_MODULES', [])

    orig_getImports = bindepend.getImports
    monkeypatch.setattr(bindepend, "getImports", getImports)

    pkg = (tmpdir / 'mypkg').mkdir()
    init = pkg / ('__init__' + EXTENSION_SUFFIXES[0])
    init.write_binary(b'\0\0\0\0\0\0\0\0\0\0\0\0' * 20)
    script = tmpdir.join('script.py')
    script.write('import mypkg')
    a = Analysis([str(script)],
                 excludes=['encodings', 'pydoc', 'xml', 'distutils'])
    PYZ(a.pure, a.zipped_data)


def test_issue_4141(pyi_builder):  #script_dir,
    extra_path = _MODULES_DIR / 'pyi_issue_4141'
    pyi_builder.test_script('pyi_issue_4141.py',
                            app_name="main", run_from_path=True,
                            pyi_args=['--path', str(extra_path)])
