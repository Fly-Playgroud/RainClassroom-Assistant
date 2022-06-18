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


#ifndef SBK_QTPRINTSUPPORT_PYTHON_H
#define SBK_QTPRINTSUPPORT_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtwidgets_python.h>
#include <pyside2_qtgui_python.h>
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtPrintSupport/qprintengine.h>
#include <QtPrintSupport/qprintpreviewwidget.h>
#include <QtPrintSupport/qprintdialog.h>
#include <QtPrintSupport/qpagesetupdialog.h>
#include <QtPrintSupport/qprintpreviewdialog.h>
#include <QtPrintSupport/qprinterinfo.h>
#include <QtPrintSupport/qabstractprintdialog.h>
#include <QtPrintSupport/qprinter.h>
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
    SBK_QABSTRACTPRINTDIALOG_PRINTRANGE_IDX                  = 2,
    SBK_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION_IDX           = 1,
    SBK_QFLAGS_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION_IDX    = 3,
    SBK_QABSTRACTPRINTDIALOG_IDX                             = 0,
    SBK_QPAGESETUPDIALOG_IDX                                 = 4,
    SBK_QPRINTDIALOG_IDX                                     = 5,
    SBK_QPRINTENGINE_PRINTENGINEPROPERTYKEY_IDX              = 7,
    SBK_QPRINTENGINE_IDX                                     = 6,
    SBK_QPRINTPREVIEWDIALOG_IDX                              = 8,
    SBK_QPRINTPREVIEWWIDGET_VIEWMODE_IDX                     = 10,
    SBK_QPRINTPREVIEWWIDGET_ZOOMMODE_IDX                     = 11,
    SBK_QPRINTPREVIEWWIDGET_IDX                              = 9,
    SBK_QPRINTER_PRINTERMODE_IDX                             = 20,
    SBK_QPRINTER_ORIENTATION_IDX                             = 15,
    SBK_QPRINTER_PAGEORDER_IDX                               = 17,
    SBK_QPRINTER_COLORMODE_IDX                               = 13,
    SBK_QPRINTER_PAPERSOURCE_IDX                             = 18,
    SBK_QPRINTER_PRINTERSTATE_IDX                            = 21,
    SBK_QPRINTER_OUTPUTFORMAT_IDX                            = 16,
    SBK_QPRINTER_PRINTRANGE_IDX                              = 19,
    SBK_QPRINTER_UNIT_IDX                                    = 22,
    SBK_QPRINTER_DUPLEXMODE_IDX                              = 14,
    SBK_QPRINTER_IDX                                         = 12,
    SBK_QPRINTERINFO_IDX                                     = 23,
    SBK_QtPrintSupport_IDX_COUNT                             = 24
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtPrintSupportTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtPrintSupportModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtPrintSupportTypeConverters;

// Converter indices
enum : int {
    SBK_QTPRINTSUPPORT_QLIST_QWIDGETPTR_IDX                  = 0, // const QList<QWidget* > &
    SBK_QTPRINTSUPPORT_QLIST_QACTIONPTR_IDX                  = 1, // QList<QAction* >
    SBK_QTPRINTSUPPORT_QLIST_QPRINTER_PAPERSOURCE_IDX        = 2, // QList<QPrinter::PaperSource >
    SBK_QTPRINTSUPPORT_QLIST_INT_IDX                         = 3, // QList<int >
    SBK_QTPRINTSUPPORT_QLIST_QPRINTERINFO_IDX                = 4, // QList<QPrinterInfo >
    SBK_QTPRINTSUPPORT_QLIST_QPRINTER_COLORMODE_IDX          = 5, // QList<QPrinter::ColorMode >
    SBK_QTPRINTSUPPORT_QLIST_QPRINTER_DUPLEXMODE_IDX         = 6, // QList<QPrinter::DuplexMode >
    SBK_QTPRINTSUPPORT_QLIST_QPAGESIZE_IDX                   = 7, // QList<QPageSize >
    SBK_QTPRINTSUPPORT_QLIST_QPAGEDPAINTDEVICE_PAGESIZE_IDX  = 8, // QList<QPagedPaintDevice::PageSize >
    SBK_QTPRINTSUPPORT_QPAIR_QSTRING_QSIZEF_IDX              = 9, // QPair<QString,QSizeF >
    SBK_QTPRINTSUPPORT_QLIST_QPAIR_QSTRING_QSIZEF_IDX        = 10, // QList<QPair< QString,QSizeF > >
    SBK_QTPRINTSUPPORT_QLIST_QVARIANT_IDX                    = 11, // QList<QVariant >
    SBK_QTPRINTSUPPORT_QLIST_QSTRING_IDX                     = 12, // QList<QString >
    SBK_QTPRINTSUPPORT_QMAP_QSTRING_QVARIANT_IDX             = 13, // QMap<QString,QVariant >
    SBK_QtPrintSupport_CONVERTERS_IDX_COUNT                  = 14
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QAbstractPrintDialog::PrintRange >() { return SbkPySide2_QtPrintSupportTypes[SBK_QABSTRACTPRINTDIALOG_PRINTRANGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractPrintDialog::PrintDialogOption >() { return SbkPySide2_QtPrintSupportTypes[SBK_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QAbstractPrintDialog::PrintDialogOption> >() { return SbkPySide2_QtPrintSupportTypes[SBK_QFLAGS_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractPrintDialog >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPrintSupportTypes[SBK_QABSTRACTPRINTDIALOG_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageSetupDialog >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPrintSupportTypes[SBK_QPAGESETUPDIALOG_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrintDialog >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTDIALOG_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrintEngine::PrintEnginePropertyKey >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTENGINE_PRINTENGINEPROPERTYKEY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrintEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrintPreviewDialog >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTPREVIEWDIALOG_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrintPreviewWidget::ViewMode >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTPREVIEWWIDGET_VIEWMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrintPreviewWidget::ZoomMode >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTPREVIEWWIDGET_ZOOMMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrintPreviewWidget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTPREVIEWWIDGET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrinter::PrinterMode >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_PRINTERMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::Orientation >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_ORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::PageOrder >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_PAGEORDER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::ColorMode >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_COLORMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::PaperSource >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_PAPERSOURCE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::PrinterState >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_PRINTERSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::OutputFormat >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_OUTPUTFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::PrintRange >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_PRINTRANGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::Unit >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_UNIT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter::DuplexMode >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_DUPLEXMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPrinter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPrinterInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTERINFO_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTPRINTSUPPORT_PYTHON_H

