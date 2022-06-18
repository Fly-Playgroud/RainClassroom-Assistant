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


#ifndef SBK_QTREMOTEOBJECTS_PYTHON_H
#define SBK_QTREMOTEOBJECTS_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtRemoteObjects/qremoteobjectnode.h>
#include <QtRemoteObjects/qremoteobjectsettingsstore.h>
#include <QtRemoteObjects/qremoteobjectregistry.h>
#include <QtRemoteObjects/qremoteobjectabstractitemmodelreplica.h>
#include <QtRemoteObjects/qremoteobjectdynamicreplica.h>
#include <QtRemoteObjects/qremoteobjectpendingcall.h>
#include <QtRemoteObjects/qremoteobjectreplica.h>
#include <QtRemoteObjects/qtremoteobjectglobal.h>
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
    SBK_QABSTRACTITEMMODELREPLICA_IDX                        = 0,
    SBK_QREMOTEOBJECTABSTRACTPERSISTEDSTORE_IDX              = 1,
    SBK_QREMOTEOBJECTDYNAMICREPLICA_IDX                      = 2,
    SBK_QREMOTEOBJECTHOST_IDX                                = 3,
    SBK_QREMOTEOBJECTHOSTBASE_ALLOWEDSCHEMAS_IDX             = 5,
    SBK_QREMOTEOBJECTHOSTBASE_IDX                            = 4,
    SBK_QREMOTEOBJECTNODE_ERRORCODE_IDX                      = 7,
    SBK_QREMOTEOBJECTNODE_IDX                                = 6,
    SBK_QREMOTEOBJECTPENDINGCALL_ERROR_IDX                   = 9,
    SBK_QREMOTEOBJECTPENDINGCALL_IDX                         = 8,
    SBK_QREMOTEOBJECTPENDINGCALLWATCHER_IDX                  = 10,
    SBK_QREMOTEOBJECTREGISTRY_IDX                            = 11,
    SBK_QREMOTEOBJECTREGISTRYHOST_IDX                        = 12,
    SBK_QREMOTEOBJECTREPLICA_STATE_IDX                       = 14,
    SBK_QREMOTEOBJECTREPLICA_IDX                             = 13,
    SBK_QREMOTEOBJECTSETTINGSSTORE_IDX                       = 15,
    SBK_QREMOTEOBJECTSOURCELOCATIONINFO_IDX                  = 16,
    SBK_QtRemoteObjects_IDX_COUNT                            = 17
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtRemoteObjectsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtRemoteObjectsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtRemoteObjectsTypeConverters;

// Converter indices
enum : int {
    SBK_QTREMOTEOBJECTS_QVECTOR_INT_IDX                      = 0, // QVector<int >
    SBK_QTREMOTEOBJECTS_QHASH_INT_QBYTEARRAY_IDX             = 1, // const QHash<int,QByteArray > &
    SBK_QTREMOTEOBJECTS_QMAP_INT_QVARIANT_IDX                = 2, // QMap<int,QVariant >
    SBK_QTREMOTEOBJECTS_QLIST_QPERSISTENTMODELINDEX_IDX      = 3, // const QList<QPersistentModelIndex > &
    SBK_QTREMOTEOBJECTS_QLIST_QOBJECTPTR_IDX                 = 4, // const QList<QObject* > &
    SBK_QTREMOTEOBJECTS_QLIST_QBYTEARRAY_IDX                 = 5, // QList<QByteArray >
    SBK_QTREMOTEOBJECTS_QLIST_QVARIANT_IDX                   = 6, // QList<QVariant >
    SBK_QTREMOTEOBJECTS_QPAIR_QSTRING_QREMOTEOBJECTSOURCELOCATIONINFO_IDX = 7, // const QPair<QString,QRemoteObjectSourceLocationInfo > &
    SBK_QTREMOTEOBJECTS_QHASH_QSTRING_QREMOTEOBJECTSOURCELOCATIONINFO_IDX = 8, // QHash<QString,QRemoteObjectSourceLocationInfo >
    SBK_QTREMOTEOBJECTS_QLIST_QSTRING_IDX                    = 9, // QList<QString >
    SBK_QTREMOTEOBJECTS_QMAP_QSTRING_QVARIANT_IDX            = 10, // QMap<QString,QVariant >
    SBK_QtRemoteObjects_CONVERTERS_IDX_COUNT                 = 11
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QAbstractItemModelReplica >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QABSTRACTITEMMODELREPLICA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectAbstractPersistedStore >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTABSTRACTPERSISTEDSTORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectDynamicReplica >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTDYNAMICREPLICA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectHost >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTHOST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectHostBase::AllowedSchemas >() { return SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTHOSTBASE_ALLOWEDSCHEMAS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectHostBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTHOSTBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectNode::ErrorCode >() { return SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTNODE_ERRORCODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectPendingCall::Error >() { return SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTPENDINGCALL_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectPendingCall >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTPENDINGCALL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectPendingCallWatcher >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTPENDINGCALLWATCHER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectRegistry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTREGISTRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectRegistryHost >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTREGISTRYHOST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectReplica::State >() { return SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTREPLICA_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectReplica >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTREPLICA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectSettingsStore >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTSETTINGSSTORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRemoteObjectSourceLocationInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtRemoteObjectsTypes[SBK_QREMOTEOBJECTSOURCELOCATIONINFO_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTREMOTEOBJECTS_PYTHON_H

