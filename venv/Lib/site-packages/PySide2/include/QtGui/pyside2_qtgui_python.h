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


#ifndef SBK_QTGUI_PYTHON_H
#define SBK_QTGUI_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtGui/qopenglbuffer.h>
#include <QtGui/qopenglframebufferobject.h>
#include <QtGui/qvector4d.h>
#include <QtGui/qrasterwindow.h>
#include <QtGui/qscreen.h>
#include <QtGui/qicon.h>
#include <QTextBlock>
#include <QtGui/qmovie.h>
#include <QPainterPath>
#include <QtGui/qopenglextrafunctions.h>
#include <QtGui/qpen.h>
#include <QtGui/qstandarditemmodel.h>
#include <QtGui/qstylehints.h>
#include <QInputMethodEvent>
#include <QtGui/qopengltextureblitter.h>
#include <QtGui/qvalidator.h>
#include <QtGui/qpolygon.h>
#include <QtGui/qpdfwriter.h>
#include <QtGui/qopengltimerquery.h>
#include <QtGui/qopenglshaderprogram.h>
#include <QtGui/qimageiohandler.h>
#include <QtGui/qtextformat.h>
#include <QtGui/qvector2d.h>
#include <QtGui/qdesktopservices.h>
#include <QtGui/qfontdatabase.h>
#include <QtGui/qpagelayout.h>
#include <QtGui/qoffscreensurface.h>
#include <QtGui/qopenglpixeltransferoptions.h>
#include <QTextFrame>
#include <QtGui/qopenglwindow.h>
#include <QtGui/qclipboard.h>
#include <QtGui/qpaintengine.h>
#include <QtGui/qkeysequence.h>
#include <QtGui/qpalette.h>
#include <QtGui/qtextdocumentfragment.h>
#include <QtGui/qtextlayout.h>
#include <QtGui/qcolor.h>
#include <QtGui/qopengltexture.h>
#include <QtGui/qfontinfo.h>
#include <QtGui/qgenericmatrix.h>
#include <QtGui/qsessionmanager.h>
#include <QtGui/qabstracttextdocumentlayout.h>
#include <QtGui/qtouchdevice.h>
#include <QTextLayout>
#include <QAbstractTextDocumentLayout>
#include <QtGui/qpixmapcache.h>
#include <QtGui/qtexttable.h>
#include <QtGui/qtextcursor.h>
#include <QtGui/qrawfont.h>
#include <QtGui/qopenglvertexarrayobject.h>
#include <QtGui/qmatrix4x4.h>
#include <QtGui/qpagesize.h>
#include <QtGui/qpaintdevicewindow.h>
#include <QtGui/qimage.h>
#include <QtGui/qtextlist.h>
#include <QtGui/qmatrix.h>
#include <QtGui/qwindow.h>
#include <QtGui/qstatictext.h>
#include <QtGui/qpicture.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qtextobject.h>
#include <QtGui/qvector3d.h>
#include <QtGui/qcolorspace.h>
#include <QtGui/qpixelformat.h>
#include <QtGui/qfont.h>
#include <QtGui/qfontmetrics.h>
#include <QtGui/qimagewriter.h>
#include <QtGui/qregion.h>
#include <QtGui/qevent.h>
#include <QtGui/qpixmap.h>
#include <QtGui/qopenglfunctions.h>
#include <QtGui/qaccessible.h>
#include <QtGui/qopengldebug.h>
#include <QtGui/qtransform.h>
#include <QtGui/qsurfaceformat.h>
#include <QtGui/qimagereader.h>
#include <QtGui/qtextdocument.h>
#include <QtGui/qbrush.h>
#include <QtGui/qcursor.h>
#include <QtGui/qpainter.h>
#include <QtGui/qsurface.h>
#include <QtGui/qquaternion.h>
#include <QtGui/qiconengine.h>
#include <QtGui/qtextdocumentwriter.h>
#include <QtGui/qguiapplication.h>
#include <QtGui/qpagedpaintdevice.h>
#include <QtGui/qopenglversionfunctions.h>
#include <QPainter>
#include <QtGui/qbackingstore.h>
#include <QtGui/qsyntaxhighlighter.h>
#include <QtGui/qinputmethod.h>
#include <QtGui/qaccessibleobject.h>
#include <QtGui/qpainterpath.h>
#include <QtGui/qbitmap.h>
#include <QtGui/qdrag.h>
#include <QtGui/qopenglcontext.h>
#include <qpytextobject.h>
#include <QtGui/qtextoption.h>
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
    SBK_QABSTRACTOPENGLFUNCTIONS_IDX                         = 0,
    SBK_QABSTRACTTEXTDOCUMENTLAYOUT_IDX                      = 1,
    SBK_QABSTRACTTEXTDOCUMENTLAYOUT_PAINTCONTEXT_IDX         = 2,
    SBK_QABSTRACTTEXTDOCUMENTLAYOUT_SELECTION_IDX            = 3,
    SBK_QACCESSIBLE_EVENT_IDX                                = 5,
    SBK_QACCESSIBLE_ROLE_IDX                                 = 8,
    SBK_QACCESSIBLE_TEXT_IDX                                 = 10,
    SBK_QACCESSIBLE_RELATIONFLAG_IDX                         = 7,
    SBK_QFLAGS_QACCESSIBLE_RELATIONFLAG_IDX                  = 59,
    SBK_QACCESSIBLE_INTERFACETYPE_IDX                        = 6,
    SBK_QACCESSIBLE_TEXTBOUNDARYTYPE_IDX                     = 11,
    SBK_QACCESSIBLE_IDX                                      = 4,
    SBK_QACCESSIBLE_STATE_IDX                                = 9,
    SBK_QACCESSIBLEEDITABLETEXTINTERFACE_IDX                 = 12,
    SBK_QACCESSIBLEEVENT_IDX                                 = 13,
    SBK_QACCESSIBLEINTERFACE_IDX                             = 14,
    SBK_QACCESSIBLEOBJECT_IDX                                = 15,
    SBK_QACCESSIBLESTATECHANGEEVENT_IDX                      = 16,
    SBK_QACCESSIBLETABLECELLINTERFACE_IDX                    = 17,
    SBK_QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_IDX = 19,
    SBK_QACCESSIBLETABLEMODELCHANGEEVENT_IDX                 = 18,
    SBK_QACCESSIBLETEXTCURSOREVENT_IDX                       = 20,
    SBK_QACCESSIBLETEXTINSERTEVENT_IDX                       = 21,
    SBK_QACCESSIBLETEXTINTERFACE_IDX                         = 22,
    SBK_QACCESSIBLETEXTREMOVEEVENT_IDX                       = 23,
    SBK_QACCESSIBLETEXTSELECTIONEVENT_IDX                    = 24,
    SBK_QACCESSIBLETEXTUPDATEEVENT_IDX                       = 25,
    SBK_QACCESSIBLEVALUECHANGEEVENT_IDX                      = 26,
    SBK_QACCESSIBLEVALUEINTERFACE_IDX                        = 27,
    SBK_QACTIONEVENT_IDX                                     = 28,
    SBK_QBACKINGSTORE_IDX                                    = 29,
    SBK_QBITMAP_IDX                                          = 30,
    SBK_QBRUSH_IDX                                           = 31,
    SBK_QCLIPBOARD_MODE_IDX                                  = 33,
    SBK_QCLIPBOARD_IDX                                       = 32,
    SBK_QCLOSEEVENT_IDX                                      = 34,
    SBK_QCOLOR_SPEC_IDX                                      = 37,
    SBK_QCOLOR_NAMEFORMAT_IDX                                = 36,
    SBK_QCOLOR_IDX                                           = 35,
    SBK_QtGuiQCOLORCONSTANTS_IDX                             = 38,
    SBK_QtGuiQCOLORCONSTANTS_SVG_IDX                         = 39,
    SBK_QCOLORSPACE_NAMEDCOLORSPACE_IDX                      = 41,
    SBK_QCOLORSPACE_PRIMARIES_IDX                            = 42,
    SBK_QCOLORSPACE_TRANSFERFUNCTION_IDX                     = 43,
    SBK_QCOLORSPACE_IDX                                      = 40,
    SBK_QCONICALGRADIENT_IDX                                 = 44,
    SBK_QCONTEXTMENUEVENT_REASON_IDX                         = 46,
    SBK_QCONTEXTMENUEVENT_IDX                                = 45,
    SBK_QCURSOR_IDX                                          = 47,
    SBK_QDESKTOPSERVICES_IDX                                 = 48,
    SBK_QDOUBLEVALIDATOR_NOTATION_IDX                        = 50,
    SBK_QDOUBLEVALIDATOR_IDX                                 = 49,
    SBK_QDRAG_IDX                                            = 51,
    SBK_QDRAGENTEREVENT_IDX                                  = 52,
    SBK_QDRAGLEAVEEVENT_IDX                                  = 53,
    SBK_QDRAGMOVEEVENT_IDX                                   = 54,
    SBK_QDROPEVENT_IDX                                       = 55,
    SBK_QENTEREVENT_IDX                                      = 56,
    SBK_QEXPOSEEVENT_IDX                                     = 57,
    SBK_QFILEOPENEVENT_IDX                                   = 58,
    SBK_QFOCUSEVENT_IDX                                      = 81,
    SBK_QFONT_STYLEHINT_IDX                                  = 87,
    SBK_QFONT_STYLESTRATEGY_IDX                              = 88,
    SBK_QFONT_HINTINGPREFERENCE_IDX                          = 379,
    SBK_QFONT_WEIGHT_IDX                                     = 89,
    SBK_QFONT_STYLE_IDX                                      = 86,
    SBK_QFONT_STRETCH_IDX                                    = 85,
    SBK_QFONT_CAPITALIZATION_IDX                             = 83,
    SBK_QFONT_SPACINGTYPE_IDX                                = 84,
    SBK_QFONT_IDX                                            = 82,
    SBK_QFONTDATABASE_WRITINGSYSTEM_IDX                      = 92,
    SBK_QFONTDATABASE_SYSTEMFONT_IDX                         = 91,
    SBK_QFONTDATABASE_IDX                                    = 90,
    SBK_QFONTINFO_IDX                                        = 93,
    SBK_QFONTMETRICS_IDX                                     = 94,
    SBK_QFONTMETRICSF_IDX                                    = 95,
    SBK_QGRADIENT_TYPE_IDX                                   = 101,
    SBK_QGRADIENT_SPREAD_IDX                                 = 100,
    SBK_QGRADIENT_COORDINATEMODE_IDX                         = 97,
    SBK_QGRADIENT_INTERPOLATIONMODE_IDX                      = 98,
    SBK_QGRADIENT_PRESET_IDX                                 = 99,
    SBK_QGRADIENT_IDX                                        = 96,
    SBK_QGUIAPPLICATION_IDX                                  = 102,
    SBK_QHELPEVENT_IDX                                       = 103,
    SBK_QHIDEEVENT_IDX                                       = 104,
    SBK_QHOVEREVENT_IDX                                      = 105,
    SBK_QICON_MODE_IDX                                       = 107,
    SBK_QICON_STATE_IDX                                      = 108,
    SBK_QICON_IDX                                            = 106,
    SBK_QICONDRAGEVENT_IDX                                   = 109,
    SBK_QICONENGINE_ICONENGINEHOOK_IDX                       = 112,
    SBK_QICONENGINE_IDX                                      = 110,
    SBK_QICONENGINE_AVAILABLESIZESARGUMENT_IDX               = 111,
    SBK_QIMAGE_INVERTMODE_IDX                                = 115,
    SBK_QIMAGE_FORMAT_IDX                                    = 114,
    SBK_QIMAGE_IDX                                           = 113,
    SBK_QIMAGEIOHANDLER_IMAGEOPTION_IDX                      = 117,
    SBK_QIMAGEIOHANDLER_TRANSFORMATION_IDX                   = 118,
    SBK_QFLAGS_QIMAGEIOHANDLER_TRANSFORMATION_IDX            = 60,
    SBK_QIMAGEIOHANDLER_IDX                                  = 116,
    SBK_QIMAGEREADER_IMAGEREADERERROR_IDX                    = 120,
    SBK_QIMAGEREADER_IDX                                     = 119,
    SBK_QIMAGEWRITER_IMAGEWRITERERROR_IDX                    = 122,
    SBK_QIMAGEWRITER_IDX                                     = 121,
    SBK_QINPUTEVENT_IDX                                      = 123,
    SBK_QINPUTMETHOD_ACTION_IDX                              = 125,
    SBK_QINPUTMETHOD_IDX                                     = 124,
    SBK_QINPUTMETHODEVENT_ATTRIBUTETYPE_IDX                  = 128,
    SBK_QINPUTMETHODEVENT_IDX                                = 126,
    SBK_QINPUTMETHODEVENT_ATTRIBUTE_IDX                      = 127,
    SBK_QINPUTMETHODQUERYEVENT_IDX                           = 129,
    SBK_QINTVALIDATOR_IDX                                    = 130,
    SBK_QKEYEVENT_IDX                                        = 131,
    SBK_QKEYSEQUENCE_STANDARDKEY_IDX                         = 135,
    SBK_QKEYSEQUENCE_SEQUENCEFORMAT_IDX                      = 133,
    SBK_QKEYSEQUENCE_SEQUENCEMATCH_IDX                       = 134,
    SBK_QKEYSEQUENCE_IDX                                     = 132,
    SBK_QLINEARGRADIENT_IDX                                  = 136,
    SBK_QMATRIX_IDX                                          = 137,
    SBK_QMATRIX2X2_IDX                                       = 138,
    SBK_QGENERICMATRIX_2_2_FLOAT_IDX                         = 138,
    SBK_QMATRIX2X3_IDX                                       = 139,
    SBK_QGENERICMATRIX_2_3_FLOAT_IDX                         = 139,
    SBK_QMATRIX2X4_IDX                                       = 140,
    SBK_QGENERICMATRIX_2_4_FLOAT_IDX                         = 140,
    SBK_QMATRIX3X2_IDX                                       = 141,
    SBK_QGENERICMATRIX_3_2_FLOAT_IDX                         = 141,
    SBK_QMATRIX3X3_IDX                                       = 142,
    SBK_QGENERICMATRIX_3_3_FLOAT_IDX                         = 142,
    SBK_QMATRIX3X4_IDX                                       = 143,
    SBK_QGENERICMATRIX_3_4_FLOAT_IDX                         = 143,
    SBK_QMATRIX4X2_IDX                                       = 144,
    SBK_QGENERICMATRIX_4_2_FLOAT_IDX                         = 144,
    SBK_QMATRIX4X3_IDX                                       = 145,
    SBK_QGENERICMATRIX_4_3_FLOAT_IDX                         = 145,
    SBK_QMATRIX4X4_IDX                                       = 146,
    SBK_QMOUSEEVENT_IDX                                      = 147,
    SBK_QMOVEEVENT_IDX                                       = 148,
    SBK_QMOVIE_MOVIESTATE_IDX                                = 151,
    SBK_QMOVIE_CACHEMODE_IDX                                 = 150,
    SBK_QMOVIE_IDX                                           = 149,
    SBK_QNATIVEGESTUREEVENT_IDX                              = 152,
    SBK_QOFFSCREENSURFACE_IDX                                = 153,
    SBK_QOPENGLBUFFER_TYPE_IDX                               = 157,
    SBK_QOPENGLBUFFER_USAGEPATTERN_IDX                       = 158,
    SBK_QOPENGLBUFFER_ACCESS_IDX                             = 155,
    SBK_QOPENGLBUFFER_RANGEACCESSFLAG_IDX                    = 156,
    SBK_QFLAGS_QOPENGLBUFFER_RANGEACCESSFLAG_IDX             = 61,
    SBK_QOPENGLBUFFER_IDX                                    = 154,
    SBK_QOPENGLCONTEXT_OPENGLMODULETYPE_IDX                  = 160,
    SBK_QOPENGLCONTEXT_IDX                                   = 159,
    SBK_QOPENGLCONTEXTGROUP_IDX                              = 161,
    SBK_QOPENGLDEBUGLOGGER_LOGGINGMODE_IDX                   = 163,
    SBK_QOPENGLDEBUGLOGGER_IDX                               = 162,
    SBK_QOPENGLDEBUGMESSAGE_SOURCE_IDX                       = 166,
    SBK_QFLAGS_QOPENGLDEBUGMESSAGE_SOURCE_IDX                = 63,
    SBK_QOPENGLDEBUGMESSAGE_TYPE_IDX                         = 167,
    SBK_QFLAGS_QOPENGLDEBUGMESSAGE_TYPE_IDX                  = 64,
    SBK_QOPENGLDEBUGMESSAGE_SEVERITY_IDX                     = 165,
    SBK_QFLAGS_QOPENGLDEBUGMESSAGE_SEVERITY_IDX              = 62,
    SBK_QOPENGLDEBUGMESSAGE_IDX                              = 164,
    SBK_QOPENGLEXTRAFUNCTIONS_IDX                            = 168,
    SBK_QOPENGLFRAMEBUFFEROBJECT_ATTACHMENT_IDX              = 170,
    SBK_QOPENGLFRAMEBUFFEROBJECT_FRAMEBUFFERRESTOREPOLICY_IDX = 171,
    SBK_QOPENGLFRAMEBUFFEROBJECT_IDX                         = 169,
    SBK_QOPENGLFRAMEBUFFEROBJECTFORMAT_IDX                   = 172,
    SBK_QOPENGLFUNCTIONS_OPENGLFEATURE_IDX                   = 174,
    SBK_QFLAGS_QOPENGLFUNCTIONS_OPENGLFEATURE_IDX            = 65,
    SBK_QOPENGLFUNCTIONS_IDX                                 = 173,
    SBK_QOPENGLPIXELTRANSFEROPTIONS_IDX                      = 175,
    SBK_QOPENGLSHADER_SHADERTYPEBIT_IDX                      = 177,
    SBK_QFLAGS_QOPENGLSHADER_SHADERTYPEBIT_IDX               = 66,
    SBK_QOPENGLSHADER_IDX                                    = 176,
    SBK_QOPENGLSHADERPROGRAM_IDX                             = 178,
    SBK_QOPENGLTEXTURE_TARGET_IDX                            = 193,
    SBK_QOPENGLTEXTURE_BINDINGTARGET_IDX                     = 180,
    SBK_QOPENGLTEXTURE_MIPMAPGENERATION_IDX                  = 188,
    SBK_QOPENGLTEXTURE_TEXTUREUNITRESET_IDX                  = 196,
    SBK_QOPENGLTEXTURE_TEXTUREFORMAT_IDX                     = 194,
    SBK_QOPENGLTEXTURE_TEXTUREFORMATCLASS_IDX                = 195,
    SBK_QOPENGLTEXTURE_CUBEMAPFACE_IDX                       = 184,
    SBK_QOPENGLTEXTURE_PIXELFORMAT_IDX                       = 189,
    SBK_QOPENGLTEXTURE_PIXELTYPE_IDX                         = 190,
    SBK_QOPENGLTEXTURE_SWIZZLECOMPONENT_IDX                  = 191,
    SBK_QOPENGLTEXTURE_SWIZZLEVALUE_IDX                      = 192,
    SBK_QOPENGLTEXTURE_WRAPMODE_IDX                          = 197,
    SBK_QOPENGLTEXTURE_COORDINATEDIRECTION_IDX               = 183,
    SBK_QOPENGLTEXTURE_FEATURE_IDX                           = 186,
    SBK_QFLAGS_QOPENGLTEXTURE_FEATURE_IDX                    = 67,
    SBK_QOPENGLTEXTURE_DEPTHSTENCILMODE_IDX                  = 185,
    SBK_QOPENGLTEXTURE_COMPARISONFUNCTION_IDX                = 181,
    SBK_QOPENGLTEXTURE_COMPARISONMODE_IDX                    = 182,
    SBK_QOPENGLTEXTURE_FILTER_IDX                            = 187,
    SBK_QOPENGLTEXTURE_IDX                                   = 179,
    SBK_QOPENGLTEXTUREBLITTER_ORIGIN_IDX                     = 199,
    SBK_QOPENGLTEXTUREBLITTER_IDX                            = 198,
    SBK_QOPENGLTIMEMONITOR_IDX                               = 200,
    SBK_QOPENGLTIMERQUERY_IDX                                = 201,
    SBK_QOPENGLVERSIONPROFILE_IDX                            = 202,
    SBK_QOPENGLVERTEXARRAYOBJECT_IDX                         = 203,
    SBK_QOPENGLVERTEXARRAYOBJECT_BINDER_IDX                  = 204,
    SBK_QOPENGLWINDOW_UPDATEBEHAVIOR_IDX                     = 206,
    SBK_QOPENGLWINDOW_IDX                                    = 205,
    SBK_QPAGELAYOUT_UNIT_IDX                                 = 210,
    SBK_QPAGELAYOUT_ORIENTATION_IDX                          = 209,
    SBK_QPAGELAYOUT_MODE_IDX                                 = 208,
    SBK_QPAGELAYOUT_IDX                                      = 207,
    SBK_QPAGESIZE_PAGESIZEID_IDX                             = 212,
    SBK_QPAGESIZE_UNIT_IDX                                   = 214,
    SBK_QPAGESIZE_SIZEMATCHPOLICY_IDX                        = 213,
    SBK_QPAGESIZE_IDX                                        = 211,
    SBK_QPAGEDPAINTDEVICE_PAGESIZE_IDX                       = 217,
    SBK_QPAGEDPAINTDEVICE_PDFVERSION_IDX                     = 218,
    SBK_QPAGEDPAINTDEVICE_IDX                                = 215,
    SBK_QPAGEDPAINTDEVICE_MARGINS_IDX                        = 216,
    SBK_QPAINTDEVICE_PAINTDEVICEMETRIC_IDX                   = 220,
    SBK_QPAINTDEVICE_IDX                                     = 219,
    SBK_QPAINTDEVICEWINDOW_IDX                               = 221,
    SBK_QPAINTENGINE_PAINTENGINEFEATURE_IDX                  = 224,
    SBK_QFLAGS_QPAINTENGINE_PAINTENGINEFEATURE_IDX           = 69,
    SBK_QPAINTENGINE_DIRTYFLAG_IDX                           = 223,
    SBK_QFLAGS_QPAINTENGINE_DIRTYFLAG_IDX                    = 68,
    SBK_QPAINTENGINE_POLYGONDRAWMODE_IDX                     = 225,
    SBK_QPAINTENGINE_TYPE_IDX                                = 226,
    SBK_QPAINTENGINE_IDX                                     = 222,
    SBK_QPAINTENGINESTATE_IDX                                = 227,
    SBK_QPAINTEVENT_IDX                                      = 228,
    SBK_QPAINTER_RENDERHINT_IDX                              = 233,
    SBK_QFLAGS_QPAINTER_RENDERHINT_IDX                       = 71,
    SBK_QPAINTER_PIXMAPFRAGMENTHINT_IDX                      = 232,
    SBK_QFLAGS_QPAINTER_PIXMAPFRAGMENTHINT_IDX               = 70,
    SBK_QPAINTER_COMPOSITIONMODE_IDX                         = 230,
    SBK_QPAINTER_IDX                                         = 229,
    SBK_QPAINTER_PIXMAPFRAGMENT_IDX                          = 231,
    SBK_QPAINTERPATH_ELEMENTTYPE_IDX                         = 236,
    SBK_QPAINTERPATH_IDX                                     = 234,
    SBK_QPAINTERPATH_ELEMENT_IDX                             = 235,
    SBK_QPAINTERPATHSTROKER_IDX                              = 237,
    SBK_QPALETTE_COLORGROUP_IDX                              = 239,
    SBK_QPALETTE_COLORROLE_IDX                               = 240,
    SBK_QPALETTE_IDX                                         = 238,
    SBK_QPDFWRITER_IDX                                       = 241,
    SBK_QPEN_IDX                                             = 242,
    SBK_QPICTURE_IDX                                         = 243,
    SBK_QPICTUREIO_IDX                                       = 244,
    SBK_QPIXELFORMAT_COLORMODEL_IDX                          = 250,
    SBK_QPIXELFORMAT_ALPHAUSAGE_IDX                          = 248,
    SBK_QPIXELFORMAT_ALPHAPOSITION_IDX                       = 246,
    SBK_QPIXELFORMAT_ALPHAPREMULTIPLIED_IDX                  = 247,
    SBK_QPIXELFORMAT_TYPEINTERPRETATION_IDX                  = 251,
    SBK_QPIXELFORMAT_YUVLAYOUT_IDX                           = 252,
    SBK_QPIXELFORMAT_BYTEORDER_IDX                           = 249,
    SBK_QPIXELFORMAT_IDX                                     = 245,
    SBK_QPIXMAP_IDX                                          = 253,
    SBK_QPIXMAPCACHE_IDX                                     = 254,
    SBK_QPIXMAPCACHE_KEY_IDX                                 = 255,
    SBK_QPOINTINGDEVICEUNIQUEID_IDX                          = 256,
    SBK_QPOLYGON_IDX                                         = 257,
    SBK_QVECTOR_QPOINT_IDX                                   = 257,
    SBK_QPOLYGONF_IDX                                        = 258,
    SBK_QVECTOR_QPOINTF_IDX                                  = 258,
    SBK_QPYTEXTOBJECT_IDX                                    = 259,
    SBK_QQUATERNION_IDX                                      = 260,
    SBK_QRADIALGRADIENT_IDX                                  = 261,
    SBK_QRASTERWINDOW_IDX                                    = 262,
    SBK_QRAWFONT_ANTIALIASINGTYPE_IDX                        = 264,
    SBK_QRAWFONT_LAYOUTFLAG_IDX                              = 265,
    SBK_QFLAGS_QRAWFONT_LAYOUTFLAG_IDX                       = 72,
    SBK_QRAWFONT_IDX                                         = 263,
    SBK_QREGEXPVALIDATOR_IDX                                 = 266,
    SBK_QREGION_REGIONTYPE_IDX                               = 268,
    SBK_QREGION_IDX                                          = 267,
    SBK_QREGULAREXPRESSIONVALIDATOR_IDX                      = 269,
    SBK_QRESIZEEVENT_IDX                                     = 270,
    SBK_QSCREEN_IDX                                          = 271,
    SBK_QSCROLLEVENT_SCROLLSTATE_IDX                         = 273,
    SBK_QSCROLLEVENT_IDX                                     = 272,
    SBK_QSCROLLPREPAREEVENT_IDX                              = 274,
    SBK_QSESSIONMANAGER_RESTARTHINT_IDX                      = 276,
    SBK_QSESSIONMANAGER_IDX                                  = 275,
    SBK_QSHORTCUTEVENT_IDX                                   = 277,
    SBK_QSHOWEVENT_IDX                                       = 278,
    SBK_QSTANDARDITEM_ITEMTYPE_IDX                           = 280,
    SBK_QSTANDARDITEM_IDX                                    = 279,
    SBK_QSTANDARDITEMMODEL_IDX                               = 281,
    SBK_QSTATICTEXT_PERFORMANCEHINT_IDX                      = 283,
    SBK_QSTATICTEXT_IDX                                      = 282,
    SBK_QSTATUSTIPEVENT_IDX                                  = 284,
    SBK_QSTYLEHINTS_IDX                                      = 285,
    SBK_QSURFACE_SURFACECLASS_IDX                            = 287,
    SBK_QSURFACE_SURFACETYPE_IDX                             = 288,
    SBK_QSURFACE_IDX                                         = 286,
    SBK_QSURFACEFORMAT_FORMATOPTION_IDX                      = 291,
    SBK_QFLAGS_QSURFACEFORMAT_FORMATOPTION_IDX               = 73,
    SBK_QSURFACEFORMAT_SWAPBEHAVIOR_IDX                      = 294,
    SBK_QSURFACEFORMAT_RENDERABLETYPE_IDX                    = 293,
    SBK_QSURFACEFORMAT_OPENGLCONTEXTPROFILE_IDX              = 292,
    SBK_QSURFACEFORMAT_COLORSPACE_IDX                        = 290,
    SBK_QSURFACEFORMAT_IDX                                   = 289,
    SBK_QSYNTAXHIGHLIGHTER_IDX                               = 295,
    SBK_QTABLETEVENT_TABLETDEVICE_IDX                        = 298,
    SBK_QTABLETEVENT_POINTERTYPE_IDX                         = 297,
    SBK_QTABLETEVENT_IDX                                     = 296,
    SBK_QTEXTBLOCK_IDX                                       = 299,
    SBK_QTEXTBLOCK_ITERATOR_IDX                              = 300,
    SBK_QTEXTBLOCKFORMAT_LINEHEIGHTTYPES_IDX                 = 380,
    SBK_QTEXTBLOCKFORMAT_MARKERTYPE_IDX                      = 302,
    SBK_QTEXTBLOCKFORMAT_IDX                                 = 301,
    SBK_QTEXTBLOCKGROUP_IDX                                  = 303,
    SBK_QTEXTBLOCKUSERDATA_IDX                               = 304,
    SBK_QTEXTCHARFORMAT_VERTICALALIGNMENT_IDX                = 308,
    SBK_QTEXTCHARFORMAT_UNDERLINESTYLE_IDX                   = 307,
    SBK_QTEXTCHARFORMAT_FONTPROPERTIESINHERITANCEBEHAVIOR_IDX = 306,
    SBK_QTEXTCHARFORMAT_IDX                                  = 305,
    SBK_QTEXTCURSOR_MOVEMODE_IDX                             = 310,
    SBK_QTEXTCURSOR_MOVEOPERATION_IDX                        = 311,
    SBK_QTEXTCURSOR_SELECTIONTYPE_IDX                        = 312,
    SBK_QTEXTCURSOR_IDX                                      = 309,
    SBK_QTEXTDOCUMENT_METAINFORMATION_IDX                    = 316,
    SBK_QTEXTDOCUMENT_MARKDOWNFEATURE_IDX                    = 315,
    SBK_QFLAGS_QTEXTDOCUMENT_MARKDOWNFEATURE_IDX             = 75,
    SBK_QTEXTDOCUMENT_FINDFLAG_IDX                           = 314,
    SBK_QFLAGS_QTEXTDOCUMENT_FINDFLAG_IDX                    = 74,
    SBK_QTEXTDOCUMENT_RESOURCETYPE_IDX                       = 317,
    SBK_QTEXTDOCUMENT_STACKS_IDX                             = 318,
    SBK_QTEXTDOCUMENT_IDX                                    = 313,
    SBK_QTEXTDOCUMENTFRAGMENT_IDX                            = 319,
    SBK_QTEXTDOCUMENTWRITER_IDX                              = 320,
    SBK_QTEXTFORMAT_FORMATTYPE_IDX                           = 322,
    SBK_QTEXTFORMAT_PROPERTY_IDX                             = 325,
    SBK_QTEXTFORMAT_OBJECTTYPES_IDX                          = 323,
    SBK_QTEXTFORMAT_PAGEBREAKFLAG_IDX                        = 324,
    SBK_QFLAGS_QTEXTFORMAT_PAGEBREAKFLAG_IDX                 = 76,
    SBK_QTEXTFORMAT_IDX                                      = 321,
    SBK_QTEXTFRAGMENT_IDX                                    = 326,
    SBK_QTEXTFRAME_IDX                                       = 327,
    SBK_QTEXTFRAME_ITERATOR_IDX                              = 328,
    SBK_QTEXTFRAMEFORMAT_POSITION_IDX                        = 331,
    SBK_QTEXTFRAMEFORMAT_BORDERSTYLE_IDX                     = 330,
    SBK_QTEXTFRAMEFORMAT_IDX                                 = 329,
    SBK_QTEXTIMAGEFORMAT_IDX                                 = 332,
    SBK_QTEXTINLINEOBJECT_IDX                                = 333,
    SBK_QTEXTITEM_RENDERFLAG_IDX                             = 335,
    SBK_QFLAGS_QTEXTITEM_RENDERFLAG_IDX                      = 77,
    SBK_QTEXTITEM_IDX                                        = 334,
    SBK_QTEXTLAYOUT_CURSORMODE_IDX                           = 337,
    SBK_QTEXTLAYOUT_IDX                                      = 336,
    SBK_QTEXTLAYOUT_FORMATRANGE_IDX                          = 338,
    SBK_QTEXTLENGTH_TYPE_IDX                                 = 340,
    SBK_QTEXTLENGTH_IDX                                      = 339,
    SBK_QTEXTLINE_EDGE_IDX                                   = 343,
    SBK_QTEXTLINE_CURSORPOSITION_IDX                         = 342,
    SBK_QTEXTLINE_IDX                                        = 341,
    SBK_QTEXTLIST_IDX                                        = 344,
    SBK_QTEXTLISTFORMAT_STYLE_IDX                            = 346,
    SBK_QTEXTLISTFORMAT_IDX                                  = 345,
    SBK_QTEXTOBJECT_IDX                                      = 347,
    SBK_QTEXTOBJECTINTERFACE_IDX                             = 348,
    SBK_QTEXTOPTION_TABTYPE_IDX                              = 352,
    SBK_QTEXTOPTION_WRAPMODE_IDX                             = 353,
    SBK_QTEXTOPTION_FLAG_IDX                                 = 350,
    SBK_QFLAGS_QTEXTOPTION_FLAG_IDX                          = 78,
    SBK_QTEXTOPTION_IDX                                      = 349,
    SBK_QTEXTOPTION_TAB_IDX                                  = 351,
    SBK_QTEXTTABLE_IDX                                       = 354,
    SBK_QTEXTTABLECELL_IDX                                   = 355,
    SBK_QTEXTTABLECELLFORMAT_IDX                             = 356,
    SBK_QTEXTTABLEFORMAT_IDX                                 = 357,
    SBK_QTOOLBARCHANGEEVENT_IDX                              = 358,
    SBK_QTOUCHDEVICE_DEVICETYPE_IDX                          = 361,
    SBK_QTOUCHDEVICE_CAPABILITYFLAG_IDX                      = 360,
    SBK_QFLAGS_QTOUCHDEVICE_CAPABILITYFLAG_IDX               = 79,
    SBK_QTOUCHDEVICE_IDX                                     = 359,
    SBK_QTOUCHEVENT_IDX                                      = 362,
    SBK_QTOUCHEVENT_TOUCHPOINT_INFOFLAG_IDX                  = 364,
    SBK_QFLAGS_QTOUCHEVENT_TOUCHPOINT_INFOFLAG_IDX           = 80,
    SBK_QTOUCHEVENT_TOUCHPOINT_IDX                           = 363,
    SBK_QTRANSFORM_TRANSFORMATIONTYPE_IDX                    = 366,
    SBK_QTRANSFORM_IDX                                       = 365,
    SBK_QVALIDATOR_STATE_IDX                                 = 368,
    SBK_QVALIDATOR_IDX                                       = 367,
    SBK_QVECTOR2D_IDX                                        = 369,
    SBK_QVECTOR3D_IDX                                        = 370,
    SBK_QVECTOR4D_IDX                                        = 371,
    SBK_QWHATSTHISCLICKEDEVENT_IDX                           = 372,
    SBK_QWHEELEVENT_IDX                                      = 373,
    SBK_QWINDOW_VISIBILITY_IDX                               = 376,
    SBK_QWINDOW_ANCESTORMODE_IDX                             = 375,
    SBK_QWINDOW_IDX                                          = 374,
    SBK_QWINDOWSTATECHANGEEVENT_IDX                          = 377,
    SBK_QtGuiQT_IDX                                          = 378,
    SBK_QtGui_IDX_COUNT                                      = 381
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtGuiTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtGuiModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtGuiTypeConverters;

// Converter indices
enum : int {
    SBK_WID_IDX                                              = 0,
    SBK_QTGUI_QLIST_QSIZE_IDX                                = 1, // QList<QSize >
    SBK_QTGUI_QLIST_QOBJECTPTR_IDX                           = 2, // const QList<QObject* > &
    SBK_QTGUI_QLIST_QBYTEARRAY_IDX                           = 3, // QList<QByteArray >
    SBK_QTGUI_QPAIR_INT_INT_IDX                              = 4, // QPair<int,int >
    SBK_QTGUI_QPAIR_QACCESSIBLEINTERFACEPTR_QFLAGS_QACCESSIBLE_RELATIONFLAG_IDX = 5, // QPair<QAccessibleInterface*,QFlags<QAccessible::RelationFlag> >
    SBK_QTGUI_QVECTOR_QPAIR_QACCESSIBLEINTERFACEPTR_QFLAGS_QACCESSIBLE_RELATIONFLAG_IDX = 6, // QVector<QPair< QAccessibleInterface*,QFlags<QAccessible::RelationFlag> > >
    SBK_QTGUI_QLIST_QACCESSIBLEINTERFACEPTR_IDX              = 7, // QList<QAccessibleInterface* >
    SBK_QTGUI_QPAIR_QREAL_QCOLOR_IDX                         = 8, // QPair<qreal,QColor >
    SBK_QTGUI_QVECTOR_QPAIR_QREAL_QCOLOR_IDX                 = 9, // const QVector<QPair< qreal,QColor > > &
    SBK_QTGUI_QLIST_INT_IDX                                  = 10, // QList<int >
    SBK_QTGUI_QLIST_QFONTDATABASE_WRITINGSYSTEM_IDX          = 11, // QList<QFontDatabase::WritingSystem >
    SBK_QTGUI_QLIST_QWINDOWPTR_IDX                           = 12, // QList<QWindow* >
    SBK_QTGUI_QLIST_QSCREENPTR_IDX                           = 13, // QList<QScreen* >
    SBK_QTGUI_QVECTOR_UNSIGNEDINT_IDX                        = 14, // QVector<unsigned int >
    SBK_QTGUI_QLIST_QINPUTMETHODEVENT_ATTRIBUTE_IDX          = 15, // const QList<QInputMethodEvent::Attribute > &
    SBK_QTGUI_QLIST_QKEYSEQUENCE_IDX                         = 16, // QList<QKeySequence >
    SBK_QTGUI_QLIST_FLOAT_IDX                                = 17, // QList<float >
    SBK_QTGUI_QSET_QBYTEARRAY_IDX                            = 18, // QSet<QByteArray >
    SBK_QTGUI_QLIST_QOPENGLCONTEXTPTR_IDX                    = 19, // QList<QOpenGLContext* >
    SBK_QTGUI_QLIST_QOPENGLDEBUGMESSAGE_IDX                  = 20, // QList<QOpenGLDebugMessage >
    SBK_QTGUI_QVECTOR_QSIZE_IDX                              = 21, // QVector<QSize >
    SBK_QTGUI_QVECTOR_FLOAT_IDX                              = 22, // QVector<float >
    SBK_QTGUI_QLIST_QOPENGLSHADERPTR_IDX                     = 23, // QList<QOpenGLShader* >
    SBK_QTGUI_QPAIR_FLOAT_FLOAT_IDX                          = 24, // QPair<float,float >
    SBK_QTGUI_QPAIR_QOPENGLTEXTURE_FILTER_QOPENGLTEXTURE_FILTER_IDX = 25, // QPair<QOpenGLTexture::Filter,QOpenGLTexture::Filter >
    SBK_QTGUI_QVECTOR_UNSIGNEDLONGLONG_IDX                   = 26, // QVector<unsigned long long >
    SBK_QTGUI_QVECTOR_QPOINT_IDX                             = 27, // QVector<QPoint >
    SBK_QTGUI_QVECTOR_QPOINTF_IDX                            = 28, // QVector<QPointF >
    SBK_QTGUI_QVECTOR_QLINE_IDX                              = 29, // const QVector<QLine > &
    SBK_QTGUI_QVECTOR_QLINEF_IDX                             = 30, // const QVector<QLineF > &
    SBK_QTGUI_QVECTOR_QRECT_IDX                              = 31, // const QVector<QRect > &
    SBK_QTGUI_QVECTOR_QRECTF_IDX                             = 32, // const QVector<QRectF > &
    SBK_QTGUI_QLIST_QPOLYGONF_IDX                            = 33, // QList<QPolygonF >
    SBK_QTGUI_QVECTOR_QREAL_IDX                              = 34, // QVector<qreal >
    SBK_QTGUI_QLIST_QPOINT_IDX                               = 35, // const QList<QPoint > &
    SBK_QTGUI_QLIST_QPOINTF_IDX                              = 36, // const QList<QPointF > &
    SBK_QTGUI_QVECTOR_QUINT32_IDX                            = 37, // const QVector<quint32 > &
    SBK_QTGUI_QLIST_QSTANDARDITEMPTR_IDX                     = 38, // const QList<QStandardItem* > &
    SBK_QTGUI_QVECTOR_INT_IDX                                = 39, // const QVector<int > &
    SBK_QTGUI_QHASH_INT_QBYTEARRAY_IDX                       = 40, // const QHash<int,QByteArray > &
    SBK_QTGUI_QMAP_INT_QVARIANT_IDX                          = 41, // QMap<int,QVariant >
    SBK_QTGUI_QLIST_QPERSISTENTMODELINDEX_IDX                = 42, // const QList<QPersistentModelIndex > &
    SBK_QTGUI_QVECTOR_QTEXTLAYOUT_FORMATRANGE_IDX            = 43, // QVector<QTextLayout::FormatRange >
    SBK_QTGUI_QVECTOR_QTEXTLENGTH_IDX                        = 44, // QVector<QTextLength >
    SBK_QTGUI_QLIST_QTEXTOPTION_TAB_IDX                      = 45, // const QList<QTextOption::Tab > &
    SBK_QTGUI_QLIST_QTEXTBLOCK_IDX                           = 46, // QList<QTextBlock >
    SBK_QTGUI_QVECTOR_QTEXTFORMAT_IDX                        = 47, // QVector<QTextFormat >
    SBK_QTGUI_QLIST_QTEXTFRAMEPTR_IDX                        = 48, // QList<QTextFrame* >
    SBK_QTGUI_QLIST_QTEXTLAYOUT_FORMATRANGE_IDX              = 49, // QList<QTextLayout::FormatRange >
    SBK_QTGUI_QLIST_QREAL_IDX                                = 50, // const QList<qreal > &
    SBK_QTGUI_QLIST_CONSTQTOUCHDEVICEPTR_IDX                 = 51, // QList<const QTouchDevice* >
    SBK_QTGUI_QLIST_QTOUCHEVENT_TOUCHPOINT_IDX               = 52, // const QList<QTouchEvent::TouchPoint > &
    SBK_QTGUI_QLIST_QVARIANT_IDX                             = 53, // QList<QVariant >
    SBK_QTGUI_QLIST_QSTRING_IDX                              = 54, // QList<QString >
    SBK_QTGUI_QMAP_QSTRING_QVARIANT_IDX                      = 55, // QMap<QString,QVariant >
    SBK_QtGui_CONVERTERS_IDX_COUNT                           = 56
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QAbstractOpenGLFunctions >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QABSTRACTOPENGLFUNCTIONS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTextDocumentLayout >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QABSTRACTTEXTDOCUMENTLAYOUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTextDocumentLayout::PaintContext >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QABSTRACTTEXTDOCUMENTLAYOUT_PAINTCONTEXT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTextDocumentLayout::Selection >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QABSTRACTTEXTDOCUMENTLAYOUT_SELECTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible::Event >() { return SbkPySide2_QtGuiTypes[SBK_QACCESSIBLE_EVENT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible::Role >() { return SbkPySide2_QtGuiTypes[SBK_QACCESSIBLE_ROLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible::Text >() { return SbkPySide2_QtGuiTypes[SBK_QACCESSIBLE_TEXT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible::RelationFlag >() { return SbkPySide2_QtGuiTypes[SBK_QACCESSIBLE_RELATIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QAccessible::RelationFlag> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QACCESSIBLE_RELATIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible::InterfaceType >() { return SbkPySide2_QtGuiTypes[SBK_QACCESSIBLE_INTERFACETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible::TextBoundaryType >() { return SbkPySide2_QtGuiTypes[SBK_QACCESSIBLE_TEXTBOUNDARYTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessible >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible::State >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLE_STATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleEditableTextInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLEEDITABLETEXTINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLEINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLEOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleStateChangeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLESTATECHANGEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTableCellInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLETABLECELLINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTableModelChangeEvent::ModelChangeType >() { return SbkPySide2_QtGuiTypes[SBK_QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAccessibleTableModelChangeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLETABLEMODELCHANGEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextCursorEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLETEXTCURSOREVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextInsertEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLETEXTINSERTEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLETEXTINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextRemoveEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLETEXTREMOVEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextSelectionEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLETEXTSELECTIONEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextUpdateEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLETEXTUPDATEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleValueChangeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLEVALUECHANGEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleValueInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACCESSIBLEVALUEINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QActionEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QACTIONEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBackingStore >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QBACKINGSTORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBitmap >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QBITMAP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBrush >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QBRUSH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QClipboard::Mode >() { return SbkPySide2_QtGuiTypes[SBK_QCLIPBOARD_MODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QClipboard >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QCLIPBOARD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCloseEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QCLOSEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColor::Spec >() { return SbkPySide2_QtGuiTypes[SBK_QCOLOR_SPEC_IDX]; }
template<> inline PyTypeObject *SbkType< ::QColor::NameFormat >() { return SbkPySide2_QtGuiTypes[SBK_QCOLOR_NAMEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QColor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QCOLOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColorSpace::NamedColorSpace >() { return SbkPySide2_QtGuiTypes[SBK_QCOLORSPACE_NAMEDCOLORSPACE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QColorSpace::Primaries >() { return SbkPySide2_QtGuiTypes[SBK_QCOLORSPACE_PRIMARIES_IDX]; }
template<> inline PyTypeObject *SbkType< ::QColorSpace::TransferFunction >() { return SbkPySide2_QtGuiTypes[SBK_QCOLORSPACE_TRANSFERFUNCTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QColorSpace >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QCOLORSPACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QConicalGradient >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QCONICALGRADIENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QContextMenuEvent::Reason >() { return SbkPySide2_QtGuiTypes[SBK_QCONTEXTMENUEVENT_REASON_IDX]; }
template<> inline PyTypeObject *SbkType< ::QContextMenuEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QCONTEXTMENUEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCursor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QCURSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesktopServices >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QDESKTOPSERVICES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDoubleValidator::Notation >() { return SbkPySide2_QtGuiTypes[SBK_QDOUBLEVALIDATOR_NOTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDoubleValidator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QDOUBLEVALIDATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDrag >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QDRAG_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDragEnterEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QDRAGENTEREVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDragLeaveEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QDRAGLEAVEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDragMoveEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QDRAGMOVEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDropEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QDROPEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QEnterEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QENTEREVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QExposeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QEXPOSEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFileOpenEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QFILEOPENEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFocusEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QFOCUSEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont::StyleHint >() { return SbkPySide2_QtGuiTypes[SBK_QFONT_STYLEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::StyleStrategy >() { return SbkPySide2_QtGuiTypes[SBK_QFONT_STYLESTRATEGY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::HintingPreference >() { return SbkPySide2_QtGuiTypes[SBK_QFONT_HINTINGPREFERENCE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::Weight >() { return SbkPySide2_QtGuiTypes[SBK_QFONT_WEIGHT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::Style >() { return SbkPySide2_QtGuiTypes[SBK_QFONT_STYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::Stretch >() { return SbkPySide2_QtGuiTypes[SBK_QFONT_STRETCH_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::Capitalization >() { return SbkPySide2_QtGuiTypes[SBK_QFONT_CAPITALIZATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont::SpacingType >() { return SbkPySide2_QtGuiTypes[SBK_QFONT_SPACINGTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFont >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QFONT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontDatabase::WritingSystem >() { return SbkPySide2_QtGuiTypes[SBK_QFONTDATABASE_WRITINGSYSTEM_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFontDatabase::SystemFont >() { return SbkPySide2_QtGuiTypes[SBK_QFONTDATABASE_SYSTEMFONT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFontDatabase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QFONTDATABASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QFONTINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontMetrics >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QFONTMETRICS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontMetricsF >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QFONTMETRICSF_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGradient::Type >() { return SbkPySide2_QtGuiTypes[SBK_QGRADIENT_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGradient::Spread >() { return SbkPySide2_QtGuiTypes[SBK_QGRADIENT_SPREAD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGradient::CoordinateMode >() { return SbkPySide2_QtGuiTypes[SBK_QGRADIENT_COORDINATEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGradient::InterpolationMode >() { return SbkPySide2_QtGuiTypes[SBK_QGRADIENT_INTERPOLATIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGradient::Preset >() { return SbkPySide2_QtGuiTypes[SBK_QGRADIENT_PRESET_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGradient >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QGRADIENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGuiApplication >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QGUIAPPLICATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QHELPEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHideEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QHIDEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHoverEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QHOVEREVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIcon::Mode >() { return SbkPySide2_QtGuiTypes[SBK_QICON_MODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QIcon::State >() { return SbkPySide2_QtGuiTypes[SBK_QICON_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QIcon >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QICON_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIconDragEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QICONDRAGEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIconEngine::IconEngineHook >() { return SbkPySide2_QtGuiTypes[SBK_QICONENGINE_ICONENGINEHOOK_IDX]; }
template<> inline PyTypeObject *SbkType< ::QIconEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QICONENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIconEngine::AvailableSizesArgument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QICONENGINE_AVAILABLESIZESARGUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImage::InvertMode >() { return SbkPySide2_QtGuiTypes[SBK_QIMAGE_INVERTMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImage::Format >() { return SbkPySide2_QtGuiTypes[SBK_QIMAGE_FORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QIMAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageIOHandler::ImageOption >() { return SbkPySide2_QtGuiTypes[SBK_QIMAGEIOHANDLER_IMAGEOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImageIOHandler::Transformation >() { return SbkPySide2_QtGuiTypes[SBK_QIMAGEIOHANDLER_TRANSFORMATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QImageIOHandler::Transformation> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QIMAGEIOHANDLER_TRANSFORMATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImageIOHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QIMAGEIOHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageReader::ImageReaderError >() { return SbkPySide2_QtGuiTypes[SBK_QIMAGEREADER_IMAGEREADERERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImageReader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QIMAGEREADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageWriter::ImageWriterError >() { return SbkPySide2_QtGuiTypes[SBK_QIMAGEWRITER_IMAGEWRITERERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QImageWriter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QIMAGEWRITER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QINPUTEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethod::Action >() { return SbkPySide2_QtGuiTypes[SBK_QINPUTMETHOD_ACTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QInputMethod >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QINPUTMETHOD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethodEvent::AttributeType >() { return SbkPySide2_QtGuiTypes[SBK_QINPUTMETHODEVENT_ATTRIBUTETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QInputMethodEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QINPUTMETHODEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethodEvent::Attribute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QINPUTMETHODEVENT_ATTRIBUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethodQueryEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QINPUTMETHODQUERYEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIntValidator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QINTVALIDATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QKeyEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QKEYEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QKeySequence::StandardKey >() { return SbkPySide2_QtGuiTypes[SBK_QKEYSEQUENCE_STANDARDKEY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QKeySequence::SequenceFormat >() { return SbkPySide2_QtGuiTypes[SBK_QKEYSEQUENCE_SEQUENCEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QKeySequence::SequenceMatch >() { return SbkPySide2_QtGuiTypes[SBK_QKEYSEQUENCE_SEQUENCEMATCH_IDX]; }
template<> inline PyTypeObject *SbkType< ::QKeySequence >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QKEYSEQUENCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLinearGradient >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QLINEARGRADIENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMATRIX_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix2x2 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMATRIX2X2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix2x3 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMATRIX2X3_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix2x4 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMATRIX2X4_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix3x2 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMATRIX3X2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix3x3 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMATRIX3X3_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix3x4 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMATRIX3X4_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix4x2 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMATRIX4X2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix4x3 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMATRIX4X3_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix4x4 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMATRIX4X4_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMouseEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMOUSEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMoveEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMOVEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMovie::MovieState >() { return SbkPySide2_QtGuiTypes[SBK_QMOVIE_MOVIESTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QMovie::CacheMode >() { return SbkPySide2_QtGuiTypes[SBK_QMOVIE_CACHEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QMovie >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QMOVIE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNativeGestureEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QNATIVEGESTUREEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOffscreenSurface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOFFSCREENSURFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLBuffer::Type >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLBUFFER_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLBuffer::UsagePattern >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLBUFFER_USAGEPATTERN_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLBuffer::Access >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLBUFFER_ACCESS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLBuffer::RangeAccessFlag >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLBUFFER_RANGEACCESSFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QOpenGLBuffer::RangeAccessFlag> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QOPENGLBUFFER_RANGEACCESSFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLBuffer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLBUFFER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLContext::OpenGLModuleType >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLCONTEXT_OPENGLMODULETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLContext >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLCONTEXT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLContextGroup >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLCONTEXTGROUP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLDebugLogger::LoggingMode >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLDEBUGLOGGER_LOGGINGMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLDebugLogger >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLDEBUGLOGGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLDebugMessage::Source >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLDEBUGMESSAGE_SOURCE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QOpenGLDebugMessage::Source> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QOPENGLDEBUGMESSAGE_SOURCE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLDebugMessage::Type >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLDEBUGMESSAGE_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QOpenGLDebugMessage::Type> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QOPENGLDEBUGMESSAGE_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLDebugMessage::Severity >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLDEBUGMESSAGE_SEVERITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QOpenGLDebugMessage::Severity> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QOPENGLDEBUGMESSAGE_SEVERITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLDebugMessage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLDEBUGMESSAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLExtraFunctions >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLEXTRAFUNCTIONS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFramebufferObject::Attachment >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLFRAMEBUFFEROBJECT_ATTACHMENT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLFramebufferObject::FramebufferRestorePolicy >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLFRAMEBUFFEROBJECT_FRAMEBUFFERRESTOREPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLFramebufferObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLFRAMEBUFFEROBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFramebufferObjectFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLFRAMEBUFFEROBJECTFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions::OpenGLFeature >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLFUNCTIONS_OPENGLFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QOpenGLFunctions::OpenGLFeature> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QOPENGLFUNCTIONS_OPENGLFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLFUNCTIONS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLPixelTransferOptions >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLPIXELTRANSFEROPTIONS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLShader::ShaderTypeBit >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLSHADER_SHADERTYPEBIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QOpenGLShader::ShaderTypeBit> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QOPENGLSHADER_SHADERTYPEBIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLShader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLSHADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLShaderProgram >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLSHADERPROGRAM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::Target >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_TARGET_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::BindingTarget >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_BINDINGTARGET_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::MipMapGeneration >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_MIPMAPGENERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::TextureUnitReset >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_TEXTUREUNITRESET_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::TextureFormat >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_TEXTUREFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::TextureFormatClass >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_TEXTUREFORMATCLASS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::CubeMapFace >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_CUBEMAPFACE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::PixelFormat >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_PIXELFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::PixelType >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_PIXELTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::SwizzleComponent >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_SWIZZLECOMPONENT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::SwizzleValue >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_SWIZZLEVALUE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::WrapMode >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_WRAPMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::CoordinateDirection >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_COORDINATEDIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::Feature >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_FEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QOpenGLTexture::Feature> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QOPENGLTEXTURE_FEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::DepthStencilMode >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_DEPTHSTENCILMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::ComparisonFunction >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_COMPARISONFUNCTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::ComparisonMode >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_COMPARISONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture::Filter >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_FILTER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTexture >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLTextureBlitter::Origin >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTUREBLITTER_ORIGIN_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLTextureBlitter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLTEXTUREBLITTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLTimeMonitor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLTIMEMONITOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLTimerQuery >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLTIMERQUERY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLVersionProfile >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLVERSIONPROFILE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLVertexArrayObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLVERTEXARRAYOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLVertexArrayObject::Binder >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLVERTEXARRAYOBJECT_BINDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLWindow::UpdateBehavior >() { return SbkPySide2_QtGuiTypes[SBK_QOPENGLWINDOW_UPDATEBEHAVIOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOpenGLWindow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QOPENGLWINDOW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageLayout::Unit >() { return SbkPySide2_QtGuiTypes[SBK_QPAGELAYOUT_UNIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageLayout::Orientation >() { return SbkPySide2_QtGuiTypes[SBK_QPAGELAYOUT_ORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageLayout::Mode >() { return SbkPySide2_QtGuiTypes[SBK_QPAGELAYOUT_MODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageLayout >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAGELAYOUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageSize::PageSizeId >() { return SbkPySide2_QtGuiTypes[SBK_QPAGESIZE_PAGESIZEID_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageSize::Unit >() { return SbkPySide2_QtGuiTypes[SBK_QPAGESIZE_UNIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageSize::SizeMatchPolicy >() { return SbkPySide2_QtGuiTypes[SBK_QPAGESIZE_SIZEMATCHPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPageSize >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAGESIZE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPagedPaintDevice::PageSize >() { return SbkPySide2_QtGuiTypes[SBK_QPAGEDPAINTDEVICE_PAGESIZE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPagedPaintDevice::PdfVersion >() { return SbkPySide2_QtGuiTypes[SBK_QPAGEDPAINTDEVICE_PDFVERSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPagedPaintDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAGEDPAINTDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPagedPaintDevice::Margins >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAGEDPAINTDEVICE_MARGINS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintDevice::PaintDeviceMetric >() { return SbkPySide2_QtGuiTypes[SBK_QPAINTDEVICE_PAINTDEVICEMETRIC_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPaintDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAINTDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintDeviceWindow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAINTDEVICEWINDOW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::PaintEngineFeature >() { return SbkPySide2_QtGuiTypes[SBK_QPAINTENGINE_PAINTENGINEFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QPaintEngine::PaintEngineFeature> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QPAINTENGINE_PAINTENGINEFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::DirtyFlag >() { return SbkPySide2_QtGuiTypes[SBK_QPAINTENGINE_DIRTYFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QPaintEngine::DirtyFlag> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QPAINTENGINE_DIRTYFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::PolygonDrawMode >() { return SbkPySide2_QtGuiTypes[SBK_QPAINTENGINE_POLYGONDRAWMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::Type >() { return SbkPySide2_QtGuiTypes[SBK_QPAINTENGINE_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPaintEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAINTENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEngineState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAINTENGINESTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAINTEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainter::RenderHint >() { return SbkPySide2_QtGuiTypes[SBK_QPAINTER_RENDERHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QPainter::RenderHint> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QPAINTER_RENDERHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPainter::PixmapFragmentHint >() { return SbkPySide2_QtGuiTypes[SBK_QPAINTER_PIXMAPFRAGMENTHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QPainter::PixmapFragmentHint> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QPAINTER_PIXMAPFRAGMENTHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPainter::CompositionMode >() { return SbkPySide2_QtGuiTypes[SBK_QPAINTER_COMPOSITIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPainter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAINTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainter::PixmapFragment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAINTER_PIXMAPFRAGMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainterPath::ElementType >() { return SbkPySide2_QtGuiTypes[SBK_QPAINTERPATH_ELEMENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPainterPath >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAINTERPATH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainterPath::Element >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAINTERPATH_ELEMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainterPathStroker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPAINTERPATHSTROKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPalette::ColorGroup >() { return SbkPySide2_QtGuiTypes[SBK_QPALETTE_COLORGROUP_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPalette::ColorRole >() { return SbkPySide2_QtGuiTypes[SBK_QPALETTE_COLORROLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPalette >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPALETTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfWriter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPDFWRITER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPen >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPEN_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPicture >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPICTURE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPictureIO >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPICTUREIO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::ColorModel >() { return SbkPySide2_QtGuiTypes[SBK_QPIXELFORMAT_COLORMODEL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::AlphaUsage >() { return SbkPySide2_QtGuiTypes[SBK_QPIXELFORMAT_ALPHAUSAGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::AlphaPosition >() { return SbkPySide2_QtGuiTypes[SBK_QPIXELFORMAT_ALPHAPOSITION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::AlphaPremultiplied >() { return SbkPySide2_QtGuiTypes[SBK_QPIXELFORMAT_ALPHAPREMULTIPLIED_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::TypeInterpretation >() { return SbkPySide2_QtGuiTypes[SBK_QPIXELFORMAT_TYPEINTERPRETATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::YUVLayout >() { return SbkPySide2_QtGuiTypes[SBK_QPIXELFORMAT_YUVLAYOUT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::ByteOrder >() { return SbkPySide2_QtGuiTypes[SBK_QPIXELFORMAT_BYTEORDER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPixelFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPIXELFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixmap >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPIXMAP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixmapCache >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPIXMAPCACHE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixmapCache::Key >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPIXMAPCACHE_KEY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPointingDeviceUniqueId >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPOINTINGDEVICEUNIQUEID_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPolygon >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPOLYGON_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPolygonF >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPOLYGONF_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPyTextObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QPYTEXTOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuaternion >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QQUATERNION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRadialGradient >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QRADIALGRADIENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRasterWindow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QRASTERWINDOW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRawFont::AntialiasingType >() { return SbkPySide2_QtGuiTypes[SBK_QRAWFONT_ANTIALIASINGTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRawFont::LayoutFlag >() { return SbkPySide2_QtGuiTypes[SBK_QRAWFONT_LAYOUTFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QRawFont::LayoutFlag> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QRAWFONT_LAYOUTFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRawFont >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QRAWFONT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegExpValidator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QREGEXPVALIDATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegion::RegionType >() { return SbkPySide2_QtGuiTypes[SBK_QREGION_REGIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRegion >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QREGION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegularExpressionValidator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QREGULAREXPRESSIONVALIDATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QResizeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QRESIZEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScreen >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSCREEN_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScrollEvent::ScrollState >() { return SbkPySide2_QtGuiTypes[SBK_QSCROLLEVENT_SCROLLSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QScrollEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSCROLLEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScrollPrepareEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSCROLLPREPAREEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSessionManager::RestartHint >() { return SbkPySide2_QtGuiTypes[SBK_QSESSIONMANAGER_RESTARTHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSessionManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSESSIONMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QShortcutEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSHORTCUTEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QShowEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSHOWEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStandardItem::ItemType >() { return SbkPySide2_QtGuiTypes[SBK_QSTANDARDITEM_ITEMTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QStandardItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSTANDARDITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStandardItemModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSTANDARDITEMMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStaticText::PerformanceHint >() { return SbkPySide2_QtGuiTypes[SBK_QSTATICTEXT_PERFORMANCEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QStaticText >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSTATICTEXT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStatusTipEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSTATUSTIPEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStyleHints >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSTYLEHINTS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurface::SurfaceClass >() { return SbkPySide2_QtGuiTypes[SBK_QSURFACE_SURFACECLASS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurface::SurfaceType >() { return SbkPySide2_QtGuiTypes[SBK_QSURFACE_SURFACETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSURFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::FormatOption >() { return SbkPySide2_QtGuiTypes[SBK_QSURFACEFORMAT_FORMATOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSurfaceFormat::FormatOption> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QSURFACEFORMAT_FORMATOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::SwapBehavior >() { return SbkPySide2_QtGuiTypes[SBK_QSURFACEFORMAT_SWAPBEHAVIOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::RenderableType >() { return SbkPySide2_QtGuiTypes[SBK_QSURFACEFORMAT_RENDERABLETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::OpenGLContextProfile >() { return SbkPySide2_QtGuiTypes[SBK_QSURFACEFORMAT_OPENGLCONTEXTPROFILE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::ColorSpace >() { return SbkPySide2_QtGuiTypes[SBK_QSURFACEFORMAT_COLORSPACE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSURFACEFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSyntaxHighlighter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QSYNTAXHIGHLIGHTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTabletEvent::TabletDevice >() { return SbkPySide2_QtGuiTypes[SBK_QTABLETEVENT_TABLETDEVICE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTabletEvent::PointerType >() { return SbkPySide2_QtGuiTypes[SBK_QTABLETEVENT_POINTERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTabletEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTABLETEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlock >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTBLOCK_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlock::iterator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTBLOCK_ITERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlockFormat::LineHeightTypes >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTBLOCKFORMAT_LINEHEIGHTTYPES_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextBlockFormat::MarkerType >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTBLOCKFORMAT_MARKERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextBlockFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTBLOCKFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlockGroup >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTBLOCKGROUP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlockUserData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTBLOCKUSERDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat::VerticalAlignment >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTCHARFORMAT_VERTICALALIGNMENT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat::UnderlineStyle >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTCHARFORMAT_UNDERLINESTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat::FontPropertiesInheritanceBehavior >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTCHARFORMAT_FONTPROPERTIESINHERITANCEBEHAVIOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTCHARFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCursor::MoveMode >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTCURSOR_MOVEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCursor::MoveOperation >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTCURSOR_MOVEOPERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCursor::SelectionType >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTCURSOR_SELECTIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCursor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTCURSOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocument::MetaInformation >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTDOCUMENT_METAINFORMATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextDocument::MarkdownFeature >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTDOCUMENT_MARKDOWNFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextDocument::MarkdownFeature> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QTEXTDOCUMENT_MARKDOWNFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextDocument::FindFlag >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTDOCUMENT_FINDFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextDocument::FindFlag> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QTEXTDOCUMENT_FINDFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextDocument::ResourceType >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTDOCUMENT_RESOURCETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextDocument::Stacks >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTDOCUMENT_STACKS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextDocument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTDOCUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocumentFragment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTDOCUMENTFRAGMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocumentWriter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTDOCUMENTWRITER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFormat::FormatType >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTFORMAT_FORMATTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFormat::Property >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTFORMAT_PROPERTY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFormat::ObjectTypes >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTFORMAT_OBJECTTYPES_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFormat::PageBreakFlag >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTFORMAT_PAGEBREAKFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextFormat::PageBreakFlag> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QTEXTFORMAT_PAGEBREAKFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFragment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTFRAGMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFrame >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTFRAME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFrame::iterator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTFRAME_ITERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFrameFormat::Position >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTFRAMEFORMAT_POSITION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFrameFormat::BorderStyle >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTFRAMEFORMAT_BORDERSTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextFrameFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTFRAMEFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextImageFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTIMAGEFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextInlineObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTINLINEOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextItem::RenderFlag >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTITEM_RENDERFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextItem::RenderFlag> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QTEXTITEM_RENDERFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLayout::CursorMode >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTLAYOUT_CURSORMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextLayout >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTLAYOUT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLayout::FormatRange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTLAYOUT_FORMATRANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLength::Type >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTLENGTH_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextLength >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTLENGTH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLine::Edge >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTLINE_EDGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextLine::CursorPosition >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTLINE_CURSORPOSITION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextLine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTLINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextList >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTLIST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextListFormat::Style >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTLISTFORMAT_STYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextListFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTLISTFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextObjectInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTOBJECTINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextOption::TabType >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTOPTION_TABTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextOption::WrapMode >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTOPTION_WRAPMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextOption::Flag >() { return SbkPySide2_QtGuiTypes[SBK_QTEXTOPTION_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextOption::Flag> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QTEXTOPTION_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextOption >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTOPTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextOption::Tab >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTOPTION_TAB_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTable >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTTABLE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTableCell >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTTABLECELL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTableCellFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTTABLECELLFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTableFormat >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTEXTTABLEFORMAT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QToolBarChangeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTOOLBARCHANGEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTouchDevice::DeviceType >() { return SbkPySide2_QtGuiTypes[SBK_QTOUCHDEVICE_DEVICETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTouchDevice::CapabilityFlag >() { return SbkPySide2_QtGuiTypes[SBK_QTOUCHDEVICE_CAPABILITYFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTouchDevice::CapabilityFlag> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QTOUCHDEVICE_CAPABILITYFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTouchDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTOUCHDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTouchEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTOUCHEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTouchEvent::TouchPoint::InfoFlag >() { return SbkPySide2_QtGuiTypes[SBK_QTOUCHEVENT_TOUCHPOINT_INFOFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTouchEvent::TouchPoint::InfoFlag> >() { return SbkPySide2_QtGuiTypes[SBK_QFLAGS_QTOUCHEVENT_TOUCHPOINT_INFOFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTouchEvent::TouchPoint >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTOUCHEVENT_TOUCHPOINT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTransform::TransformationType >() { return SbkPySide2_QtGuiTypes[SBK_QTRANSFORM_TRANSFORMATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTransform >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QTRANSFORM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QValidator::State >() { return SbkPySide2_QtGuiTypes[SBK_QVALIDATOR_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QValidator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QVALIDATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVector2D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QVECTOR2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVector3D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QVECTOR3D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVector4D >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QVECTOR4D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWhatsThisClickedEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QWHATSTHISCLICKEDEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWheelEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QWHEELEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWindow::Visibility >() { return SbkPySide2_QtGuiTypes[SBK_QWINDOW_VISIBILITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWindow::AncestorMode >() { return SbkPySide2_QtGuiTypes[SBK_QWINDOW_ANCESTORMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWindow >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QWINDOW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWindowStateChangeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtGuiTypes[SBK_QWINDOWSTATECHANGEEVENT_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTGUI_PYTHON_H

