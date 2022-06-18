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


#ifndef SBK_QT3DEXTRAS_PYTHON_H
#define SBK_QT3DEXTRAS_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qt3drender_python.h>
#include <pyside2_qt3dcore_python.h>
#include <pyside2_qtgui_python.h>
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <Qt3DExtras/qskyboxentity.h>
#include <Qt3DExtras/qtorusmesh.h>
#include <Qt3DExtras/qcylindermesh.h>
#include <Qt3DExtras/qspritesheetitem.h>
#include <Qt3DExtras/qspheregeometry.h>
#include <Qt3DExtras/qdiffusemapmaterial.h>
#include <Qt3DExtras/qspritesheet.h>
#include <Qt3DExtras/qcylindergeometry.h>
#include <Qt3DExtras/qnormaldiffusespecularmapmaterial.h>
#include <Qt3DExtras/qconemesh.h>
#include <Qt3DExtras/qorbitcameracontroller.h>
#include <Qt3DExtras/qconegeometry.h>
#include <Qt3DExtras/qcuboidmesh.h>
#include <Qt3DExtras/qtorusgeometry.h>
#include <Qt3DExtras/qgoochmaterial.h>
#include <Qt3DExtras/qt3dwindow.h>
#include <Qt3DExtras/qfirstpersoncameracontroller.h>
#include <Qt3DExtras/qdiffusespecularmaterial.h>
#include <Qt3DExtras/qnormaldiffusemapmaterial.h>
#include <Qt3DExtras/qnormaldiffusemapalphamaterial.h>
#include <Qt3DExtras/qplanemesh.h>
#include <Qt3DExtras/qpervertexcolormaterial.h>
#include <Qt3DExtras/qextrudedtextgeometry.h>
#include <Qt3DExtras/qabstractcameracontroller.h>
#include <Qt3DExtras/qplanegeometry.h>
#include <Qt3DExtras/qabstractspritesheet.h>
#include <Qt3DExtras/qspheremesh.h>
#include <Qt3DExtras/qtexturematerial.h>
#include <Qt3DExtras/qextrudedtextmesh.h>
#include <Qt3DExtras/qdiffusespecularmapmaterial.h>
#include <Qt3DExtras/qphongalphamaterial.h>
#include <Qt3DExtras/qmetalroughmaterial.h>
#include <Qt3DExtras/qcuboidgeometry.h>
#include <Qt3DExtras/qmorphphongmaterial.h>
#include <Qt3DExtras/qphongmaterial.h>
#include <Qt3DExtras/qforwardrenderer.h>
#include <Qt3DExtras/qspritegrid.h>
#include <Qt3DExtras/qtext2dentity.h>
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
    SBK_Qt3DExtrasQT3DEXTRAS_IDX                             = 0,
    SBK_QT3DEXTRAS_QABSTRACTCAMERACONTROLLER_IDX             = 1,
    SBK_QT3DEXTRAS_QABSTRACTCAMERACONTROLLER_INPUTSTATE_IDX  = 2,
    SBK_QT3DEXTRAS_QABSTRACTSPRITESHEET_IDX                  = 3,
    SBK_QT3DEXTRAS_QCONEGEOMETRY_IDX                         = 4,
    SBK_QT3DEXTRAS_QCONEMESH_IDX                             = 5,
    SBK_QT3DEXTRAS_QCUBOIDGEOMETRY_IDX                       = 6,
    SBK_QT3DEXTRAS_QCUBOIDMESH_IDX                           = 7,
    SBK_QT3DEXTRAS_QCYLINDERGEOMETRY_IDX                     = 8,
    SBK_QT3DEXTRAS_QCYLINDERMESH_IDX                         = 9,
    SBK_QT3DEXTRAS_QDIFFUSEMAPMATERIAL_IDX                   = 10,
    SBK_QT3DEXTRAS_QDIFFUSESPECULARMAPMATERIAL_IDX           = 11,
    SBK_QT3DEXTRAS_QDIFFUSESPECULARMATERIAL_IDX              = 12,
    SBK_QT3DEXTRAS_QEXTRUDEDTEXTGEOMETRY_IDX                 = 13,
    SBK_QT3DEXTRAS_QEXTRUDEDTEXTMESH_IDX                     = 14,
    SBK_QT3DEXTRAS_QFIRSTPERSONCAMERACONTROLLER_IDX          = 15,
    SBK_QT3DEXTRAS_QFORWARDRENDERER_IDX                      = 16,
    SBK_QT3DEXTRAS_QGOOCHMATERIAL_IDX                        = 17,
    SBK_QT3DEXTRAS_QMETALROUGHMATERIAL_IDX                   = 18,
    SBK_QT3DEXTRAS_QMORPHPHONGMATERIAL_IDX                   = 19,
    SBK_QT3DEXTRAS_QNORMALDIFFUSEMAPALPHAMATERIAL_IDX        = 20,
    SBK_QT3DEXTRAS_QNORMALDIFFUSEMAPMATERIAL_IDX             = 21,
    SBK_QT3DEXTRAS_QNORMALDIFFUSESPECULARMAPMATERIAL_IDX     = 22,
    SBK_QT3DEXTRAS_QORBITCAMERACONTROLLER_IDX                = 23,
    SBK_QT3DEXTRAS_QPERVERTEXCOLORMATERIAL_IDX               = 24,
    SBK_QT3DEXTRAS_QPHONGALPHAMATERIAL_IDX                   = 25,
    SBK_QT3DEXTRAS_QPHONGMATERIAL_IDX                        = 26,
    SBK_QT3DEXTRAS_QPLANEGEOMETRY_IDX                        = 27,
    SBK_QT3DEXTRAS_QPLANEMESH_IDX                            = 28,
    SBK_QT3DEXTRAS_QSKYBOXENTITY_IDX                         = 29,
    SBK_QT3DEXTRAS_QSPHEREGEOMETRY_IDX                       = 30,
    SBK_QT3DEXTRAS_QSPHEREMESH_IDX                           = 31,
    SBK_QT3DEXTRAS_QSPRITEGRID_IDX                           = 32,
    SBK_QT3DEXTRAS_QSPRITESHEET_IDX                          = 33,
    SBK_QT3DEXTRAS_QSPRITESHEETITEM_IDX                      = 34,
    SBK_QT3DEXTRAS_QTEXT2DENTITY_IDX                         = 35,
    SBK_QT3DEXTRAS_QTEXTUREMATERIAL_IDX                      = 36,
    SBK_QT3DEXTRAS_QTORUSGEOMETRY_IDX                        = 37,
    SBK_QT3DEXTRAS_QTORUSMESH_IDX                            = 38,
    SBK_QT3DEXTRAS_QT3DWINDOW_IDX                            = 39,
    SBK_Qt3DExtras_IDX_COUNT                                 = 40
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_Qt3DExtrasTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_Qt3DExtrasModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_Qt3DExtrasTypeConverters;

// Converter indices
enum : int {
    SBK_QT3DEXTRAS_QVECTOR_QT3DCORE_QCOMPONENTPTR_IDX        = 0, // QVector<Qt3DCore::QComponent* >
    SBK_QT3DEXTRAS_QVECTOR_QT3DCORE_QNODEPTR_IDX             = 1, // QVector<Qt3DCore::QNode* >
    SBK_QT3DEXTRAS_QVECTOR_QT3DRENDER_QATTRIBUTEPTR_IDX      = 2, // QVector<Qt3DRender::QAttribute* >
    SBK_QT3DEXTRAS_QVECTOR_QT3DRENDER_QPARAMETERPTR_IDX      = 3, // QVector<Qt3DRender::QParameter* >
    SBK_QT3DEXTRAS_QVECTOR_QT3DRENDER_QFILTERKEYPTR_IDX      = 4, // QVector<Qt3DRender::QFilterKey* >
    SBK_QT3DEXTRAS_QVECTOR_QT3DEXTRAS_QSPRITESHEETITEMPTR_IDX = 5, // QVector<Qt3DExtras::QSpriteSheetItem* >
    SBK_QT3DEXTRAS_QLIST_QVARIANT_IDX                        = 6, // QList<QVariant >
    SBK_QT3DEXTRAS_QLIST_QSTRING_IDX                         = 7, // QList<QString >
    SBK_QT3DEXTRAS_QMAP_QSTRING_QVARIANT_IDX                 = 8, // QMap<QString,QVariant >
    SBK_Qt3DExtras_CONVERTERS_IDX_COUNT                      = 9
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QAbstractCameraController >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QABSTRACTCAMERACONTROLLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QAbstractCameraController::InputState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QABSTRACTCAMERACONTROLLER_INPUTSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QAbstractSpriteSheet >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QABSTRACTSPRITESHEET_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QConeGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCONEGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QConeMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCONEMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QCuboidGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCUBOIDGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QCuboidMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCUBOIDMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QCylinderGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCYLINDERGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QCylinderMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QCYLINDERMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QDiffuseMapMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QDIFFUSEMAPMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QDiffuseSpecularMapMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QDIFFUSESPECULARMAPMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QDiffuseSpecularMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QDIFFUSESPECULARMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QExtrudedTextGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QEXTRUDEDTEXTGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QExtrudedTextMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QEXTRUDEDTEXTMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QFirstPersonCameraController >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QFIRSTPERSONCAMERACONTROLLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QForwardRenderer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QFORWARDRENDERER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QGoochMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QGOOCHMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QMetalRoughMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QMETALROUGHMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QMorphPhongMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QMORPHPHONGMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QNormalDiffuseMapAlphaMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QNORMALDIFFUSEMAPALPHAMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QNormalDiffuseMapMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QNORMALDIFFUSEMAPMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QNormalDiffuseSpecularMapMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QNORMALDIFFUSESPECULARMAPMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QOrbitCameraController >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QORBITCAMERACONTROLLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QPerVertexColorMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QPERVERTEXCOLORMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QPhongAlphaMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QPHONGALPHAMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QPhongMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QPHONGMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QPlaneGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QPLANEGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QPlaneMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QPLANEMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSkyboxEntity >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSKYBOXENTITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSphereGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSPHEREGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSphereMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSPHEREMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSpriteGrid >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSPRITEGRID_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSpriteSheet >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSPRITESHEET_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QSpriteSheetItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QSPRITESHEETITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QText2DEntity >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QTEXT2DENTITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QTextureMaterial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QTEXTUREMATERIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QTorusGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QTORUSGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::QTorusMesh >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QTORUSMESH_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt3DExtras::Qt3DWindow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_Qt3DExtrasTypes[SBK_QT3DEXTRAS_QT3DWINDOW_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QT3DEXTRAS_PYTHON_H

