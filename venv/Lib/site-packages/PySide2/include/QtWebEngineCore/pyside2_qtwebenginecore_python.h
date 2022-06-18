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


#ifndef SBK_QTWEBENGINECORE_PYTHON_H
#define SBK_QTWEBENGINECORE_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>
#include <pyside2_qtnetwork_python.h>

// Bound library includes
#include <QtWebEngineCore/qwebengineurlrequestinfo.h>
#include <QtWebEngineCore/qwebengineurlschemehandler.h>
#include <QtWebEngineCore/qwebengineurlscheme.h>
#include <QtWebEngineCore/qwebenginecookiestore.h>
#include <QtWebEngineCore/qwebengineurlrequestjob.h>
#include <QtWebEngineCore/qwebengineurlrequestinterceptor.h>
#include <QtWebEngineCore/qwebenginehttprequest.h>
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
    SBK_QWEBENGINECOOKIESTORE_IDX                            = 1,
    SBK_QWEBENGINEHTTPREQUEST_METHOD_IDX                     = 3,
    SBK_QWEBENGINEHTTPREQUEST_IDX                            = 2,
    SBK_QWEBENGINEURLREQUESTINFO_RESOURCETYPE_IDX            = 6,
    SBK_QWEBENGINEURLREQUESTINFO_NAVIGATIONTYPE_IDX          = 5,
    SBK_QWEBENGINEURLREQUESTINFO_IDX                         = 4,
    SBK_QWEBENGINEURLREQUESTINTERCEPTOR_IDX                  = 7,
    SBK_QWEBENGINEURLREQUESTJOB_ERROR_IDX                    = 9,
    SBK_QWEBENGINEURLREQUESTJOB_IDX                          = 8,
    SBK_QWEBENGINEURLSCHEME_SYNTAX_IDX                       = 13,
    SBK_QWEBENGINEURLSCHEME_SPECIALPORT_IDX                  = 12,
    SBK_QWEBENGINEURLSCHEME_FLAG_IDX                         = 11,
    SBK_QFLAGS_QWEBENGINEURLSCHEME_FLAG_IDX                  = 0,
    SBK_QWEBENGINEURLSCHEME_IDX                              = 10,
    SBK_QWEBENGINEURLSCHEMEHANDLER_IDX                       = 14,
    SBK_QtWebEngineCore_IDX_COUNT                            = 15
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtWebEngineCoreTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtWebEngineCoreModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtWebEngineCoreTypeConverters;

// Converter indices
enum : int {
    SBK_QTWEBENGINECORE_QLIST_QOBJECTPTR_IDX                 = 0, // const QList<QObject* > &
    SBK_QTWEBENGINECORE_QLIST_QBYTEARRAY_IDX                 = 1, // QList<QByteArray >
    SBK_QTWEBENGINECORE_QVECTOR_QBYTEARRAY_IDX               = 2, // QVector<QByteArray >
    SBK_QTWEBENGINECORE_QMAP_QSTRING_QSTRING_IDX             = 3, // const QMap<QString,QString > &
    SBK_QTWEBENGINECORE_QMAP_QBYTEARRAY_QBYTEARRAY_IDX       = 4, // QMap<QByteArray,QByteArray >
    SBK_QTWEBENGINECORE_QLIST_QVARIANT_IDX                   = 5, // QList<QVariant >
    SBK_QTWEBENGINECORE_QLIST_QSTRING_IDX                    = 6, // QList<QString >
    SBK_QTWEBENGINECORE_QMAP_QSTRING_QVARIANT_IDX            = 7, // QMap<QString,QVariant >
    SBK_QtWebEngineCore_CONVERTERS_IDX_COUNT                 = 8
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QWebEngineCookieStore >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINECOOKIESTORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineHttpRequest::Method >() { return SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEHTTPREQUEST_METHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineHttpRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEHTTPREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestInfo::ResourceType >() { return SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTINFO_RESOURCETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestInfo::NavigationType >() { return SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTINFO_NAVIGATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestInterceptor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTINTERCEPTOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestJob::Error >() { return SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTJOB_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlRequestJob >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEURLREQUESTJOB_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlScheme::Syntax >() { return SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEURLSCHEME_SYNTAX_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlScheme::SpecialPort >() { return SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEURLSCHEME_SPECIALPORT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlScheme::Flag >() { return SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEURLSCHEME_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QWebEngineUrlScheme::Flag> >() { return SbkPySide2_QtWebEngineCoreTypes[SBK_QFLAGS_QWEBENGINEURLSCHEME_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlScheme >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEURLSCHEME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineUrlSchemeHandler >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineCoreTypes[SBK_QWEBENGINEURLSCHEMEHANDLER_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTWEBENGINECORE_PYTHON_H

