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


#ifndef SBK_QTSCXML_PYTHON_H
#define SBK_QTSCXML_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtScxml/qscxmlinvokableservice.h>
#include <QtScxml/qscxmlcompiler.h>
#include <QtScxml/qscxmlevent.h>
#include <QtScxml/qscxmlexecutablecontent.h>
#include <QtScxml/qscxmlstatemachine.h>
#include <QtScxml/qscxmlecmascriptdatamodel.h>
#include <QtScxml/qscxmlerror.h>
#include <QtScxml/qscxmlnulldatamodel.h>
#include <QtScxml/qscxmltabledata.h>
#include <QtScxml/qscxmlcppdatamodel.h>
#include <QtScxml/qscxmldatamodel.h>
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
    SBK_QSCXMLCOMPILER_IDX                                   = 0,
    SBK_QSCXMLCOMPILER_LOADER_IDX                            = 1,
    SBK_QSCXMLCPPDATAMODEL_IDX                               = 2,
    SBK_QSCXMLDATAMODEL_IDX                                  = 3,
    SBK_QSCXMLDATAMODEL_FOREACHLOOPBODY_IDX                  = 4,
    SBK_QSCXMLDYNAMICSCXMLSERVICEFACTORY_IDX                 = 5,
    SBK_QSCXMLECMASCRIPTDATAMODEL_IDX                        = 6,
    SBK_QSCXMLERROR_IDX                                      = 7,
    SBK_QSCXMLEVENT_EVENTTYPE_IDX                            = 9,
    SBK_QSCXMLEVENT_IDX                                      = 8,
    SBK_QtScxmlQSCXMLEXECUTABLECONTENT_IDX                   = 10,
    SBK_QSCXMLEXECUTABLECONTENT_ASSIGNMENTINFO_IDX           = 11,
    SBK_QSCXMLEXECUTABLECONTENT_EVALUATORINFO_IDX            = 12,
    SBK_QSCXMLEXECUTABLECONTENT_FOREACHINFO_IDX              = 13,
    SBK_QSCXMLEXECUTABLECONTENT_INVOKEINFO_IDX               = 14,
    SBK_QSCXMLEXECUTABLECONTENT_PARAMETERINFO_IDX            = 15,
    SBK_QSCXMLINVOKABLESERVICE_IDX                           = 16,
    SBK_QSCXMLINVOKABLESERVICEFACTORY_IDX                    = 17,
    SBK_QSCXMLNULLDATAMODEL_IDX                              = 18,
    SBK_QSCXMLSTATEMACHINE_IDX                               = 19,
    SBK_QSCXMLSTATICSCXMLSERVICEFACTORY_IDX                  = 20,
    SBK_QSCXMLTABLEDATA_IDX                                  = 21,
    SBK_QtScxml_IDX_COUNT                                    = 22
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtScxmlTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtScxmlModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtScxmlTypeConverters;

// Converter indices
enum : int {
    SBK_QTSCXML_QVECTOR_QSCXMLERROR_IDX                      = 0, // QVector<QScxmlError >
    SBK_QTSCXML_QMAP_QSTRING_QVARIANT_IDX                    = 1, // const QMap<QString,QVariant > &
    SBK_QTSCXML_QLIST_QOBJECTPTR_IDX                         = 2, // const QList<QObject* > &
    SBK_QTSCXML_QLIST_QBYTEARRAY_IDX                         = 3, // QList<QByteArray >
    SBK_QTSCXML_QVECTOR_INT_IDX                              = 4, // const QVector<int > &
    SBK_QTSCXML_QVECTOR_QSCXMLEXECUTABLECONTENT_PARAMETERINFO_IDX = 5, // const QVector<QScxmlExecutableContent::ParameterInfo > &
    SBK_QTSCXML_QVECTOR_QSCXMLINVOKABLESERVICEPTR_IDX        = 6, // QVector<QScxmlInvokableService* >
    SBK_QTSCXML_QLIST_QVARIANT_IDX                           = 7, // QList<QVariant >
    SBK_QTSCXML_QLIST_QSTRING_IDX                            = 8, // QList<QString >
    SBK_QtScxml_CONVERTERS_IDX_COUNT                         = 9
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QScxmlCompiler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLCOMPILER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlCompiler::Loader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLCOMPILER_LOADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlCppDataModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLCPPDATAMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlDataModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLDATAMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlDataModel::ForeachLoopBody >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLDATAMODEL_FOREACHLOOPBODY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlDynamicScxmlServiceFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLDYNAMICSCXMLSERVICEFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlEcmaScriptDataModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLECMASCRIPTDATAMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlError >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLERROR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlEvent::EventType >() { return SbkPySide2_QtScxmlTypes[SBK_QSCXMLEVENT_EVENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QScxmlEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlExecutableContent::AssignmentInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLEXECUTABLECONTENT_ASSIGNMENTINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlExecutableContent::EvaluatorInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLEXECUTABLECONTENT_EVALUATORINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlExecutableContent::ForeachInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLEXECUTABLECONTENT_FOREACHINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlExecutableContent::InvokeInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLEXECUTABLECONTENT_INVOKEINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlExecutableContent::ParameterInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLEXECUTABLECONTENT_PARAMETERINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlInvokableService >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLINVOKABLESERVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlInvokableServiceFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLINVOKABLESERVICEFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlNullDataModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLNULLDATAMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlStateMachine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLSTATEMACHINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlStaticScxmlServiceFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLSTATICSCXMLSERVICEFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScxmlTableData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtScxmlTypes[SBK_QSCXMLTABLEDATA_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTSCXML_PYTHON_H

