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


#ifndef SBK_QTHELP_PYTHON_H
#define SBK_QTHELP_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtwidgets_python.h>
#include <pyside2_qtgui_python.h>
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtHelp/qhelpengine.h>
#include <QtHelp/qhelpfilterengine.h>
#include <QtHelp/qhelpsearchquerywidget.h>
#include <QtHelp/qcompressedhelpinfo.h>
#include <QtHelp/qhelpcontentwidget.h>
#include <QtHelp/qhelpenginecore.h>
#include <QtHelp/qhelpfilterdata.h>
#include <QtHelp/qhelpindexwidget.h>
#include <QtHelp/qhelpsearchresultwidget.h>
#include <QtHelp/qhelpfiltersettingswidget.h>
#include <QtHelp/qhelpsearchengine.h>
#include <QtHelp/qhelplink.h>
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
    SBK_QCOMPRESSEDHELPINFO_IDX                              = 0,
    SBK_QHELPCONTENTITEM_IDX                                 = 1,
    SBK_QHELPCONTENTMODEL_IDX                                = 2,
    SBK_QHELPCONTENTWIDGET_IDX                               = 3,
    SBK_QHELPENGINE_IDX                                      = 4,
    SBK_QHELPENGINECORE_IDX                                  = 5,
    SBK_QHELPFILTERDATA_IDX                                  = 6,
    SBK_QHELPFILTERENGINE_IDX                                = 7,
    SBK_QHELPFILTERSETTINGSWIDGET_IDX                        = 8,
    SBK_QHELPINDEXMODEL_IDX                                  = 9,
    SBK_QHELPINDEXWIDGET_IDX                                 = 10,
    SBK_QHELPLINK_IDX                                        = 11,
    SBK_QHELPSEARCHENGINE_IDX                                = 12,
    SBK_QHELPSEARCHQUERY_FIELDNAME_IDX                       = 14,
    SBK_QHELPSEARCHQUERY_IDX                                 = 13,
    SBK_QHELPSEARCHQUERYWIDGET_IDX                           = 15,
    SBK_QHELPSEARCHRESULT_IDX                                = 16,
    SBK_QHELPSEARCHRESULTWIDGET_IDX                          = 17,
    SBK_QtHelp_IDX_COUNT                                     = 18
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtHelpTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtHelpModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtHelpTypeConverters;

// Converter indices
enum : int {
    SBK_QTHELP_QVECTOR_INT_IDX                               = 0, // const QVector<int > &
    SBK_QTHELP_QHASH_INT_QBYTEARRAY_IDX                      = 1, // const QHash<int,QByteArray > &
    SBK_QTHELP_QMAP_INT_QVARIANT_IDX                         = 2, // QMap<int,QVariant >
    SBK_QTHELP_QLIST_QPERSISTENTMODELINDEX_IDX               = 3, // const QList<QPersistentModelIndex > &
    SBK_QTHELP_QLIST_QHELPLINK_IDX                           = 4, // QList<QHelpLink >
    SBK_QTHELP_QLIST_QURL_IDX                                = 5, // QList<QUrl >
    SBK_QTHELP_QLIST_QSTRINGLIST_IDX                         = 6, // QList<QStringList >
    SBK_QTHELP_QMAP_QSTRING_QURL_IDX                         = 7, // QMap<QString,QUrl >
    SBK_QTHELP_QLIST_QOBJECTPTR_IDX                          = 8, // const QList<QObject* > &
    SBK_QTHELP_QLIST_QBYTEARRAY_IDX                          = 9, // QList<QByteArray >
    SBK_QTHELP_QLIST_QVERSIONNUMBER_IDX                      = 10, // const QList<QVersionNumber > &
    SBK_QTHELP_QMAP_QSTRING_QSTRING_IDX                      = 11, // QMap<QString,QString >
    SBK_QTHELP_QMAP_QSTRING_QVERSIONNUMBER_IDX               = 12, // QMap<QString,QVersionNumber >
    SBK_QTHELP_QLIST_QACTIONPTR_IDX                          = 13, // QList<QAction* >
    SBK_QTHELP_QPAIR_QSTRING_QSTRING_IDX                     = 14, // QPair<QString,QString >
    SBK_QTHELP_QLIST_QPAIR_QSTRING_QSTRING_IDX               = 15, // QList<QPair< QString,QString > >
    SBK_QTHELP_QLIST_QHELPSEARCHQUERY_IDX                    = 16, // QList<QHelpSearchQuery >
    SBK_QTHELP_QVECTOR_QHELPSEARCHRESULT_IDX                 = 17, // QVector<QHelpSearchResult >
    SBK_QTHELP_QLIST_QVARIANT_IDX                            = 18, // QList<QVariant >
    SBK_QTHELP_QLIST_QSTRING_IDX                             = 19, // QList<QString >
    SBK_QTHELP_QMAP_QSTRING_QVARIANT_IDX                     = 20, // QMap<QString,QVariant >
    SBK_QtHelp_CONVERTERS_IDX_COUNT                          = 21
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QCompressedHelpInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QCOMPRESSEDHELPINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpContentItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPCONTENTITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpContentModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPCONTENTMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpContentWidget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPCONTENTWIDGET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpEngineCore >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPENGINECORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpFilterData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPFILTERDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpFilterEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPFILTERENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpFilterSettingsWidget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPFILTERSETTINGSWIDGET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpIndexModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPINDEXMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpIndexWidget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPINDEXWIDGET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpLink >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPLINK_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpSearchEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPSEARCHENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpSearchQuery::FieldName >() { return SbkPySide2_QtHelpTypes[SBK_QHELPSEARCHQUERY_FIELDNAME_IDX]; }
template<> inline PyTypeObject *SbkType< ::QHelpSearchQuery >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPSEARCHQUERY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpSearchQueryWidget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPSEARCHQUERYWIDGET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpSearchResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPSEARCHRESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpSearchResultWidget >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtHelpTypes[SBK_QHELPSEARCHRESULTWIDGET_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTHELP_PYTHON_H

