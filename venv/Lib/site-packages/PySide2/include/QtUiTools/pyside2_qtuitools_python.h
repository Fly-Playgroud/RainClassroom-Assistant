/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of Qt for Python.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/


#ifndef SBK_QTUITOOLS_PYTHON_H
#define SBK_QTUITOOLS_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtwidgets_python.h>
#include <pyside2_qtgui_python.h>
#include <pyside2_qtcore_python.h>
#include <pyside2_qtxml_python.h>

// Bound library includes
#include <QtUiTools/quiloader.h>
// Conversion Includes - Primitive Types
#include <wtypes.h>
#include <qabstractitemmodel.h>
#include <QString>
#include <QStringList>
#include <signalmanager.h>

// Conversion Includes - Container Types
#include <pysideqflags.h>
#include <QLinkedList>
#include <QList>
#include <QMap>
#include <QMultiMap>
#include <QPair>
#include <QQueue>
#include <QSet>
#include <QStack>
#include <QVector>

// Type indices
enum : int {
    SBK_QUILOADER_IDX                                        = 0,
    SBK_QtUiTools_IDX_COUNT                                  = 1
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtUiToolsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtUiToolsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtUiToolsTypeConverters;

// Converter indices
enum : int {
    SBK_QTUITOOLS_QLIST_QOBJECTPTR_IDX                       = 0, // const QList<QObject* > &
    SBK_QTUITOOLS_QLIST_QBYTEARRAY_IDX                       = 1, // QList<QByteArray >
    SBK_QTUITOOLS_QLIST_QVARIANT_IDX                         = 2, // QList<QVariant >
    SBK_QTUITOOLS_QLIST_QSTRING_IDX                          = 3, // QList<QString >
    SBK_QTUITOOLS_QMAP_QSTRING_QVARIANT_IDX                  = 4, // QMap<QString,QVariant >
    SBK_QtUiTools_CONVERTERS_IDX_COUNT                       = 5
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QUiLoader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtUiToolsTypes[SBK_QUILOADER_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTUITOOLS_PYTHON_H

