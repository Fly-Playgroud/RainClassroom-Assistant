/*
 * ****************************************************************************
 * Copyright (c) 2013-2021, PyInstaller Development Team.
 *
 * Distributed under the terms of the GNU General Public License (version 2
 * or later) with exception for distributing the bootloader.
 *
 * The full license is in the file COPYING.txt, distributed with this software.
 *
 * SPDX-License-Identifier: (GPL-2.0-or-later WITH Bootloader-exception)
 * ****************************************************************************
 */

/*
 * Portable wrapper for some utility functions like getenv/setenv,
 * file path manipulation and other shared data types or functions.
 */

#ifndef HEADER_PYI_UTILS_H
#define HEADER_PYI_UTILS_H

#include "pyi_archive.h"

// some platforms do not provide strnlen
#ifndef HAVE_STRNLEN
size_t strnlen(const char *str, size_t n);
#endif

// some platforms do not provide strndup
#ifndef HAVE_STRNDUP
char *strndup(const char * str, size_t n);
#endif

/* Environment variables. */

char *pyi_getenv(const char *variable);
int pyi_setenv(const char *variable, const char *value);
int pyi_unsetenv(const char *variable);

/* Temporary files. */

int pyi_create_temp_path(ARCHIVE_STATUS *status);
void pyi_remove_temp_path(const char *dir);

/* File manipulation. */
FILE *pyi_open_target(const char *path, const char* name_);
int pyi_copy_file(const char *src, const char *dst, const char *filename);

/* Other routines. */
dylib_t pyi_utils_dlopen(const char *dllpath);
int pyi_utils_create_child(const char *thisfile, const ARCHIVE_STATUS *status,
                           const int argc, char *const argv[]);
int pyi_utils_set_environment(const ARCHIVE_STATUS *status);

#endif  /* HEADER_PY_UTILS_H */
