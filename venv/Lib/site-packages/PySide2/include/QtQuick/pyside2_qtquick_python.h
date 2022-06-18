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


#ifndef SBK_QTQUICK_PYTHON_H
#define SBK_QTQUICK_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>
#include <pyside2_qtnetwork_python.h>
#include <pyside2_qtgui_python.h>
#include <pyside2_qtqml_python.h>

// Bound library includes
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickframebufferobject.h>
#include <QtQuick/qsgtexture.h>
#include <QtQuick/qquickwindow.h>
#include <QtQuick/qsgtextureprovider.h>
#include <QtQuick/qsgabstractrenderer.h>
#include <QtQuick/qquickview.h>
#include <qsharedpointer.h>
#include <QtQuick/qquickpainteditem.h>
#include <QtQuick/qsgsimplerectnode.h>
#include <QtQuick/qquickitemgrabresult.h>
#include <QtQuick/qsgsimpletexturenode.h>
#include <QtQuick/qsgmaterialtype.h>
#include <QtQuick/qquickrendercontrol.h>
#include <QtQuick/qsggeometry.h>
#include <QtQuick/qsgnode.h>
#include <QtQuick/qquicktextdocument.h>
#include <QtQuick/qsgengine.h>
#include <QtQuick/qquickimageprovider.h>
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
    SBK_QQUICKASYNCIMAGEPROVIDER_IDX                         = 9,
    SBK_QQUICKFRAMEBUFFEROBJECT_IDX                          = 10,
    SBK_QQUICKFRAMEBUFFEROBJECT_RENDERER_IDX                 = 11,
    SBK_QQUICKIMAGEPROVIDER_IDX                              = 12,
    SBK_QQUICKIMAGERESPONSE_IDX                              = 13,
    SBK_QQUICKITEM_FLAG_IDX                                  = 15,
    SBK_QFLAGS_QQUICKITEM_FLAG_IDX                           = 0,
    SBK_QQUICKITEM_ITEMCHANGE_IDX                            = 16,
    SBK_QQUICKITEM_TRANSFORMORIGIN_IDX                       = 17,
    SBK_QQUICKITEM_IDX                                       = 14,
    SBK_QQUICKITEM_UPDATEPAINTNODEDATA_IDX                   = 18,
    SBK_QQUICKITEMGRABRESULT_IDX                             = 19,
    SBK_QQUICKPAINTEDITEM_RENDERTARGET_IDX                   = 22,
    SBK_QQUICKPAINTEDITEM_PERFORMANCEHINT_IDX                = 21,
    SBK_QFLAGS_QQUICKPAINTEDITEM_PERFORMANCEHINT_IDX         = 1,
    SBK_QQUICKPAINTEDITEM_IDX                                = 20,
    SBK_QQUICKRENDERCONTROL_IDX                              = 23,
    SBK_QQUICKTEXTDOCUMENT_IDX                               = 24,
    SBK_QQUICKTEXTUREFACTORY_IDX                             = 25,
    SBK_QQUICKTRANSFORM_IDX                                  = 26,
    SBK_QQUICKVIEW_RESIZEMODE_IDX                            = 28,
    SBK_QQUICKVIEW_STATUS_IDX                                = 29,
    SBK_QQUICKVIEW_IDX                                       = 27,
    SBK_QQUICKWINDOW_CREATETEXTUREOPTION_IDX                 = 31,
    SBK_QFLAGS_QQUICKWINDOW_CREATETEXTUREOPTION_IDX          = 2,
    SBK_QQUICKWINDOW_RENDERSTAGE_IDX                         = 33,
    SBK_QQUICKWINDOW_SCENEGRAPHERROR_IDX                     = 34,
    SBK_QQUICKWINDOW_TEXTRENDERTYPE_IDX                      = 35,
    SBK_QQUICKWINDOW_NATIVEOBJECTTYPE_IDX                    = 32,
    SBK_QQUICKWINDOW_IDX                                     = 30,
    SBK_QSGABSTRACTRENDERER_CLEARMODEBIT_IDX                 = 37,
    SBK_QFLAGS_QSGABSTRACTRENDERER_CLEARMODEBIT_IDX          = 3,
    SBK_QSGABSTRACTRENDERER_MATRIXTRANSFORMFLAG_IDX          = 38,
    SBK_QFLAGS_QSGABSTRACTRENDERER_MATRIXTRANSFORMFLAG_IDX   = 4,
    SBK_QSGABSTRACTRENDERER_IDX                              = 36,
    SBK_QSGBASICGEOMETRYNODE_IDX                             = 39,
    SBK_QSGCLIPNODE_IDX                                      = 40,
    SBK_QSGDYNAMICTEXTURE_IDX                                = 41,
    SBK_QSGENGINE_CREATETEXTUREOPTION_IDX                    = 43,
    SBK_QFLAGS_QSGENGINE_CREATETEXTUREOPTION_IDX             = 5,
    SBK_QSGENGINE_IDX                                        = 42,
    SBK_QSGGEOMETRY_ATTRIBUTETYPE_IDX                        = 47,
    SBK_QSGGEOMETRY_DATAPATTERN_IDX                          = 49,
    SBK_QSGGEOMETRY_DRAWINGMODE_IDX                          = 50,
    SBK_QSGGEOMETRY_TYPE_IDX                                 = 53,
    SBK_QSGGEOMETRY_IDX                                      = 44,
    SBK_QSGGEOMETRY_ATTRIBUTE_IDX                            = 45,
    SBK_QSGGEOMETRY_ATTRIBUTESET_IDX                         = 46,
    SBK_QSGGEOMETRY_COLOREDPOINT2D_IDX                       = 48,
    SBK_QSGGEOMETRY_POINT2D_IDX                              = 51,
    SBK_QSGGEOMETRY_TEXTUREDPOINT2D_IDX                      = 52,
    SBK_QSGGEOMETRYNODE_IDX                                  = 54,
    SBK_QSGMATERIALTYPE_IDX                                  = 55,
    SBK_QSGNODE_NODETYPE_IDX                                 = 59,
    SBK_QSGNODE_FLAG_IDX                                     = 58,
    SBK_QFLAGS_QSGNODE_FLAG_IDX                              = 7,
    SBK_QSGNODE_DIRTYSTATEBIT_IDX                            = 57,
    SBK_QFLAGS_QSGNODE_DIRTYSTATEBIT_IDX                     = 6,
    SBK_QSGNODE_IDX                                          = 56,
    SBK_QSGOPACITYNODE_IDX                                   = 60,
    SBK_QSGSIMPLERECTNODE_IDX                                = 61,
    SBK_QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_IDX = 63,
    SBK_QFLAGS_QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_IDX = 8,
    SBK_QSGSIMPLETEXTURENODE_IDX                             = 62,
    SBK_QSGTEXTURE_WRAPMODE_IDX                              = 67,
    SBK_QSGTEXTURE_FILTERING_IDX                             = 66,
    SBK_QSGTEXTURE_ANISOTROPYLEVEL_IDX                       = 65,
    SBK_QSGTEXTURE_IDX                                       = 64,
    SBK_QSGTEXTUREPROVIDER_IDX                               = 68,
    SBK_QSGTRANSFORMNODE_IDX                                 = 69,
    SBK_QSHAREDPOINTER_QQUICKITEMGRABRESULT_IDX              = 71, // QSharedPointer<QQuickItemGrabResult >
    SBK_QSHAREDPOINTER_CONSTQQUICKITEMGRABRESULT_IDX         = 71, //   (const)
    SBK_QtQuick_IDX_COUNT                                    = 72
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtQuickTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtQuickModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtQuickTypeConverters;

// Converter indices
enum : int {
    SBK_QTQUICK_QLIST_QQUICKITEMPTR_IDX                      = 0, // QList<QQuickItem* >
    SBK_QTQUICK_QVECTOR_INT_IDX                              = 1, // const QVector<int > &
    SBK_QTQUICK_QLIST_QOBJECTPTR_IDX                         = 2, // const QList<QObject* > &
    SBK_QTQUICK_QLIST_QBYTEARRAY_IDX                         = 3, // QList<QByteArray >
    SBK_QTQUICK_QLIST_QQMLERROR_IDX                          = 4, // QList<QQmlError >
    SBK_QTQUICK_QMAP_QSTRING_QVARIANT_IDX                    = 5, // const QMap<QString,QVariant > &
    SBK_QTQUICK_QLIST_QVARIANT_IDX                           = 6, // QList<QVariant >
    SBK_QTQUICK_QLIST_QSTRING_IDX                            = 7, // QList<QString >
    SBK_QtQuick_CONVERTERS_IDX_COUNT                         = 8
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QQuickAsyncImageProvider >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKASYNCIMAGEPROVIDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickFramebufferObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKFRAMEBUFFEROBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickFramebufferObject::Renderer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKFRAMEBUFFEROBJECT_RENDERER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickImageProvider >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKIMAGEPROVIDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickImageResponse >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKIMAGERESPONSE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItem::Flag >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKITEM_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QQuickItem::Flag> >() { return SbkPySide2_QtQuickTypes[SBK_QFLAGS_QQUICKITEM_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickItem::ItemChange >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKITEM_ITEMCHANGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickItem::TransformOrigin >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKITEM_TRANSFORMORIGIN_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItem::UpdatePaintNodeData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKITEM_UPDATEPAINTNODEDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItemGrabResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKITEMGRABRESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickPaintedItem::RenderTarget >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKPAINTEDITEM_RENDERTARGET_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickPaintedItem::PerformanceHint >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKPAINTEDITEM_PERFORMANCEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QQuickPaintedItem::PerformanceHint> >() { return SbkPySide2_QtQuickTypes[SBK_QFLAGS_QQUICKPAINTEDITEM_PERFORMANCEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickPaintedItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKPAINTEDITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickRenderControl >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKRENDERCONTROL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickTextDocument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKTEXTDOCUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickTextureFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKTEXTUREFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickTransform >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKTRANSFORM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickView::ResizeMode >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKVIEW_RESIZEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickView::Status >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKVIEW_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKVIEW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::CreateTextureOption >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKWINDOW_CREATETEXTUREOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QQuickWindow::CreateTextureOption> >() { return SbkPySide2_QtQuickTypes[SBK_QFLAGS_QQUICKWINDOW_CREATETEXTUREOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::RenderStage >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKWINDOW_RENDERSTAGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::SceneGraphError >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKWINDOW_SCENEGRAPHERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::TextRenderType >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKWINDOW_TEXTRENDERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::NativeObjectType >() { return SbkPySide2_QtQuickTypes[SBK_QQUICKWINDOW_NATIVEOBJECTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QQuickWindow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QQUICKWINDOW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGAbstractRenderer::ClearModeBit >() { return SbkPySide2_QtQuickTypes[SBK_QSGABSTRACTRENDERER_CLEARMODEBIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGAbstractRenderer::ClearModeBit> >() { return SbkPySide2_QtQuickTypes[SBK_QFLAGS_QSGABSTRACTRENDERER_CLEARMODEBIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGAbstractRenderer::MatrixTransformFlag >() { return SbkPySide2_QtQuickTypes[SBK_QSGABSTRACTRENDERER_MATRIXTRANSFORMFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGAbstractRenderer::MatrixTransformFlag> >() { return SbkPySide2_QtQuickTypes[SBK_QFLAGS_QSGABSTRACTRENDERER_MATRIXTRANSFORMFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGAbstractRenderer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGABSTRACTRENDERER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGBasicGeometryNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGBASICGEOMETRYNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGClipNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGCLIPNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGDynamicTexture >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGDYNAMICTEXTURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGEngine::CreateTextureOption >() { return SbkPySide2_QtQuickTypes[SBK_QSGENGINE_CREATETEXTUREOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGEngine::CreateTextureOption> >() { return SbkPySide2_QtQuickTypes[SBK_QFLAGS_QSGENGINE_CREATETEXTUREOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::AttributeType >() { return SbkPySide2_QtQuickTypes[SBK_QSGGEOMETRY_ATTRIBUTETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::DataPattern >() { return SbkPySide2_QtQuickTypes[SBK_QSGGEOMETRY_DATAPATTERN_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::DrawingMode >() { return SbkPySide2_QtQuickTypes[SBK_QSGGEOMETRY_DRAWINGMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::Type >() { return SbkPySide2_QtQuickTypes[SBK_QSGGEOMETRY_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGGeometry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGGEOMETRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::Attribute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGGEOMETRY_ATTRIBUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::AttributeSet >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGGEOMETRY_ATTRIBUTESET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::ColoredPoint2D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGGEOMETRY_COLOREDPOINT2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::Point2D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGGEOMETRY_POINT2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::TexturedPoint2D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGGEOMETRY_TEXTUREDPOINT2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometryNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGGEOMETRYNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterialType >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGMATERIALTYPE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGNode::NodeType >() { return SbkPySide2_QtQuickTypes[SBK_QSGNODE_NODETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGNode::Flag >() { return SbkPySide2_QtQuickTypes[SBK_QSGNODE_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGNode::Flag> >() { return SbkPySide2_QtQuickTypes[SBK_QFLAGS_QSGNODE_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGNode::DirtyStateBit >() { return SbkPySide2_QtQuickTypes[SBK_QSGNODE_DIRTYSTATEBIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGNode::DirtyStateBit> >() { return SbkPySide2_QtQuickTypes[SBK_QFLAGS_QSGNODE_DIRTYSTATEBIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGOpacityNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGOPACITYNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGSimpleRectNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGSIMPLERECTNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGSimpleTextureNode::TextureCoordinatesTransformFlag >() { return SbkPySide2_QtQuickTypes[SBK_QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag> >() { return SbkPySide2_QtQuickTypes[SBK_QFLAGS_QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGSimpleTextureNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGSIMPLETEXTURENODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTexture::WrapMode >() { return SbkPySide2_QtQuickTypes[SBK_QSGTEXTURE_WRAPMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGTexture::Filtering >() { return SbkPySide2_QtQuickTypes[SBK_QSGTEXTURE_FILTERING_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGTexture::AnisotropyLevel >() { return SbkPySide2_QtQuickTypes[SBK_QSGTEXTURE_ANISOTROPYLEVEL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSGTexture >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGTEXTURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTextureProvider >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGTEXTUREPROVIDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTransformNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSGTRANSFORMNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSharedPointer<QQuickItemGrabResult > >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtQuickTypes[SBK_QSHAREDPOINTER_QQUICKITEMGRABRESULT_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTQUICK_PYTHON_H

