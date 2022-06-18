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


#ifndef SBK_QTOPENGLFUNCTIONS_PYTHON_H
#define SBK_QTOPENGLFUNCTIONS_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtgui_python.h>
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtGui/qopenglfunctions_1_5.h>
#include <QtGui/qopenglfunctions_1_4.h>
#include <QtGui/qopenglfunctions_1_3.h>
#include <QtGui/qopenglfunctions_1_2.h>
#include <QtGui/qopenglfunctions_4_2_compatibility.h>
#include <QtGui/qopenglfunctions_1_1.h>
#include <QtGui/qopenglfunctions_2_1.h>
#include <QtGui/qopenglfunctions_1_0.h>
#include <QtGui/qopenglfunctions_2_0.h>
#include <QtGui/qopenglfunctions_3_1.h>
#include <QtGui/qopenglfunctions_3_2_compatibility.h>
#include <QtGui/qopenglfunctions_4_5_compatibility.h>
#include <QtGui/qopenglfunctions_3_0.h>
#include <QtGui/qopenglfunctions_3_3_core.h>
#include <QtGui/qopenglfunctions_4_1_compatibility.h>
#include <QtGui/qopenglfunctions_4_5_core.h>
#include <QtGui/qopenglfunctions_4_4_compatibility.h>
#include <QtGui/qopenglfunctions_3_2_core.h>
#include <QtGui/qopenglfunctions_4_3_core.h>
#include <QtGui/qopenglfunctions_4_4_core.h>
#include <QtGui/qopenglfunctions_4_0_core.h>
#include <QtGui/qopenglfunctions_4_0_compatibility.h>
#include <QtGui/qopenglfunctions_4_1_core.h>
#include <QtGui/qopenglfunctions_4_2_core.h>
#include <QtGui/qopenglfunctions_4_3_compatibility.h>
#include <QtGui/qopenglfunctions_3_3_compatibility.h>
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
    SBK_QOPENGLFUNCTIONS_1_0_IDX                             = 0,
    SBK_QOPENGLFUNCTIONS_1_1_IDX                             = 1,
    SBK_QOPENGLFUNCTIONS_1_2_IDX                             = 2,
    SBK_QOPENGLFUNCTIONS_1_3_IDX                             = 3,
    SBK_QOPENGLFUNCTIONS_1_4_IDX                             = 4,
    SBK_QOPENGLFUNCTIONS_1_5_IDX                             = 5,
    SBK_QOPENGLFUNCTIONS_2_0_IDX                             = 6,
    SBK_QOPENGLFUNCTIONS_2_1_IDX                             = 7,
    SBK_QOPENGLFUNCTIONS_3_0_IDX                             = 8,
    SBK_QOPENGLFUNCTIONS_3_1_IDX                             = 9,
    SBK_QOPENGLFUNCTIONS_3_2_COMPATIBILITY_IDX               = 10,
    SBK_QOPENGLFUNCTIONS_3_2_CORE_IDX                        = 11,
    SBK_QOPENGLFUNCTIONS_3_3_COMPATIBILITY_IDX               = 12,
    SBK_QOPENGLFUNCTIONS_3_3_CORE_IDX                        = 13,
    SBK_QOPENGLFUNCTIONS_4_0_COMPATIBILITY_IDX               = 14,
    SBK_QOPENGLFUNCTIONS_4_0_CORE_IDX                        = 15,
    SBK_QOPENGLFUNCTIONS_4_1_COMPATIBILITY_IDX               = 16,
    SBK_QOPENGLFUNCTIONS_4_1_CORE_IDX                        = 17,
    SBK_QOPENGLFUNCTIONS_4_2_COMPATIBILITY_IDX               = 18,
    SBK_QOPENGLFUNCTIONS_4_2_CORE_IDX                        = 19,
    SBK_QOPENGLFUNCTIONS_4_3_COMPATIBILITY_IDX               = 20,
    SBK_QOPENGLFUNCTIONS_4_3_CORE_IDX                        = 21,
    SBK_QOPENGLFUNCTIONS_4_4_COMPATIBILITY_IDX               = 22,
    SBK_QOPENGLFUNCTIONS_4_4_CORE_IDX                        = 23,
    SBK_QOPENGLFUNCTIONS_4_5_COMPATIBILITY_IDX               = 24,
    SBK_QOPENGLFUNCTIONS_4_5_CORE_IDX                        = 25,
    SBK_QtOpenGLFunctions_IDX_COUNT                          = 27
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtOpenGLFunctionsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtOpenGLFunctionsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtOpenGLFunctionsTypeConverters;

// Converter indices
enum : int {
    SBK_QTOPENGLFUNCTIONS_QLIST_QVARIANT_IDX                 = 0, // QList<QVariant >
    SBK_QTOPENGLFUNCTIONS_QLIST_QSTRING_IDX                  = 1, // QList<QString >
    SBK_QTOPENGLFUNCTIONS_QMAP_QSTRING_QVARIANT_IDX          = 2, // QMap<QString,QVariant >
    SBK_QtOpenGLFunctions_CONVERTERS_IDX_COUNT               = 3
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_1_0 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_1_0_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_1_1 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_1_1_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_1_2 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_1_2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_1_3 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_1_3_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_1_4 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_1_4_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_1_5 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_1_5_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_2_0 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_2_0_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_2_1 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_2_1_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_3_0 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_3_0_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_3_1 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_3_1_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_3_2_Compatibility >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_3_2_COMPATIBILITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_3_2_Core >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_3_2_CORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_3_3_Compatibility >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_3_3_COMPATIBILITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_3_3_Core >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_3_3_CORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_0_Compatibility >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_0_COMPATIBILITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_0_Core >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_0_CORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_1_Compatibility >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_1_COMPATIBILITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_1_Core >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_1_CORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_2_Compatibility >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_2_COMPATIBILITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_2_Core >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_2_CORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_3_Compatibility >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_3_COMPATIBILITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_3_Core >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_3_CORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_4_Compatibility >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_4_COMPATIBILITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_4_Core >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_4_CORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_5_Compatibility >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_5_COMPATIBILITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions_4_5_Core >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtOpenGLFunctionsTypes[SBK_QOPENGLFUNCTIONS_4_5_CORE_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTOPENGLFUNCTIONS_PYTHON_H

