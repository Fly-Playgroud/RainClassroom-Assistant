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


#ifndef SBK_QT3DCORE_PYTHON_H
#define SBK_QT3DCORE_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtgui_python.h>
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <Qt3DCore/qcomponentremovedchange.h>
#include <Qt3DCore/qnodeid.h>
#include <Qt3DCore/qpropertyupdatedchange.h>
#include <Qt3DCore/qpropertynodeaddedchange.h>
#include <Qt3DCore/qentity.h>
#include <Qt3DCore/qaspectengine.h>
#include <Qt3DCore/qabstractaspect.h>
#include <Qt3DCore/qtransform.h>
#include <Qt3DCore/qcomponentaddedchange.h>
#include <Qt3DCore/qpropertyvalueremovedchangebase.h>
#include <Qt3DCore/qstaticpropertyupdatedchangebase.h>
#include <Qt3DCore/qnode.h>
#include <Qt3DCore/qskeleton.h>
#include <Qt3DCore/qpropertyvalueremovedchange.h>
#include <Qt3DCore/qnodecommand.h>
#include <Qt3DCore/qpropertyvalueaddedchangebase.h>
#include <Qt3DCore/qnodecreatedchange.h>
#include <Qt3DCore/qcomponent.h>
#include <Qt3DCore/qabstractskeleton.h>
#include <Qt3DCore/qbackendnode.h>
#include <Qt3DCore/qarmature.h>
#include <Qt3DCore/qpropertyupdatedchangebase.h>
#include <Qt3DCore/qskeletonloader.h>
#include <Qt3DCore/qaspectjob.h>
#include <Qt3DCore/qpropertynoderemovedchange.h>
#include <Qt3DCore/qdynamicpropertyupdatedchange.h>
#include <Qt3DCore/qscenechange.h>
#include <Qt3DCore/qstaticpropertyvalueaddedchangebase.h>
#include <Qt3DCore/qstaticpropertyvalueremovedchangebase.h>
#include <Qt3DCore/qnodedestroyedchange.h>
#include <Qt3DCore/qjoint.h>
#include <Qt3DCore/qpropertyvalueaddedchange.h>
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
    SBK_QT3DCORE_CHANGEFLAG_IDX                              = 3,
    SBK_QFLAGS_QT3DCORE_CHANGEFLAG_IDX                       = 0,
    SBK_Qt3DCoreQT3DCORE_IDX                                 = 2,
    SBK_QT3DCORE_QABSTRACTASPECT_IDX                         = 4,
    SBK_QT3DCORE_QABSTRACTSKELETON_IDX                       = 5,
    SBK_QT3DCORE_QARMATURE_IDX                               = 6,
    SBK_QT3DCORE_QASPECTENGINE_RUNMODE_IDX                   = 8,
    SBK_QT3DCORE_QASPECTENGINE_IDX                           = 7,
    SBK_QT3DCORE_QASPECTJOB_IDX                              = 9,
    SBK_QT3DCORE_QBACKENDNODE_MODE_IDX                       = 11,
    SBK_QT3DCORE_QBACKENDNODE_IDX                            = 10,
    SBK_QT3DCORE_QCOMPONENT_IDX                              = 12,
    SBK_QT3DCORE_QCOMPONENTADDEDCHANGE_IDX                   = 13,
    SBK_QT3DCORE_QCOMPONENTREMOVEDCHANGE_IDX                 = 14,
    SBK_QT3DCORE_QDYNAMICPROPERTYUPDATEDCHANGE_IDX           = 15,
    SBK_QT3DCORE_QENTITY_IDX                                 = 16,
    SBK_QT3DCORE_QJOINT_IDX                                  = 17,
    SBK_QT3DCORE_QNODE_PROPERTYTRACKINGMODE_IDX              = 19,
    SBK_QT3DCORE_QNODE_IDX                                   = 18,
    SBK_QT3DCORE_QNODECOMMAND_IDX                            = 20,
    SBK_QT3DCORE_QNODECREATEDCHANGEBASE_IDX                  = 21,
    SBK_QT3DCORE_QNODEDESTROYEDCHANGE_IDX                    = 22,
    SBK_QT3DCORE_QNODEID_IDX                                 = 23,
    SBK_QT3DCORE_QNODEIDTYPEPAIR_IDX                         = 24,
    SBK_QT3DCORE_QPROPERTYNODEADDEDCHANGE_IDX                = 25,
    SBK_QT3DCORE_QPROPERTYNODEREMOVEDCHANGE_IDX              = 26,
    SBK_QT3DCORE_QPROPERTYUPDATEDCHANGE_IDX                  = 27,
    SBK_QT3DCORE_QPROPERTYUPDATEDCHANGEBASE_IDX              = 28,
    SBK_QT3DCORE_QPROPERTYVALUEADDEDCHANGE_IDX               = 29,
    SBK_QT3DCORE_QPROPERTYVALUEADDEDCHANGEBASE_IDX           = 30,
    SBK_QT3DCORE_QPROPERTYVALUEREMOVEDCHANGE_IDX             = 31,
    SBK_QT3DCORE_QPROPERTYVALUEREMOVEDCHANGEBASE_IDX         = 32,
    SBK_QT3DCORE_QSCENECHANGE_DELIVERYFLAG_IDX               = 34,
    SBK_QFLAGS_QT3DCORE_QSCENECHANGE_DELIVERYFLAG_IDX        = 1,
    SBK_QT3DCORE_QSCENECHANGE_IDX                            = 33,
    SBK_QT3DCORE_QSKELETON_IDX                               = 35,
    SBK_QT3DCORE_QSKELETONLOADER_STATUS_IDX                  = 37,
    SBK_QT3DCORE_QSKELETONLOADER_IDX                         = 36,
    SBK_QT3DCORE_QSTATICPROPERTYUPDATEDCHANGEBASE_IDX        = 38,
    SBK_QT3DCORE_QSTATICPROPERTYVALUEADDEDCHANGEBASE_IDX     = 39,
    SBK_QT3DCORE_QSTATICPROPERTYVALUEREMOVEDCHANGEBASE_IDX   = 40,
    SBK_QT3DCORE_QTRANSFORM_IDX                              = 41,
    SBK_Qt3DCore_IDX_COUNT                                   = 42
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_Qt3DCoreTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_Qt3DCoreModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_Qt3DCoreTypeConverters;

// Converter indices
enum : int {
    SBK_QT3DCORE_QLIST_QOBJECTPTR_IDX                        = 0, // const QList<QObject* > &
    SBK_QT3DCORE_QLIST_QBYTEARRAY_IDX                        = 1, // QList<QByteArray >
    SBK_QT3DCORE_QVECTOR_QT3DCORE_QNODEPTR_IDX               = 2, // QVector<Qt3DCore::QNode* >
    SBK_QT3DCORE_QVECTOR_QT3DCORE_QENTITYPTR_IDX             = 3, // QVector<Qt3DCore::QEntity* >
    SBK_QT3DCORE_QVECTOR_QT3DCORE_QABSTRACTASPECTPTR_IDX     = 4, // QVector<Qt3DCore::QAbstractAspect* >
    SBK_QT3DCORE_QVECTOR_QT3DCORE_QCOMPONENTPTR_IDX          = 5, // QVector<Qt3DCore::QComponent* >
    SBK_QT3DCORE_QVECTOR_QT3DCORE_QJOINTPTR_IDX              = 6, // QVector<Qt3DCore::QJoint* >
    SBK_QT3DCORE_QVECTOR_QT3DCORE_QNODEIDTYPEPAIR_IDX        = 7, // const QVector<Qt3DCore::QNodeIdTypePair > &
    SBK_QT3DCORE_QLIST_QVARIANT_IDX                          = 8, // QList<QVariant >
    SBK_QT3DCORE_QLIST_QSTRING_IDX                           = 9, // QList<QString >
    SBK_QT3DCORE_QMAP_QSTRING_QVARIANT_IDX                   = 10, // QMap<QString,QVariant >
    SBK_Qt3DCore_CONVERTERS_IDX_COUNT                        = 11
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::Qt3DCore::ChangeFlag >() { return SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_CHANGEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt3DCore::ChangeFlag> >() { return SbkPySide2_Qt3DCoreTypes[SBK_QFLAGS_QT3DCORE_CHANGEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAbstractAspect >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QABSTRACTASPECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAbstractSkeleton >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QABSTRACTSKELETON_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QArmature >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QARMATURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAspectEngine::RunMode >() { return SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QASPECTENGINE_RUNMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAspectEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QASPECTENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QAspectJob >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QASPECTJOB_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QBackendNode::Mode >() { return SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QBACKENDNODE_MODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QBackendNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QBACKENDNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QComponent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QCOMPONENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QComponentAddedChange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QCOMPONENTADDEDCHANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QComponentRemovedChange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QCOMPONENTREMOVEDCHANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QDynamicPropertyUpdatedChange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QDYNAMICPROPERTYUPDATEDCHANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QEntity >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QENTITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QJoint >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QJOINT_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QNode::PropertyTrackingMode >() { return SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QNODE_PROPERTYTRACKINGMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QNodeCommand >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QNODECOMMAND_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QNodeCreatedChangeBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QNODECREATEDCHANGEBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QNodeDestroyedChange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QNODEDESTROYEDCHANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QNodeId >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QNODEID_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QNodeIdTypePair >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QNODEIDTYPEPAIR_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QPropertyNodeAddedChange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QPROPERTYNODEADDEDCHANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QPropertyNodeRemovedChange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QPROPERTYNODEREMOVEDCHANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QPropertyUpdatedChange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QPROPERTYUPDATEDCHANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QPropertyUpdatedChangeBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QPROPERTYUPDATEDCHANGEBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QPropertyValueAddedChange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QPROPERTYVALUEADDEDCHANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QPropertyValueAddedChangeBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QPROPERTYVALUEADDEDCHANGEBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QPropertyValueRemovedChange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QPROPERTYVALUEREMOVEDCHANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QPropertyValueRemovedChangeBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QPROPERTYVALUEREMOVEDCHANGEBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QSceneChange::DeliveryFlag >() { return SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QSCENECHANGE_DELIVERYFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt3DCore::QSceneChange::DeliveryFlag> >() { return SbkPySide2_Qt3DCoreTypes[SBK_QFLAGS_QT3DCORE_QSCENECHANGE_DELIVERYFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QSceneChange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QSCENECHANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QSkeleton >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QSKELETON_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QSkeletonLoader::Status >() { return SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QSKELETONLOADER_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QSkeletonLoader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QSKELETONLOADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QStaticPropertyUpdatedChangeBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QSTATICPROPERTYUPDATEDCHANGEBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QStaticPropertyValueAddedChangeBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QSTATICPROPERTYVALUEADDEDCHANGEBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QStaticPropertyValueRemovedChangeBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QSTATICPROPERTYVALUEREMOVEDCHANGEBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DCore::QTransform >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DCoreTypes[SBK_QT3DCORE_QTRANSFORM_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QT3DCORE_PYTHON_H

