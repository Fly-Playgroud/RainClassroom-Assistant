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


#ifndef SBK_QTDATAVISUALIZATION_PYTHON_H
#define SBK_QTDATAVISUALIZATION_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtgui_python.h>
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtDataVisualization/qscatterdataitem.h>
#include <QtDataVisualization/qabstract3daxis.h>
#include <QtDataVisualization/qvalue3daxis.h>
#include <QtDataVisualization/q3dscatter.h>
#include <QtDataVisualization/qabstractdataproxy.h>
#include <QtDataVisualization/qsurfacedataproxy.h>
#include <QtDataVisualization/qcustom3dlabel.h>
#include <QtDataVisualization/qabstract3dinputhandler.h>
#include <QtDataVisualization/qtouch3dinputhandler.h>
#include <QtDataVisualization/qbardataproxy.h>
#include <QtDataVisualization/q3dbars.h>
#include <QtDataVisualization/qheightmapsurfacedataproxy.h>
#include <QtDataVisualization/qsurface3dseries.h>
#include <QtDataVisualization/q3dobject.h>
#include <QtDataVisualization/qscatterdataproxy.h>
#include <QtDataVisualization/qbardataitem.h>
#include <QtDataVisualization/q3dcamera.h>
#include <QtDataVisualization/qvalue3daxisformatter.h>
#include <QtDataVisualization/qcustom3dvolume.h>
#include <QtDataVisualization/qitemmodelsurfacedataproxy.h>
#include <QtDataVisualization/qscatter3dseries.h>
#include <QtDataVisualization/q3dtheme.h>
#include <QtDataVisualization/q3dscene.h>
#include <QtDataVisualization/qcategory3daxis.h>
#include <QtDataVisualization/qitemmodelbardataproxy.h>
#include <QtDataVisualization/qcustom3ditem.h>
#include <QtDataVisualization/q3dinputhandler.h>
#include <QtDataVisualization/q3dlight.h>
#include <QtDataVisualization/qsurfacedataitem.h>
#include <QtDataVisualization/qabstract3dseries.h>
#include <QtDataVisualization/q3dsurface.h>
#include <QtDataVisualization/qbar3dseries.h>
#include <QtDataVisualization/qitemmodelscatterdataproxy.h>
#include <QtDataVisualization/qlogvalue3daxisformatter.h>
#include <QtDataVisualization/qabstract3dgraph.h>
// Conversion Includes - Primitive Types
#include <wtypes.h>
#include <qabstractitemmodel.h>
#include <QString>
#include <QStringList>
#include <qbardataproxy.h>
#include <qsurfacedataproxy.h>
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
    SBK_QtDataVisualizationQTDATAVISUALIZATION_IDX           = 3,
    SBK_QTDATAVISUALIZATION_Q3DBARS_IDX                      = 4,
    SBK_QTDATAVISUALIZATION_Q3DCAMERA_CAMERAPRESET_IDX       = 6,
    SBK_QTDATAVISUALIZATION_Q3DCAMERA_IDX                    = 5,
    SBK_QTDATAVISUALIZATION_Q3DINPUTHANDLER_IDX              = 7,
    SBK_QTDATAVISUALIZATION_Q3DLIGHT_IDX                     = 8,
    SBK_QTDATAVISUALIZATION_Q3DOBJECT_IDX                    = 9,
    SBK_QTDATAVISUALIZATION_Q3DSCATTER_IDX                   = 10,
    SBK_QTDATAVISUALIZATION_Q3DSCENE_IDX                     = 11,
    SBK_QTDATAVISUALIZATION_Q3DSURFACE_IDX                   = 12,
    SBK_QTDATAVISUALIZATION_Q3DTHEME_COLORSTYLE_IDX          = 14,
    SBK_QTDATAVISUALIZATION_Q3DTHEME_THEME_IDX               = 15,
    SBK_QTDATAVISUALIZATION_Q3DTHEME_IDX                     = 13,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DAXIS_AXISORIENTATION_IDX = 17,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DAXIS_AXISTYPE_IDX     = 18,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DAXIS_IDX              = 16,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_SELECTIONFLAG_IDX = 22,
    SBK_QFLAGS_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_SELECTIONFLAG_IDX = 1,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_SHADOWQUALITY_IDX = 23,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_ELEMENTTYPE_IDX = 20,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_OPTIMIZATIONHINT_IDX = 21,
    SBK_QFLAGS_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_OPTIMIZATIONHINT_IDX = 0,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_IDX             = 19,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DINPUTHANDLER_INPUTVIEW_IDX = 25,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DINPUTHANDLER_IDX      = 24,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DSERIES_SERIESTYPE_IDX = 28,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DSERIES_MESH_IDX       = 27,
    SBK_QTDATAVISUALIZATION_QABSTRACT3DSERIES_IDX            = 26,
    SBK_QTDATAVISUALIZATION_QABSTRACTDATAPROXY_DATATYPE_IDX  = 30,
    SBK_QTDATAVISUALIZATION_QABSTRACTDATAPROXY_IDX           = 29,
    SBK_QTDATAVISUALIZATION_QBAR3DSERIES_IDX                 = 31,
    SBK_QTDATAVISUALIZATION_QBARDATAITEM_IDX                 = 32,
    SBK_QTDATAVISUALIZATION_QBARDATAPROXY_IDX                = 33,
    SBK_QTDATAVISUALIZATION_QCATEGORY3DAXIS_IDX              = 34,
    SBK_QTDATAVISUALIZATION_QCUSTOM3DITEM_IDX                = 35,
    SBK_QTDATAVISUALIZATION_QCUSTOM3DLABEL_IDX               = 36,
    SBK_QTDATAVISUALIZATION_QCUSTOM3DVOLUME_IDX              = 37,
    SBK_QTDATAVISUALIZATION_QHEIGHTMAPSURFACEDATAPROXY_IDX   = 38,
    SBK_QTDATAVISUALIZATION_QITEMMODELBARDATAPROXY_MULTIMATCHBEHAVIOR_IDX = 40,
    SBK_QTDATAVISUALIZATION_QITEMMODELBARDATAPROXY_IDX       = 39,
    SBK_QTDATAVISUALIZATION_QITEMMODELSCATTERDATAPROXY_IDX   = 41,
    SBK_QTDATAVISUALIZATION_QITEMMODELSURFACEDATAPROXY_MULTIMATCHBEHAVIOR_IDX = 43,
    SBK_QTDATAVISUALIZATION_QITEMMODELSURFACEDATAPROXY_IDX   = 42,
    SBK_QTDATAVISUALIZATION_QLOGVALUE3DAXISFORMATTER_IDX     = 44,
    SBK_QTDATAVISUALIZATION_QSCATTER3DSERIES_IDX             = 45,
    SBK_QTDATAVISUALIZATION_QSCATTERDATAITEM_IDX             = 46,
    SBK_QTDATAVISUALIZATION_QSCATTERDATAPROXY_IDX            = 47,
    SBK_QTDATAVISUALIZATION_QSURFACE3DSERIES_DRAWFLAG_IDX    = 49,
    SBK_QFLAGS_QTDATAVISUALIZATION_QSURFACE3DSERIES_DRAWFLAG_IDX = 2,
    SBK_QTDATAVISUALIZATION_QSURFACE3DSERIES_IDX             = 48,
    SBK_QTDATAVISUALIZATION_QSURFACEDATAITEM_IDX             = 50,
    SBK_QTDATAVISUALIZATION_QSURFACEDATAPROXY_IDX            = 51,
    SBK_QTDATAVISUALIZATION_QTOUCH3DINPUTHANDLER_IDX         = 52,
    SBK_QTDATAVISUALIZATION_QVALUE3DAXIS_IDX                 = 53,
    SBK_QTDATAVISUALIZATION_QVALUE3DAXISFORMATTER_IDX        = 54,
    SBK_QtDataVisualization_IDX_COUNT                        = 55
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtDataVisualizationTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtDataVisualizationModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtDataVisualizationTypeConverters;

// Converter indices
enum : int {
    SBK_QTDATAVISUALIZATION_QBARDATAARRAY_IDX                = 0,
    SBK_QTDATAVISUALIZATION_QSURFACEDATAARRAY_IDX            = 1,
    SBK_QTDATAVISUALIZATION_QLIST_QTDATAVISUALIZATION_QABSTRACT3DAXISPTR_IDX = 2, // QList<QtDataVisualization::QAbstract3DAxis* >
    SBK_QTDATAVISUALIZATION_QLIST_QTDATAVISUALIZATION_QCUSTOM3DITEMPTR_IDX = 3, // QList<QtDataVisualization::QCustom3DItem* >
    SBK_QTDATAVISUALIZATION_QLIST_QTDATAVISUALIZATION_QABSTRACT3DINPUTHANDLERPTR_IDX = 4, // QList<QtDataVisualization::QAbstract3DInputHandler* >
    SBK_QTDATAVISUALIZATION_QLIST_QTDATAVISUALIZATION_QBAR3DSERIESPTR_IDX = 5, // QList<QtDataVisualization::QBar3DSeries* >
    SBK_QTDATAVISUALIZATION_QLIST_QTDATAVISUALIZATION_Q3DTHEMEPTR_IDX = 6, // QList<QtDataVisualization::Q3DTheme* >
    SBK_QTDATAVISUALIZATION_QLIST_QOBJECTPTR_IDX             = 7, // const QList<QObject* > &
    SBK_QTDATAVISUALIZATION_QLIST_QBYTEARRAY_IDX             = 8, // QList<QByteArray >
    SBK_QTDATAVISUALIZATION_QLIST_QTDATAVISUALIZATION_QVALUE3DAXISPTR_IDX = 9, // QList<QtDataVisualization::QValue3DAxis* >
    SBK_QTDATAVISUALIZATION_QLIST_QTDATAVISUALIZATION_QSCATTER3DSERIESPTR_IDX = 10, // QList<QtDataVisualization::QScatter3DSeries* >
    SBK_QTDATAVISUALIZATION_QLIST_QTDATAVISUALIZATION_QSURFACE3DSERIESPTR_IDX = 11, // QList<QtDataVisualization::QSurface3DSeries* >
    SBK_QTDATAVISUALIZATION_QLIST_QCOLOR_IDX                 = 12, // QList<QColor >
    SBK_QTDATAVISUALIZATION_QLIST_QLINEARGRADIENT_IDX        = 13, // QList<QLinearGradient >
    SBK_QTDATAVISUALIZATION_QVECTOR_QTDATAVISUALIZATION_QBARDATAITEM_IDX = 14, // QVector<QtDataVisualization::QBarDataItem > *
    SBK_QTDATAVISUALIZATION_QVECTOR_UCHAR_IDX                = 15, // QVector<uchar > *
    SBK_QTDATAVISUALIZATION_QVECTOR_UNSIGNEDINT_IDX          = 16, // const QVector<unsigned int > &
    SBK_QTDATAVISUALIZATION_QVECTOR_QIMAGEPTR_IDX            = 17, // const QVector<QImage* > &
    SBK_QTDATAVISUALIZATION_QVECTOR_QTDATAVISUALIZATION_QSURFACEDATAITEM_IDX = 18, // QVector<QtDataVisualization::QSurfaceDataItem > *
    SBK_QTDATAVISUALIZATION_QVECTOR_QTDATAVISUALIZATION_QSCATTERDATAITEM_IDX = 19, // const QVector<QtDataVisualization::QScatterDataItem > &
    SBK_QTDATAVISUALIZATION_QVECTOR_FLOAT_IDX                = 20, // QVector<float > &
    SBK_QTDATAVISUALIZATION_QLIST_QVARIANT_IDX               = 21, // QList<QVariant >
    SBK_QTDATAVISUALIZATION_QLIST_QSTRING_IDX                = 22, // QList<QString >
    SBK_QTDATAVISUALIZATION_QMAP_QSTRING_QVARIANT_IDX        = 23, // QMap<QString,QVariant >
    SBK_QtDataVisualization_CONVERTERS_IDX_COUNT             = 24
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DBars >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DBARS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DCamera::CameraPreset >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DCAMERA_CAMERAPRESET_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DCamera >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DCAMERA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DInputHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DINPUTHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DLight >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DLIGHT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DScatter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DSCATTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DScene >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DSCENE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DSurface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DSURFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DTheme::ColorStyle >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DTHEME_COLORSTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DTheme::Theme >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DTHEME_THEME_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::Q3DTheme >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_Q3DTHEME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DAxis::AxisOrientation >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DAXIS_AXISORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DAxis::AxisType >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DAXIS_AXISTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DGraph::SelectionFlag >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_SELECTIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QtDataVisualization::QAbstract3DGraph::SelectionFlag> >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QFLAGS_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_SELECTIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DGraph::ShadowQuality >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_SHADOWQUALITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DGraph::ElementType >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_ELEMENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DGraph::OptimizationHint >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_OPTIMIZATIONHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QtDataVisualization::QAbstract3DGraph::OptimizationHint> >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QFLAGS_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_OPTIMIZATIONHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DGraph >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DGRAPH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DInputHandler::InputView >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DINPUTHANDLER_INPUTVIEW_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DInputHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DINPUTHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DSeries::SeriesType >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DSERIES_SERIESTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DSeries::Mesh >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DSERIES_MESH_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstract3DSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACT3DSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstractDataProxy::DataType >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACTDATAPROXY_DATATYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QAbstractDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QABSTRACTDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QBar3DSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QBAR3DSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QBarDataItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QBARDATAITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QBarDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QBARDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QCategory3DAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QCATEGORY3DAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QCustom3DItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QCUSTOM3DITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QCustom3DLabel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QCUSTOM3DLABEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QCustom3DVolume >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QCUSTOM3DVOLUME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QHeightMapSurfaceDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QHEIGHTMAPSURFACEDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QItemModelBarDataProxy::MultiMatchBehavior >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QITEMMODELBARDATAPROXY_MULTIMATCHBEHAVIOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QItemModelBarDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QITEMMODELBARDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QItemModelScatterDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QITEMMODELSCATTERDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QItemModelSurfaceDataProxy::MultiMatchBehavior >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QITEMMODELSURFACEDATAPROXY_MULTIMATCHBEHAVIOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QItemModelSurfaceDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QITEMMODELSURFACEDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QLogValue3DAxisFormatter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QLOGVALUE3DAXISFORMATTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QScatter3DSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QSCATTER3DSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QScatterDataItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QSCATTERDATAITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QScatterDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QSCATTERDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QSurface3DSeries::DrawFlag >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QSURFACE3DSERIES_DRAWFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QtDataVisualization::QSurface3DSeries::DrawFlag> >() { return SbkPySide2_QtDataVisualizationTypes[SBK_QFLAGS_QTDATAVISUALIZATION_QSURFACE3DSERIES_DRAWFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QSurface3DSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QSURFACE3DSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QSurfaceDataItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QSURFACEDATAITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QSurfaceDataProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QSURFACEDATAPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QTouch3DInputHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QTOUCH3DINPUTHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QValue3DAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QVALUE3DAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtDataVisualization::QValue3DAxisFormatter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtDataVisualizationTypes[SBK_QTDATAVISUALIZATION_QVALUE3DAXISFORMATTER_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTDATAVISUALIZATION_PYTHON_H

