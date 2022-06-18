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


#ifndef SBK_QTSQL_PYTHON_H
#define SBK_QTSQL_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtwidgets_python.h>
#include <pyside2_qtgui_python.h>
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtSql/qtsqlglobal.h>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>
#include <QtSql/qsqltablemodel.h>
#include <QtSql/qsqlquerymodel.h>
#include <QtSql/qsqlresult.h>
#include <QtSql/qsqlrelationaltablemodel.h>
#include <QtSql/qsqlfield.h>
#include <QtSql/qsqlrecord.h>
#include <QtSql/qsqlrelationaldelegate.h>
#include <QtSql/qsqlerror.h>
#include <QtSql/qsqlindex.h>
#include <QtSql/qsqldriver.h>
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
    SBK_QSQL_LOCATION_IDX                                    = 2,
    SBK_QSQL_PARAMTYPEFLAG_IDX                               = 4,
    SBK_QFLAGS_QSQL_PARAMTYPEFLAG_IDX                        = 0,
    SBK_QSQL_TABLETYPE_IDX                                   = 5,
    SBK_QSQL_NUMERICALPRECISIONPOLICY_IDX                    = 3,
    SBK_QtSqlQSQL_IDX                                        = 1,
    SBK_QSQLDATABASE_IDX                                     = 6,
    SBK_QSQLDRIVER_DRIVERFEATURE_IDX                         = 9,
    SBK_QSQLDRIVER_STATEMENTTYPE_IDX                         = 12,
    SBK_QSQLDRIVER_IDENTIFIERTYPE_IDX                        = 10,
    SBK_QSQLDRIVER_NOTIFICATIONSOURCE_IDX                    = 11,
    SBK_QSQLDRIVER_DBMSTYPE_IDX                              = 8,
    SBK_QSQLDRIVER_IDX                                       = 7,
    SBK_QSQLDRIVERCREATORBASE_IDX                            = 13,
    SBK_QSQLERROR_ERRORTYPE_IDX                              = 15,
    SBK_QSQLERROR_IDX                                        = 14,
    SBK_QSQLFIELD_REQUIREDSTATUS_IDX                         = 17,
    SBK_QSQLFIELD_IDX                                        = 16,
    SBK_QSQLINDEX_IDX                                        = 18,
    SBK_QSQLQUERY_BATCHEXECUTIONMODE_IDX                     = 20,
    SBK_QSQLQUERY_IDX                                        = 19,
    SBK_QSQLQUERYMODEL_IDX                                   = 21,
    SBK_QSQLRECORD_IDX                                       = 22,
    SBK_QSQLRELATION_IDX                                     = 23,
    SBK_QSQLRELATIONALDELEGATE_IDX                           = 24,
    SBK_QSQLRELATIONALTABLEMODEL_JOINMODE_IDX                = 26,
    SBK_QSQLRELATIONALTABLEMODEL_IDX                         = 25,
    SBK_QSQLRESULT_BINDINGSYNTAX_IDX                         = 28,
    SBK_QSQLRESULT_IDX                                       = 27,
    SBK_QSQLTABLEMODEL_EDITSTRATEGY_IDX                      = 30,
    SBK_QSQLTABLEMODEL_IDX                                   = 29,
    SBK_QtSql_IDX_COUNT                                      = 31
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtSqlTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtSqlModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtSqlTypeConverters;

// Converter indices
enum : int {
    SBK_QTSQL_QLIST_QOBJECTPTR_IDX                           = 0, // const QList<QObject* > &
    SBK_QTSQL_QLIST_QBYTEARRAY_IDX                           = 1, // QList<QByteArray >
    SBK_QTSQL_QMAP_QSTRING_QVARIANT_IDX                      = 2, // QMap<QString,QVariant >
    SBK_QTSQL_QMAP_INT_QVARIANT_IDX                          = 3, // QMap<int,QVariant >
    SBK_QTSQL_QHASH_INT_QBYTEARRAY_IDX                       = 4, // QHash<int,QByteArray >
    SBK_QTSQL_QVECTOR_INT_IDX                                = 5, // QVector<int >
    SBK_QTSQL_QVECTOR_QVARIANT_IDX                           = 6, // QVector<QVariant > &
    SBK_QTSQL_QLIST_QVARIANT_IDX                             = 7, // QList<QVariant >
    SBK_QTSQL_QLIST_QSTRING_IDX                              = 8, // QList<QString >
    SBK_QtSql_CONVERTERS_IDX_COUNT                           = 9
};
// Macros for type check

// Protected enum surrogates
enum PySide2_QtSql_QSqlResult_BindingSyntax_Surrogate {};

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QSql::Location >() { return SbkPySide2_QtSqlTypes[SBK_QSQL_LOCATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSql::ParamTypeFlag >() { return SbkPySide2_QtSqlTypes[SBK_QSQL_PARAMTYPEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSql::ParamTypeFlag> >() { return SbkPySide2_QtSqlTypes[SBK_QFLAGS_QSQL_PARAMTYPEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSql::TableType >() { return SbkPySide2_QtSqlTypes[SBK_QSQL_TABLETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSql::NumericalPrecisionPolicy >() { return SbkPySide2_QtSqlTypes[SBK_QSQL_NUMERICALPRECISIONPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDatabase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLDATABASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlDriver::DriverFeature >() { return SbkPySide2_QtSqlTypes[SBK_QSQLDRIVER_DRIVERFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDriver::StatementType >() { return SbkPySide2_QtSqlTypes[SBK_QSQLDRIVER_STATEMENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDriver::IdentifierType >() { return SbkPySide2_QtSqlTypes[SBK_QSQLDRIVER_IDENTIFIERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDriver::NotificationSource >() { return SbkPySide2_QtSqlTypes[SBK_QSQLDRIVER_NOTIFICATIONSOURCE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDriver::DbmsType >() { return SbkPySide2_QtSqlTypes[SBK_QSQLDRIVER_DBMSTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlDriver >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLDRIVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlDriverCreatorBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLDRIVERCREATORBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlError::ErrorType >() { return SbkPySide2_QtSqlTypes[SBK_QSQLERROR_ERRORTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlError >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLERROR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlField::RequiredStatus >() { return SbkPySide2_QtSqlTypes[SBK_QSQLFIELD_REQUIREDSTATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlField >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLFIELD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlIndex >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLINDEX_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlQuery::BatchExecutionMode >() { return SbkPySide2_QtSqlTypes[SBK_QSQLQUERY_BATCHEXECUTIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlQuery >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLQUERY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlQueryModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLQUERYMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLRECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlRelation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLRELATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlRelationalDelegate >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLRELATIONALDELEGATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlRelationalTableModel::JoinMode >() { return SbkPySide2_QtSqlTypes[SBK_QSQLRELATIONALTABLEMODEL_JOINMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlRelationalTableModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLRELATIONALTABLEMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::PySide2_QtSql_QSqlResult_BindingSyntax_Surrogate >() { return SbkPySide2_QtSqlTypes[SBK_QSQLRESULT_BINDINGSYNTAX_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLRESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSqlTableModel::EditStrategy >() { return SbkPySide2_QtSqlTypes[SBK_QSQLTABLEMODEL_EDITSTRATEGY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSqlTableModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtSqlTypes[SBK_QSQLTABLEMODEL_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTSQL_PYTHON_H

