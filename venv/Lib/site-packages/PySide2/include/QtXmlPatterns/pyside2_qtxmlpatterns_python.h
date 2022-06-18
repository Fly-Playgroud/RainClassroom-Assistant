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


#ifndef SBK_QTXMLPATTERNS_PYTHON_H
#define SBK_QTXMLPATTERNS_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtXmlPatterns/qabstractxmlreceiver.h>
#include <QtXmlPatterns/qxmlnamepool.h>
#include <QtXmlPatterns/qxmlschemavalidator.h>
#include <QtXmlPatterns/qsourcelocation.h>
#include <QtXmlPatterns/qabstractxmlnodemodel.h>
#include <QtXmlPatterns/qabstractmessagehandler.h>
#include <QtXmlPatterns/qabstracturiresolver.h>
#include <QtXmlPatterns/qxmlformatter.h>
#include <QtXmlPatterns/qxmlquery.h>
#include <QtXmlPatterns/qxmlname.h>
#include <QtXmlPatterns/qxmlserializer.h>
#include <QtXmlPatterns/qxmlresultitems.h>
#include <QtXmlPatterns/qxmlschema.h>
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
    SBK_QABSTRACTMESSAGEHANDLER_IDX                          = 0,
    SBK_QABSTRACTURIRESOLVER_IDX                             = 1,
    SBK_QABSTRACTXMLNODEMODEL_SIMPLEAXIS_IDX                 = 4,
    SBK_QABSTRACTXMLNODEMODEL_NODECOPYSETTING_IDX            = 3,
    SBK_QABSTRACTXMLNODEMODEL_IDX                            = 2,
    SBK_QABSTRACTXMLRECEIVER_IDX                             = 5,
    SBK_QSOURCELOCATION_IDX                                  = 6,
    SBK_QXMLFORMATTER_IDX                                    = 7,
    SBK_QXMLITEM_IDX                                         = 8,
    SBK_QXMLNAME_IDX                                         = 9,
    SBK_QXMLNAMEPOOL_IDX                                     = 10,
    SBK_QXMLNODEMODELINDEX_NODEKIND_IDX                      = 13,
    SBK_QXMLNODEMODELINDEX_DOCUMENTORDER_IDX                 = 12,
    SBK_QXMLNODEMODELINDEX_IDX                               = 11,
    SBK_QXMLQUERY_QUERYLANGUAGE_IDX                          = 15,
    SBK_QXMLQUERY_IDX                                        = 14,
    SBK_QXMLRESULTITEMS_IDX                                  = 16,
    SBK_QXMLSCHEMA_IDX                                       = 17,
    SBK_QXMLSCHEMAVALIDATOR_IDX                              = 18,
    SBK_QXMLSERIALIZER_IDX                                   = 19,
    SBK_QtXmlPatterns_IDX_COUNT                              = 20
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtXmlPatternsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtXmlPatternsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtXmlPatternsTypeConverters;

// Converter indices
enum : int {
    SBK_QTXMLPATTERNS_QLIST_QOBJECTPTR_IDX                   = 0, // const QList<QObject* > &
    SBK_QTXMLPATTERNS_QLIST_QBYTEARRAY_IDX                   = 1, // QList<QByteArray >
    SBK_QTXMLPATTERNS_QVECTOR_QXMLNODEMODELINDEX_IDX         = 2, // QVector<QXmlNodeModelIndex >
    SBK_QTXMLPATTERNS_QVECTOR_QXMLNAME_IDX                   = 3, // QVector<QXmlName >
    SBK_QTXMLPATTERNS_QLIST_QVARIANT_IDX                     = 4, // QList<QVariant >
    SBK_QTXMLPATTERNS_QLIST_QSTRING_IDX                      = 5, // QList<QString >
    SBK_QTXMLPATTERNS_QMAP_QSTRING_QVARIANT_IDX              = 6, // QMap<QString,QVariant >
    SBK_QtXmlPatterns_CONVERTERS_IDX_COUNT                   = 7
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QAbstractMessageHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QABSTRACTMESSAGEHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractUriResolver >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QABSTRACTURIRESOLVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractXmlNodeModel::SimpleAxis >() { return SbkPySide2_QtXmlPatternsTypes[SBK_QABSTRACTXMLNODEMODEL_SIMPLEAXIS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractXmlNodeModel::NodeCopySetting >() { return SbkPySide2_QtXmlPatternsTypes[SBK_QABSTRACTXMLNODEMODEL_NODECOPYSETTING_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractXmlNodeModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QABSTRACTXMLNODEMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractXmlReceiver >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QABSTRACTXMLRECEIVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSourceLocation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QSOURCELOCATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlFormatter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QXMLFORMATTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QXMLITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlName >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QXMLNAME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlNamePool >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QXMLNAMEPOOL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlNodeModelIndex::NodeKind >() { return SbkPySide2_QtXmlPatternsTypes[SBK_QXMLNODEMODELINDEX_NODEKIND_IDX]; }
template<> inline PyTypeObject *SbkType< ::QXmlNodeModelIndex::DocumentOrder >() { return SbkPySide2_QtXmlPatternsTypes[SBK_QXMLNODEMODELINDEX_DOCUMENTORDER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QXmlNodeModelIndex >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QXMLNODEMODELINDEX_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlQuery::QueryLanguage >() { return SbkPySide2_QtXmlPatternsTypes[SBK_QXMLQUERY_QUERYLANGUAGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QXmlQuery >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QXMLQUERY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlResultItems >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QXMLRESULTITEMS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlSchema >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QXMLSCHEMA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlSchemaValidator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QXMLSCHEMAVALIDATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlSerializer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlPatternsTypes[SBK_QXMLSERIALIZER_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTXMLPATTERNS_PYTHON_H

