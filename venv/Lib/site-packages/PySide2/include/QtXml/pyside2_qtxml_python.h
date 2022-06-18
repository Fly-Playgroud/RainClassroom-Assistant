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


#ifndef SBK_QTXML_PYTHON_H
#define SBK_QTXML_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtXml/qxml.h>
#include <QtXml/qdom.h>
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
    SBK_QDOMATTR_IDX                                         = 0,
    SBK_QDOMCDATASECTION_IDX                                 = 1,
    SBK_QDOMCHARACTERDATA_IDX                                = 2,
    SBK_QDOMCOMMENT_IDX                                      = 3,
    SBK_QDOMDOCUMENT_IDX                                     = 4,
    SBK_QDOMDOCUMENTFRAGMENT_IDX                             = 5,
    SBK_QDOMDOCUMENTTYPE_IDX                                 = 6,
    SBK_QDOMELEMENT_IDX                                      = 7,
    SBK_QDOMENTITY_IDX                                       = 8,
    SBK_QDOMENTITYREFERENCE_IDX                              = 9,
    SBK_QDOMIMPLEMENTATION_INVALIDDATAPOLICY_IDX             = 11,
    SBK_QDOMIMPLEMENTATION_IDX                               = 10,
    SBK_QDOMNAMEDNODEMAP_IDX                                 = 12,
    SBK_QDOMNODE_NODETYPE_IDX                                = 15,
    SBK_QDOMNODE_ENCODINGPOLICY_IDX                          = 14,
    SBK_QDOMNODE_IDX                                         = 13,
    SBK_QDOMNODELIST_IDX                                     = 16,
    SBK_QDOMNOTATION_IDX                                     = 17,
    SBK_QDOMPROCESSINGINSTRUCTION_IDX                        = 18,
    SBK_QDOMTEXT_IDX                                         = 19,
    SBK_QXMLATTRIBUTES_IDX                                   = 20,
    SBK_QXMLCONTENTHANDLER_IDX                               = 21,
    SBK_QXMLDTDHANDLER_IDX                                   = 22,
    SBK_QXMLDECLHANDLER_IDX                                  = 23,
    SBK_QXMLDEFAULTHANDLER_IDX                               = 24,
    SBK_QXMLENTITYRESOLVER_IDX                               = 25,
    SBK_QXMLERRORHANDLER_IDX                                 = 26,
    SBK_QXMLINPUTSOURCE_IDX                                  = 27,
    SBK_QXMLLEXICALHANDLER_IDX                               = 28,
    SBK_QXMLLOCATOR_IDX                                      = 29,
    SBK_QXMLNAMESPACESUPPORT_IDX                             = 30,
    SBK_QXMLPARSEEXCEPTION_IDX                               = 31,
    SBK_QXMLREADER_IDX                                       = 32,
    SBK_QXMLSIMPLEREADER_IDX                                 = 33,
    SBK_QtXml_IDX_COUNT                                      = 34
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtXmlTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtXmlModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtXmlTypeConverters;

// Converter indices
enum : int {
    SBK_QTXML_QLIST_QVARIANT_IDX                             = 0, // QList<QVariant >
    SBK_QTXML_QLIST_QSTRING_IDX                              = 1, // QList<QString >
    SBK_QTXML_QMAP_QSTRING_QVARIANT_IDX                      = 2, // QMap<QString,QVariant >
    SBK_QtXml_CONVERTERS_IDX_COUNT                           = 3
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QDomAttr >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMATTR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomCDATASection >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMCDATASECTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomCharacterData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMCHARACTERDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomComment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMCOMMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomDocument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMDOCUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomDocumentFragment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMDOCUMENTFRAGMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomDocumentType >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMDOCUMENTTYPE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomElement >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMELEMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomEntity >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMENTITY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomEntityReference >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMENTITYREFERENCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomImplementation::InvalidDataPolicy >() { return SbkPySide2_QtXmlTypes[SBK_QDOMIMPLEMENTATION_INVALIDDATAPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDomImplementation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMIMPLEMENTATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomNamedNodeMap >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMNAMEDNODEMAP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomNode::NodeType >() { return SbkPySide2_QtXmlTypes[SBK_QDOMNODE_NODETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDomNode::EncodingPolicy >() { return SbkPySide2_QtXmlTypes[SBK_QDOMNODE_ENCODINGPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDomNode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMNODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomNodeList >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMNODELIST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomNotation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMNOTATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomProcessingInstruction >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMPROCESSINGINSTRUCTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDomText >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QDOMTEXT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlAttributes >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLATTRIBUTES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlContentHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLCONTENTHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlDTDHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLDTDHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlDeclHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLDECLHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlDefaultHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLDEFAULTHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlEntityResolver >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLENTITYRESOLVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlErrorHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLERRORHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlInputSource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLINPUTSOURCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlLexicalHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLLEXICALHANDLER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlLocator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLLOCATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlNamespaceSupport >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLNAMESPACESUPPORT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlParseException >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLPARSEEXCEPTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlReader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLREADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlSimpleReader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtXmlTypes[SBK_QXMLSIMPLEREADER_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTXML_PYTHON_H

