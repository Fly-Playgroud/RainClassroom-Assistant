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


#ifndef SBK_QTWEBSOCKETS_PYTHON_H
#define SBK_QTWEBSOCKETS_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>
#include <pyside2_qtnetwork_python.h>

// Bound library includes
#include <QtWebSockets/qmaskgenerator.h>
#include <QtWebSockets/qwebsocketcorsauthenticator.h>
#include <QtWebSockets/qwebsocketprotocol.h>
#include <QtWebSockets/qwebsocket.h>
#include <QtWebSockets/qwebsocketserver.h>
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
    SBK_QMASKGENERATOR_IDX                                   = 0,
    SBK_QWEBSOCKET_IDX                                       = 1,
    SBK_QWEBSOCKETCORSAUTHENTICATOR_IDX                      = 2,
    SBK_QWEBSOCKETPROTOCOL_VERSION_IDX                       = 5,
    SBK_QWEBSOCKETPROTOCOL_CLOSECODE_IDX                     = 4,
    SBK_QtWebSocketsQWEBSOCKETPROTOCOL_IDX                   = 3,
    SBK_QWEBSOCKETSERVER_SSLMODE_IDX                         = 7,
    SBK_QWEBSOCKETSERVER_IDX                                 = 6,
    SBK_QtWebSockets_IDX_COUNT                               = 8
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtWebSocketsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtWebSocketsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtWebSocketsTypeConverters;

// Converter indices
enum : int {
    SBK_QTWEBSOCKETS_QLIST_QOBJECTPTR_IDX                    = 0, // const QList<QObject* > &
    SBK_QTWEBSOCKETS_QLIST_QBYTEARRAY_IDX                    = 1, // QList<QByteArray >
    SBK_QTWEBSOCKETS_QLIST_QWEBSOCKETPROTOCOL_VERSION_IDX    = 2, // QList<QWebSocketProtocol::Version >
    SBK_QTWEBSOCKETS_QLIST_QVARIANT_IDX                      = 3, // QList<QVariant >
    SBK_QTWEBSOCKETS_QLIST_QSTRING_IDX                       = 4, // QList<QString >
    SBK_QTWEBSOCKETS_QMAP_QSTRING_QVARIANT_IDX               = 5, // QMap<QString,QVariant >
    SBK_QtWebSockets_CONVERTERS_IDX_COUNT                    = 6
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QMaskGenerator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebSocketsTypes[SBK_QMASKGENERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebSocket >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebSocketsTypes[SBK_QWEBSOCKET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebSocketCorsAuthenticator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebSocketsTypes[SBK_QWEBSOCKETCORSAUTHENTICATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebSocketProtocol::Version >() { return SbkPySide2_QtWebSocketsTypes[SBK_QWEBSOCKETPROTOCOL_VERSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebSocketProtocol::CloseCode >() { return SbkPySide2_QtWebSocketsTypes[SBK_QWEBSOCKETPROTOCOL_CLOSECODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebSocketServer::SslMode >() { return SbkPySide2_QtWebSocketsTypes[SBK_QWEBSOCKETSERVER_SSLMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebSocketServer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebSocketsTypes[SBK_QWEBSOCKETSERVER_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTWEBSOCKETS_PYTHON_H

