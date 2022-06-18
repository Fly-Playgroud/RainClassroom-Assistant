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

"""
Functional tests for Matplotlib.
"""

import pytest
from PyInstaller.utils.tests import importorskip


# List of 3-tuples "(backend_name, package_name, binding)",
# where:
#
# * "backend_name" is the name of a Matplotlib backend to be tested below.
# * "package_name" is the name of the external package required by this backend.
# * "binding" is the binding to use (and to set environment-variable QT_API to).
backend_rcParams_key_values = [
    ('Qt5Agg', 'PyQt5', 'pyqt5'),
    ('Qt5Agg', 'PySide2', 'pyside2'),
]

# Same list, decorated to skip all backends whose packages are unimportable#.
backend_rcParams_key_values_skipped_if_unimportable = [
    pytest.param(*backend_rcParams_key_value,
                 marks=importorskip(backend_rcParams_key_value[1]))
    for backend_rcParams_key_value in backend_rcParams_key_values
]

print(backend_rcParams_key_values_skipped_if_unimportable)

# Names of all packages required by backends listed above.
package_names = [
    backend_rcParams_key_value[1]
    for backend_rcParams_key_value in backend_rcParams_key_values
]


# Test Matplotlib with access to only one backend at a time.
@importorskip('matplotlib')
@pytest.mark.parametrize(
    'backend_name, package_name, binding',
    backend_rcParams_key_values_skipped_if_unimportable,
    ids=package_names)
def test_matplotlib(pyi_builder, monkeypatch,
                    backend_name, package_name, binding):
    '''
    Test Matplotlib with the passed backend enabled, the passed backend package
    included with this frozen application, all other backend packages explicitly
    excluded from this frozen application, and the passed rcParam key set to the
    corresponding passed value if that key is _not_ `None` or ignore that value
    otherwise.
    '''

    # PyInstaller options excluding all backend packages except the passed
    # backend package. This is especially critical for Qt backend packages
    # (e.g., "PyQt5", "PySide2"). On first importation, Matplotlib attempts to
    # import all available Qt packages. However, runtime PyInstaller hooks fail
    # when multiple Qt packages are frozen into the same application. For each
    # such package, all other Qt packages must be excluded.
    pyi_args = [
        '--exclude-module=' + package_name_excludable
        for package_name_excludable in package_names
        if  package_name_excludable != package_name
    ]

    # Script to be tested, enabling this Qt backend.
    test_script = ("""
    import matplotlib, os, sys, tempfile

    # Localize test parameters.
    backend_name = {backend_name!r}
    binding = {binding!r}

    # Report these parameters.
    print('Testing Matplotlib with backend', repr(backend_name),
          'and binding ($QT_API)', repr(binding))

    # Configure Matplotlib *BEFORE* calling any Matplotlib functions.
    matplotlib.rcParams['backend'] = backend_name
    os.environ['QT_API'] = binding

    # Enable the desired backend *BEFORE* plotting with this backend.
    matplotlib.use(backend_name)

    # A runtime hook should force Matplotlib to create its configuration
    # directory in a temporary directory rather than in $HOME/.matplotlib.
    configdir = os.environ['MPLCONFIGDIR']
    print('MPLCONFIGDIR:', repr(configdir))
    if not configdir.startswith(tempfile.gettempdir()):
        raise SystemExit('MPLCONFIGDIR not pointing to temp directory.')

    # Test access to the standard 'mpl_toolkits' namespace package installed
    # with Matplotlib. Note that this import was reported to fail under
    # Matplotlib 1.3.0.
    from mpl_toolkits import axes_grid1
    """.format(
        backend_name=backend_name,
        binding=binding,
    ))

    # Test this script.
    pyi_builder.test_source(test_script, pyi_args=pyi_args)
