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


#ifndef SBK_QT3DINPUT_PYTHON_H
#define SBK_QT3DINPUT_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qt3dcore_python.h>
#include <pyside2_qtgui_python.h>
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <Qt3DInput/qaxisaccumulator.h>
#include <Qt3DInput/qinputsettings.h>
#include <Qt3DInput/qabstractactioninput.h>
#include <Qt3DInput/qabstractaxisinput.h>
#include <Qt3DInput/qaction.h>
#include <Qt3DInput/qkeyboardhandler.h>
#include <Qt3DInput/qinputchord.h>
#include <Qt3DInput/qabstractphysicaldevice.h>
#include <Qt3DInput/qinputsequence.h>
#include <Qt3DInput/qkeyboarddevice.h>
#include <Qt3DInput/qmousehandler.h>
#include <Qt3DInput/qaxissetting.h>
#include <Qt3DInput/qbuttonaxisinput.h>
#include <Qt3DInput/qactioninput.h>
#include <Qt3DInput/qlogicaldevice.h>
#include <Qt3DInput/qmousedevice.h>
#include <Qt3DInput/qinputaspect.h>
#include <Qt3DInput/qkeyevent.h>
#include <Qt3DInput/qanalogaxisinput.h>
#include <Qt3DInput/qmouseevent.h>
#include <Qt3DInput/qaxis.h>
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
    SBK_Qt3DInputQT3DINPUT_IDX                               = 0,
    SBK_QT3DINPUT_QABSTRACTACTIONINPUT_IDX                   = 1,
    SBK_QT3DINPUT_QABSTRACTAXISINPUT_IDX                     = 2,
    SBK_QT3DINPUT_QABSTRACTPHYSICALDEVICE_IDX                = 3,
    SBK_QT3DINPUT_QACTION_IDX                                = 4,
    SBK_QT3DINPUT_QACTIONINPUT_IDX                           = 5,
    SBK_QT3DINPUT_QANALOGAXISINPUT_IDX                       = 6,
    SBK_QT3DINPUT_QAXIS_IDX                                  = 7,
    SBK_QT3DINPUT_QAXISACCUMULATOR_SOURCEAXISTYPE_IDX        = 9,
    SBK_QT3DINPUT_QAXISACCUMULATOR_IDX                       = 8,
    SBK_QT3DINPUT_QAXISSETTING_IDX                           = 10,
    SBK_QT3DINPUT_QBUTTONAXISINPUT_IDX                       = 11,
    SBK_QT3DINPUT_QINPUTASPECT_IDX                           = 12,
    SBK_QT3DINPUT_QINPUTCHORD_IDX                            = 13,
    SBK_QT3DINPUT_QINPUTSEQUENCE_IDX                         = 14,
    SBK_QT3DINPUT_QINPUTSETTINGS_IDX                         = 15,
    SBK_QT3DINPUT_QKEYEVENT_IDX                              = 16,
    SBK_QT3DINPUT_QKEYBOARDDEVICE_IDX                        = 17,
    SBK_QT3DINPUT_QKEYBOARDHANDLER_IDX                       = 18,
    SBK_QT3DINPUT_QLOGICALDEVICE_IDX                         = 19,
    SBK_QT3DINPUT_QMOUSEDEVICE_AXIS_IDX                      = 21,
    SBK_QT3DINPUT_QMOUSEDEVICE_IDX                           = 20,
    SBK_QT3DINPUT_QMOUSEEVENT_BUTTONS_IDX                    = 23,
    SBK_QT3DINPUT_QMOUSEEVENT_MODIFIERS_IDX                  = 24,
    SBK_QT3DINPUT_QMOUSEEVENT_IDX                            = 22,
    SBK_QT3DINPUT_QMOUSEHANDLER_IDX                          = 25,
    SBK_QT3DINPUT_QWHEELEVENT_BUTTONS_IDX                    = 27,
    SBK_QT3DINPUT_QWHEELEVENT_MODIFIERS_IDX                  = 28,
    SBK_QT3DINPUT_QWHEELEVENT_IDX                            = 26,
    SBK_Qt3DInput_IDX_COUNT                                  = 29
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_Qt3DInputTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_Qt3DInputModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_Qt3DInputTypeConverters;

// Converter indices
enum : int {
    SBK_QT3DINPUT_QVECTOR_QT3DCORE_QNODEPTR_IDX              = 0, // QVector<Qt3DCore::QNode* >
    SBK_QT3DINPUT_QVECTOR_QT3DINPUT_QAXISSETTINGPTR_IDX      = 1, // QVector<Qt3DInput::QAxisSetting* >
    SBK_QT3DINPUT_QVECTOR_QT3DINPUT_QABSTRACTACTIONINPUTPTR_IDX = 2, // QVector<Qt3DInput::QAbstractActionInput* >
    SBK_QT3DINPUT_QVECTOR_INT_IDX                            = 3, // QVector<int >
    SBK_QT3DINPUT_QVECTOR_QT3DINPUT_QABSTRACTAXISINPUTPTR_IDX = 4, // QVector<Qt3DInput::QAbstractAxisInput* >
    SBK_QT3DINPUT_QVECTOR_QT3DCORE_QENTITYPTR_IDX            = 5, // QVector<Qt3DCore::QEntity* >
    SBK_QT3DINPUT_QLIST_QOBJECTPTR_IDX                       = 6, // const QList<QObject* > &
    SBK_QT3DINPUT_QLIST_QBYTEARRAY_IDX                       = 7, // QList<QByteArray >
    SBK_QT3DINPUT_QVECTOR_QT3DINPUT_QACTIONPTR_IDX           = 8, // QVector<Qt3DInput::QAction* >
    SBK_QT3DINPUT_QVECTOR_QT3DINPUT_QAXISPTR_IDX             = 9, // QVector<Qt3DInput::QAxis* >
    SBK_QT3DINPUT_QLIST_QVARIANT_IDX                         = 10, // QList<QVariant >
    SBK_QT3DINPUT_QLIST_QSTRING_IDX                          = 11, // QList<QString >
    SBK_QT3DINPUT_QMAP_QSTRING_QVARIANT_IDX                  = 12, // QMap<QString,QVariant >
    SBK_Qt3DInput_CONVERTERS_IDX_COUNT                       = 13
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAbstractActionInput >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QABSTRACTACTIONINPUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAbstractAxisInput >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QABSTRACTAXISINPUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAbstractPhysicalDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QABSTRACTPHYSICALDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAction >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QACTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QActionInput >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QACTIONINPUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAnalogAxisInput >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QANALOGAXISINPUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAxisAccumulator::SourceAxisType >() { return SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QAXISACCUMULATOR_SOURCEAXISTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAxisAccumulator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QAXISACCUMULATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QAxisSetting >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QAXISSETTING_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QButtonAxisInput >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QBUTTONAXISINPUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QInputAspect >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QINPUTASPECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QInputChord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QINPUTCHORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QInputSequence >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QINPUTSEQUENCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QInputSettings >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QINPUTSETTINGS_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QKeyEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QKEYEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QKeyboardDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QKEYBOARDDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QKeyboardHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QKEYBOARDHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QLogicalDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QLOGICALDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseDevice::Axis >() { return SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEDEVICE_AXIS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseEvent::Buttons >() { return SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEEVENT_BUTTONS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseEvent::Modifiers >() { return SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEEVENT_MODIFIERS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QMouseHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QMOUSEHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QWheelEvent::Buttons >() { return SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QWHEELEVENT_BUTTONS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QWheelEvent::Modifiers >() { return SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QWHEELEVENT_MODIFIERS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DInput::QWheelEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DInputTypes[SBK_QT3DINPUT_QWHEELEVENT_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QT3DINPUT_PYTHON_H

