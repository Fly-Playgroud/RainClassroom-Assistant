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


#ifndef SBK_QTCHARTS_PYTHON_H
#define SBK_QTCHARTS_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtwidgets_python.h>
#include <pyside2_qtgui_python.h>
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtCharts/qbarseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qarealegendmarker.h>
#include <QtCharts/qhorizontalpercentbarseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qvxymodelmapper.h>
#include <QtCharts/qabstractaxis.h>
#include <QtCharts/qhorizontalbarseries.h>
#include <QtCharts/qcandlestickset.h>
#include <QtCharts/qcategoryaxis.h>
#include <QtCharts/qpielegendmarker.h>
#include <QtCharts/qbarlegendmarker.h>
#include <QtCharts/qbarcategoryaxis.h>
#include <QtCharts/qscatterseries.h>
#include <QtCharts/qhbarmodelmapper.h>
#include <QtCharts/qstackedbarseries.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qlegend.h>
#include <QtCharts/qareaseries.h>
#include <QtCharts/qhorizontalstackedbarseries.h>
#include <QtCharts/qboxplotlegendmarker.h>
#include <QtCharts/qsplineseries.h>
#include <QtCharts/qhboxplotmodelmapper.h>
#include <QtCharts/qpiemodelmapper.h>
#include <QtCharts/qchartview.h>
#include <QtCharts/qbarset.h>
#include <QtCharts/qhcandlestickmodelmapper.h>
#include <QtCharts/qlogvalueaxis.h>
#include <QtCharts/qcandlesticklegendmarker.h>
#include <QtCharts/qpolarchart.h>
#include <QtCharts/qvalueaxis.h>
#include <QtCharts/qlegendmarker.h>
#include <QtCharts/qvcandlestickmodelmapper.h>
#include <QtCharts/qcandlestickmodelmapper.h>
#include <QtCharts/qpieslice.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCharts/qchartglobal.h>
#include <QtCharts/qhpiemodelmapper.h>
#include <QtCharts/qboxplotmodelmapper.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qvboxplotmodelmapper.h>
#include <QtCharts/qhxymodelmapper.h>
#include <QtCharts/qabstractseries.h>
#include <QtCharts/qchart.h>
#include <QtCharts/qxylegendmarker.h>
#include <QtCharts/qpercentbarseries.h>
#include <QtCharts/qxymodelmapper.h>
#include <QtCharts/qboxset.h>
#include <QtCharts/qvpiemodelmapper.h>
#include <QtCharts/qdatetimeaxis.h>
#include <QtCharts/qbarmodelmapper.h>
#include <QtCharts/qvbarmodelmapper.h>
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
    SBK_QtChartsQTCHARTS_IDX                                 = 3,
    SBK_QTCHARTS_QABSTRACTAXIS_AXISTYPE_IDX                  = 5,
    SBK_QTCHARTS_QABSTRACTAXIS_IDX                           = 4,
    SBK_QTCHARTS_QABSTRACTBARSERIES_LABELSPOSITION_IDX       = 7,
    SBK_QTCHARTS_QABSTRACTBARSERIES_IDX                      = 6,
    SBK_QTCHARTS_QABSTRACTSERIES_SERIESTYPE_IDX              = 9,
    SBK_QTCHARTS_QABSTRACTSERIES_IDX                         = 8,
    SBK_QTCHARTS_QAREALEGENDMARKER_IDX                       = 10,
    SBK_QTCHARTS_QAREASERIES_IDX                             = 11,
    SBK_QTCHARTS_QBARCATEGORYAXIS_IDX                        = 12,
    SBK_QTCHARTS_QBARLEGENDMARKER_IDX                        = 13,
    SBK_QTCHARTS_QBARMODELMAPPER_IDX                         = 14,
    SBK_QTCHARTS_QBARSERIES_IDX                              = 15,
    SBK_QTCHARTS_QBARSET_IDX                                 = 16,
    SBK_QTCHARTS_QBOXPLOTLEGENDMARKER_IDX                    = 17,
    SBK_QTCHARTS_QBOXPLOTMODELMAPPER_IDX                     = 18,
    SBK_QTCHARTS_QBOXPLOTSERIES_IDX                          = 19,
    SBK_QTCHARTS_QBOXSET_VALUEPOSITIONS_IDX                  = 21,
    SBK_QTCHARTS_QBOXSET_IDX                                 = 20,
    SBK_QTCHARTS_QCANDLESTICKLEGENDMARKER_IDX                = 22,
    SBK_QTCHARTS_QCANDLESTICKMODELMAPPER_IDX                 = 23,
    SBK_QTCHARTS_QCANDLESTICKSERIES_IDX                      = 24,
    SBK_QTCHARTS_QCANDLESTICKSET_IDX                         = 25,
    SBK_QTCHARTS_QCATEGORYAXIS_AXISLABELSPOSITION_IDX        = 27,
    SBK_QTCHARTS_QCATEGORYAXIS_IDX                           = 26,
    SBK_QTCHARTS_QCHART_CHARTTYPE_IDX                        = 31,
    SBK_QTCHARTS_QCHART_CHARTTHEME_IDX                       = 30,
    SBK_QTCHARTS_QCHART_ANIMATIONOPTION_IDX                  = 29,
    SBK_QFLAGS_QTCHARTS_QCHART_ANIMATIONOPTION_IDX           = 0,
    SBK_QTCHARTS_QCHART_IDX                                  = 28,
    SBK_QTCHARTS_QCHARTVIEW_RUBBERBAND_IDX                   = 33,
    SBK_QFLAGS_QTCHARTS_QCHARTVIEW_RUBBERBAND_IDX            = 1,
    SBK_QTCHARTS_QCHARTVIEW_IDX                              = 32,
    SBK_QTCHARTS_QDATETIMEAXIS_IDX                           = 34,
    SBK_QTCHARTS_QHBARMODELMAPPER_IDX                        = 35,
    SBK_QTCHARTS_QHBOXPLOTMODELMAPPER_IDX                    = 36,
    SBK_QTCHARTS_QHCANDLESTICKMODELMAPPER_IDX                = 37,
    SBK_QTCHARTS_QHPIEMODELMAPPER_IDX                        = 38,
    SBK_QTCHARTS_QHXYMODELMAPPER_IDX                         = 39,
    SBK_QTCHARTS_QHORIZONTALBARSERIES_IDX                    = 40,
    SBK_QTCHARTS_QHORIZONTALPERCENTBARSERIES_IDX             = 41,
    SBK_QTCHARTS_QHORIZONTALSTACKEDBARSERIES_IDX             = 42,
    SBK_QTCHARTS_QLEGEND_MARKERSHAPE_IDX                     = 44,
    SBK_QTCHARTS_QLEGEND_IDX                                 = 43,
    SBK_QTCHARTS_QLEGENDMARKER_LEGENDMARKERTYPE_IDX          = 46,
    SBK_QTCHARTS_QLEGENDMARKER_IDX                           = 45,
    SBK_QTCHARTS_QLINESERIES_IDX                             = 47,
    SBK_QTCHARTS_QLOGVALUEAXIS_IDX                           = 48,
    SBK_QTCHARTS_QPERCENTBARSERIES_IDX                       = 49,
    SBK_QTCHARTS_QPIELEGENDMARKER_IDX                        = 50,
    SBK_QTCHARTS_QPIEMODELMAPPER_IDX                         = 51,
    SBK_QTCHARTS_QPIESERIES_IDX                              = 52,
    SBK_QTCHARTS_QPIESLICE_LABELPOSITION_IDX                 = 54,
    SBK_QTCHARTS_QPIESLICE_IDX                               = 53,
    SBK_QTCHARTS_QPOLARCHART_POLARORIENTATION_IDX            = 56,
    SBK_QFLAGS_QTCHARTS_QPOLARCHART_POLARORIENTATION_IDX     = 2,
    SBK_QTCHARTS_QPOLARCHART_IDX                             = 55,
    SBK_QTCHARTS_QSCATTERSERIES_MARKERSHAPE_IDX              = 58,
    SBK_QTCHARTS_QSCATTERSERIES_IDX                          = 57,
    SBK_QTCHARTS_QSPLINESERIES_IDX                           = 59,
    SBK_QTCHARTS_QSTACKEDBARSERIES_IDX                       = 60,
    SBK_QTCHARTS_QVBARMODELMAPPER_IDX                        = 61,
    SBK_QTCHARTS_QVBOXPLOTMODELMAPPER_IDX                    = 62,
    SBK_QTCHARTS_QVCANDLESTICKMODELMAPPER_IDX                = 63,
    SBK_QTCHARTS_QVPIEMODELMAPPER_IDX                        = 64,
    SBK_QTCHARTS_QVXYMODELMAPPER_IDX                         = 65,
    SBK_QTCHARTS_QVALUEAXIS_TICKTYPE_IDX                     = 67,
    SBK_QTCHARTS_QVALUEAXIS_IDX                              = 66,
    SBK_QTCHARTS_QXYLEGENDMARKER_IDX                         = 68,
    SBK_QTCHARTS_QXYMODELMAPPER_IDX                          = 69,
    SBK_QTCHARTS_QXYSERIES_IDX                               = 70,
    SBK_QtCharts_IDX_COUNT                                   = 71
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtChartsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtChartsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtChartsTypeConverters;

// Converter indices
enum : int {
    SBK_QTCHARTS_QLIST_QOBJECTPTR_IDX                        = 0, // const QList<QObject* > &
    SBK_QTCHARTS_QLIST_QBYTEARRAY_IDX                        = 1, // QList<QByteArray >
    SBK_QTCHARTS_QLIST_QTCHARTS_QBARSETPTR_IDX               = 2, // QList<QtCharts::QBarSet* >
    SBK_QTCHARTS_QLIST_QTCHARTS_QABSTRACTAXISPTR_IDX         = 3, // QList<QtCharts::QAbstractAxis* >
    SBK_QTCHARTS_QLIST_QREAL_IDX                             = 4, // const QList<qreal > &
    SBK_QTCHARTS_QLIST_QTCHARTS_QBOXSETPTR_IDX               = 5, // QList<QtCharts::QBoxSet* >
    SBK_QTCHARTS_QLIST_QTCHARTS_QCANDLESTICKSETPTR_IDX       = 6, // const QList<QtCharts::QCandlestickSet* > &
    SBK_QTCHARTS_QLIST_QACTIONPTR_IDX                        = 7, // QList<QAction* >
    SBK_QTCHARTS_QLIST_QTCHARTS_QABSTRACTSERIESPTR_IDX       = 8, // QList<QtCharts::QAbstractSeries* >
    SBK_QTCHARTS_QLIST_QGRAPHICSITEMPTR_IDX                  = 9, // QList<QGraphicsItem* >
    SBK_QTCHARTS_QLIST_QRECTF_IDX                            = 10, // const QList<QRectF > &
    SBK_QTCHARTS_QLIST_QTCHARTS_QLEGENDMARKERPTR_IDX         = 11, // QList<QtCharts::QLegendMarker* >
    SBK_QTCHARTS_QLIST_QPOINTF_IDX                           = 12, // const QList<QPointF > &
    SBK_QTCHARTS_QVECTOR_QPOINTF_IDX                         = 13, // QVector<QPointF >
    SBK_QTCHARTS_QLIST_QTCHARTS_QPIESLICEPTR_IDX             = 14, // QList<QtCharts::QPieSlice* >
    SBK_QTCHARTS_QLIST_QVARIANT_IDX                          = 15, // QList<QVariant >
    SBK_QTCHARTS_QLIST_QSTRING_IDX                           = 16, // QList<QString >
    SBK_QTCHARTS_QMAP_QSTRING_QVARIANT_IDX                   = 17, // QMap<QString,QVariant >
    SBK_QtCharts_CONVERTERS_IDX_COUNT                        = 18
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QtCharts::QAbstractAxis::AxisType >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QABSTRACTAXIS_AXISTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QAbstractAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QABSTRACTAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QAbstractBarSeries::LabelsPosition >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QABSTRACTBARSERIES_LABELSPOSITION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QAbstractBarSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QABSTRACTBARSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QAbstractSeries::SeriesType >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QABSTRACTSERIES_SERIESTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QAbstractSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QABSTRACTSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QAreaLegendMarker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QAREALEGENDMARKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QAreaSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QAREASERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QBarCategoryAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QBARCATEGORYAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QBarLegendMarker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QBARLEGENDMARKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QBarModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QBARMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QBarSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QBARSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QBarSet >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QBARSET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QBoxPlotLegendMarker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QBOXPLOTLEGENDMARKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QBoxPlotModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QBOXPLOTMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QBoxPlotSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QBOXPLOTSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QBoxSet::ValuePositions >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QBOXSET_VALUEPOSITIONS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QBoxSet >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QBOXSET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QCandlestickLegendMarker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCANDLESTICKLEGENDMARKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QCandlestickModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCANDLESTICKMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QCandlestickSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCANDLESTICKSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QCandlestickSet >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCANDLESTICKSET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QCategoryAxis::AxisLabelsPosition >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCATEGORYAXIS_AXISLABELSPOSITION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QCategoryAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCATEGORYAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QChart::ChartType >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCHART_CHARTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QChart::ChartTheme >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCHART_CHARTTHEME_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QChart::AnimationOption >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCHART_ANIMATIONOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QtCharts::QChart::AnimationOption> >() { return SbkPySide2_QtChartsTypes[SBK_QFLAGS_QTCHARTS_QCHART_ANIMATIONOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QChart >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCHART_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QChartView::RubberBand >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCHARTVIEW_RUBBERBAND_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QtCharts::QChartView::RubberBand> >() { return SbkPySide2_QtChartsTypes[SBK_QFLAGS_QTCHARTS_QCHARTVIEW_RUBBERBAND_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QChartView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QCHARTVIEW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QDateTimeAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QDATETIMEAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QHBarModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QHBARMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QHBoxPlotModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QHBOXPLOTMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QHCandlestickModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QHCANDLESTICKMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QHPieModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QHPIEMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QHXYModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QHXYMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QHorizontalBarSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QHORIZONTALBARSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QHorizontalPercentBarSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QHORIZONTALPERCENTBARSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QHorizontalStackedBarSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QHORIZONTALSTACKEDBARSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QLegend::MarkerShape >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QLEGEND_MARKERSHAPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QLegend >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QLEGEND_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QLegendMarker::LegendMarkerType >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QLEGENDMARKER_LEGENDMARKERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QLegendMarker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QLEGENDMARKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QLineSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QLINESERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QLogValueAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QLOGVALUEAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QPercentBarSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QPERCENTBARSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QPieLegendMarker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QPIELEGENDMARKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QPieModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QPIEMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QPieSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QPIESERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QPieSlice::LabelPosition >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QPIESLICE_LABELPOSITION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QPieSlice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QPIESLICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QPolarChart::PolarOrientation >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QPOLARCHART_POLARORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QtCharts::QPolarChart::PolarOrientation> >() { return SbkPySide2_QtChartsTypes[SBK_QFLAGS_QTCHARTS_QPOLARCHART_POLARORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QPolarChart >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QPOLARCHART_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QScatterSeries::MarkerShape >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QSCATTERSERIES_MARKERSHAPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QScatterSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QSCATTERSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QSplineSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QSPLINESERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QStackedBarSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QSTACKEDBARSERIES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QVBarModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QVBARMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QVBoxPlotModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QVBOXPLOTMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QVCandlestickModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QVCANDLESTICKMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QVPieModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QVPIEMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QVXYModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QVXYMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QValueAxis::TickType >() { return SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QVALUEAXIS_TICKTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtCharts::QValueAxis >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QVALUEAXIS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QXYLegendMarker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QXYLEGENDMARKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QXYModelMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QXYMODELMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtCharts::QXYSeries >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtChartsTypes[SBK_QTCHARTS_QXYSERIES_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTCHARTS_PYTHON_H

