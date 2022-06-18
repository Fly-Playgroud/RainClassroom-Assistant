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


#ifndef SBK_QTNETWORK_PYTHON_H
#define SBK_QTNETWORK_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtNetwork/qnetworkconfigmanager.h>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtNetwork/qsslcertificate.h>
#include <QtNetwork/qnetworkcookie.h>
#include <QtNetwork/qabstractnetworkcache.h>
#include <QtNetwork/qnetworkdiskcache.h>
#include <QtNetwork/qnetworkdatagram.h>
#include <QtNetwork/qsslkey.h>
#include <QtNetwork/qabstractsocket.h>
#include <QtNetwork/qsslerror.h>
#include <QtNetwork/qnetworkreply.h>
#include <QtNetwork/qnetworkproxy.h>
#include <QtNetwork/qnetworksession.h>
#include <QtNetwork/qhostinfo.h>
#include <QtNetwork/qlocalserver.h>
#include <QtNetwork/qudpsocket.h>
#include <QtNetwork/qtcpserver.h>
#include <QtNetwork/qsslconfiguration.h>
#include <QtNetwork/qdnslookup.h>
#include <QtNetwork/qsslcertificateextension.h>
#include <QtNetwork/qdtls.h>
#include <QtNetwork/qpassworddigestor.h>
#include <QtNetwork/qhostaddress.h>
#include <QtNetwork/qhttpmultipart.h>
#include <QtNetwork/qnetworkconfiguration.h>
#include <QtNetwork/qocspresponse.h>
#include <QtNetwork/qauthenticator.h>
#include <QtNetwork/qnetworkinterface.h>
#include <QtNetwork/qssldiffiehellmanparameters.h>
#include <QtNetwork/qssl.h>
#include <QtNetwork/qlocalsocket.h>
#include <QtNetwork/qsslsocket.h>
#include <QtNetwork/qsslpresharedkeyauthenticator.h>
#include <QtNetwork/qtcpsocket.h>
#include <QtNetwork/qsslcipher.h>
#include <QtNetwork/qhstspolicy.h>
#include <QtNetwork/qnetworkcookiejar.h>
#include <QtNetwork/qnetworkrequest.h>
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
    SBK_QABSTRACTNETWORKCACHE_IDX                            = 0,
    SBK_QABSTRACTSOCKET_SOCKETTYPE_IDX                       = 8,
    SBK_QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_IDX             = 3,
    SBK_QABSTRACTSOCKET_SOCKETERROR_IDX                      = 5,
    SBK_QABSTRACTSOCKET_SOCKETSTATE_IDX                      = 7,
    SBK_QABSTRACTSOCKET_SOCKETOPTION_IDX                     = 6,
    SBK_QABSTRACTSOCKET_BINDFLAG_IDX                         = 2,
    SBK_QFLAGS_QABSTRACTSOCKET_BINDFLAG_IDX                  = 21,
    SBK_QABSTRACTSOCKET_PAUSEMODE_IDX                        = 4,
    SBK_QFLAGS_QABSTRACTSOCKET_PAUSEMODE_IDX                 = 22,
    SBK_QABSTRACTSOCKET_IDX                                  = 1,
    SBK_QAUTHENTICATOR_IDX                                   = 9,
    SBK_QDNSDOMAINNAMERECORD_IDX                             = 10,
    SBK_QDNSHOSTADDRESSRECORD_IDX                            = 11,
    SBK_QDNSLOOKUP_ERROR_IDX                                 = 13,
    SBK_QDNSLOOKUP_TYPE_IDX                                  = 14,
    SBK_QDNSLOOKUP_IDX                                       = 12,
    SBK_QDNSMAILEXCHANGERECORD_IDX                           = 15,
    SBK_QDNSSERVICERECORD_IDX                                = 16,
    SBK_QDNSTEXTRECORD_IDX                                   = 17,
    SBK_QDTLS_HANDSHAKESTATE_IDX                             = 19,
    SBK_QDTLS_IDX                                            = 18,
    SBK_QHOSTADDRESS_SPECIALADDRESS_IDX                      = 34,
    SBK_QHOSTADDRESS_CONVERSIONMODEFLAG_IDX                  = 33,
    SBK_QFLAGS_QHOSTADDRESS_CONVERSIONMODEFLAG_IDX           = 23,
    SBK_QHOSTADDRESS_IDX                                     = 32,
    SBK_QHOSTINFO_HOSTINFOERROR_IDX                          = 36,
    SBK_QHOSTINFO_IDX                                        = 35,
    SBK_QHSTSPOLICY_POLICYFLAG_IDX                           = 38,
    SBK_QFLAGS_QHSTSPOLICY_POLICYFLAG_IDX                    = 24,
    SBK_QHSTSPOLICY_IDX                                      = 37,
    SBK_QHTTPMULTIPART_CONTENTTYPE_IDX                       = 40,
    SBK_QHTTPMULTIPART_IDX                                   = 39,
    SBK_QHTTPPART_IDX                                        = 41,
    SBK_QIPV6ADDRESS_IDX                                     = 42,
    SBK_QLOCALSERVER_SOCKETOPTION_IDX                        = 44,
    SBK_QFLAGS_QLOCALSERVER_SOCKETOPTION_IDX                 = 25,
    SBK_QLOCALSERVER_IDX                                     = 43,
    SBK_QLOCALSOCKET_LOCALSOCKETERROR_IDX                    = 46,
    SBK_QLOCALSOCKET_LOCALSOCKETSTATE_IDX                    = 47,
    SBK_QLOCALSOCKET_IDX                                     = 45,
    SBK_QNETWORKACCESSMANAGER_OPERATION_IDX                  = 50,
    SBK_QNETWORKACCESSMANAGER_NETWORKACCESSIBILITY_IDX       = 49,
    SBK_QNETWORKACCESSMANAGER_IDX                            = 48,
    SBK_QNETWORKADDRESSENTRY_DNSELIGIBILITYSTATUS_IDX        = 52,
    SBK_QNETWORKADDRESSENTRY_IDX                             = 51,
    SBK_QNETWORKCACHEMETADATA_IDX                            = 53,
    SBK_QNETWORKCONFIGURATION_TYPE_IDX                       = 58,
    SBK_QNETWORKCONFIGURATION_PURPOSE_IDX                    = 56,
    SBK_QNETWORKCONFIGURATION_STATEFLAG_IDX                  = 57,
    SBK_QFLAGS_QNETWORKCONFIGURATION_STATEFLAG_IDX           = 26,
    SBK_QNETWORKCONFIGURATION_BEARERTYPE_IDX                 = 55,
    SBK_QNETWORKCONFIGURATION_IDX                            = 54,
    SBK_QNETWORKCONFIGURATIONMANAGER_CAPABILITY_IDX          = 60,
    SBK_QFLAGS_QNETWORKCONFIGURATIONMANAGER_CAPABILITY_IDX   = 27,
    SBK_QNETWORKCONFIGURATIONMANAGER_IDX                     = 59,
    SBK_QNETWORKCOOKIE_RAWFORM_IDX                           = 62,
    SBK_QNETWORKCOOKIE_IDX                                   = 61,
    SBK_QNETWORKCOOKIEJAR_IDX                                = 63,
    SBK_QNETWORKDATAGRAM_IDX                                 = 64,
    SBK_QNETWORKDISKCACHE_IDX                                = 65,
    SBK_QNETWORKINTERFACE_INTERFACEFLAG_IDX                  = 67,
    SBK_QFLAGS_QNETWORKINTERFACE_INTERFACEFLAG_IDX           = 28,
    SBK_QNETWORKINTERFACE_INTERFACETYPE_IDX                  = 68,
    SBK_QNETWORKINTERFACE_IDX                                = 66,
    SBK_QNETWORKPROXY_PROXYTYPE_IDX                          = 71,
    SBK_QNETWORKPROXY_CAPABILITY_IDX                         = 70,
    SBK_QFLAGS_QNETWORKPROXY_CAPABILITY_IDX                  = 29,
    SBK_QNETWORKPROXY_IDX                                    = 69,
    SBK_QNETWORKPROXYFACTORY_IDX                             = 72,
    SBK_QNETWORKPROXYQUERY_QUERYTYPE_IDX                     = 74,
    SBK_QNETWORKPROXYQUERY_IDX                               = 73,
    SBK_QNETWORKREPLY_NETWORKERROR_IDX                       = 76,
    SBK_QNETWORKREPLY_IDX                                    = 75,
    SBK_QNETWORKREQUEST_KNOWNHEADERS_IDX                     = 80,
    SBK_QNETWORKREQUEST_ATTRIBUTE_IDX                        = 78,
    SBK_QNETWORKREQUEST_CACHELOADCONTROL_IDX                 = 79,
    SBK_QNETWORKREQUEST_LOADCONTROL_IDX                      = 81,
    SBK_QNETWORKREQUEST_PRIORITY_IDX                         = 82,
    SBK_QNETWORKREQUEST_REDIRECTPOLICY_IDX                   = 83,
    SBK_QNETWORKREQUEST_TRANSFERTIMEOUTCONSTANT_IDX          = 84,
    SBK_QNETWORKREQUEST_IDX                                  = 77,
    SBK_QNETWORKSESSION_STATE_IDX                            = 87,
    SBK_QNETWORKSESSION_SESSIONERROR_IDX                     = 86,
    SBK_QNETWORKSESSION_USAGEPOLICY_IDX                      = 88,
    SBK_QFLAGS_QNETWORKSESSION_USAGEPOLICY_IDX               = 30,
    SBK_QNETWORKSESSION_IDX                                  = 85,
    SBK_QOCSPRESPONSE_IDX                                    = 90,
    SBK_QtNetworkQPASSWORDDIGESTOR_IDX                       = 92,
    SBK_QSSL_KEYTYPE_IDX                                     = 97,
    SBK_QSSL_ENCODINGFORMAT_IDX                              = 95,
    SBK_QSSL_KEYALGORITHM_IDX                                = 96,
    SBK_QSSL_ALTERNATIVENAMEENTRYTYPE_IDX                    = 94,
    SBK_QSSL_SSLPROTOCOL_IDX                                 = 99,
    SBK_QSSL_SSLOPTION_IDX                                   = 98,
    SBK_QFLAGS_QSSL_SSLOPTION_IDX                            = 31,
    SBK_QtNetworkQSSL_IDX                                    = 93,
    SBK_QSSLCERTIFICATE_SUBJECTINFO_IDX                      = 102,
    SBK_QSSLCERTIFICATE_PATTERNSYNTAX_IDX                    = 101,
    SBK_QSSLCERTIFICATE_IDX                                  = 100,
    SBK_QSSLCERTIFICATEEXTENSION_IDX                         = 103,
    SBK_QSSLCIPHER_IDX                                       = 104,
    SBK_QSSLCONFIGURATION_NEXTPROTOCOLNEGOTIATIONSTATUS_IDX  = 106,
    SBK_QSSLCONFIGURATION_IDX                                = 105,
    SBK_QSSLDIFFIEHELLMANPARAMETERS_ERROR_IDX                = 108,
    SBK_QSSLDIFFIEHELLMANPARAMETERS_IDX                      = 107,
    SBK_QSSLERROR_SSLERROR_IDX                               = 110,
    SBK_QSSLERROR_IDX                                        = 109,
    SBK_QSSLKEY_IDX                                          = 111,
    SBK_QSSLPRESHAREDKEYAUTHENTICATOR_IDX                    = 112,
    SBK_QSSLSOCKET_SSLMODE_IDX                               = 115,
    SBK_QSSLSOCKET_PEERVERIFYMODE_IDX                        = 114,
    SBK_QSSLSOCKET_IDX                                       = 113,
    SBK_QTCPSERVER_IDX                                       = 116,
    SBK_QTCPSOCKET_IDX                                       = 117,
    SBK_QUDPSOCKET_IDX                                       = 118,
    SBK_QDTLSERROR_IDX                                       = 20,
    SBK_QOCSPCERTIFICATESTATUS_IDX                           = 89,
    SBK_QOCSPREVOCATIONREASON_IDX                            = 91,
    SBK_QtNetwork_IDX_COUNT                                  = 119
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtNetworkTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtNetworkModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtNetworkTypeConverters;

// Converter indices
enum : int {
    SBK_QTNETWORK_QLIST_QOBJECTPTR_IDX                       = 0, // const QList<QObject* > &
    SBK_QTNETWORK_QLIST_QBYTEARRAY_IDX                       = 1, // QList<QByteArray >
    SBK_QTNETWORK_QHASH_QSTRING_QVARIANT_IDX                 = 2, // QHash<QString,QVariant >
    SBK_QTNETWORK_QLIST_QDNSDOMAINNAMERECORD_IDX             = 3, // QList<QDnsDomainNameRecord >
    SBK_QTNETWORK_QLIST_QDNSHOSTADDRESSRECORD_IDX            = 4, // QList<QDnsHostAddressRecord >
    SBK_QTNETWORK_QLIST_QDNSMAILEXCHANGERECORD_IDX           = 5, // QList<QDnsMailExchangeRecord >
    SBK_QTNETWORK_QLIST_QDNSSERVICERECORD_IDX                = 6, // QList<QDnsServiceRecord >
    SBK_QTNETWORK_QLIST_QDNSTEXTRECORD_IDX                   = 7, // QList<QDnsTextRecord >
    SBK_QTNETWORK_QVECTOR_QSSLERROR_IDX                      = 8, // const QVector<QSslError > &
    SBK_QTNETWORK_QPAIR_QHOSTADDRESS_INT_IDX                 = 9, // const QPair<QHostAddress,int > &
    SBK_QTNETWORK_QLIST_QHOSTADDRESS_IDX                     = 10, // QList<QHostAddress >
    SBK_QTNETWORK_QVECTOR_QHSTSPOLICY_IDX                    = 11, // const QVector<QHstsPolicy > &
    SBK_QTNETWORK_QLIST_QSSLERROR_IDX                        = 12, // const QList<QSslError > &
    SBK_QTNETWORK_QHASH_QNETWORKREQUEST_ATTRIBUTE_QVARIANT_IDX = 13, // QHash<QNetworkRequest::Attribute,QVariant >
    SBK_QTNETWORK_QPAIR_QBYTEARRAY_QBYTEARRAY_IDX            = 14, // QPair<QByteArray,QByteArray >
    SBK_QTNETWORK_QLIST_QPAIR_QBYTEARRAY_QBYTEARRAY_IDX      = 15, // QList<QPair< QByteArray,QByteArray > >
    SBK_QTNETWORK_QLIST_QNETWORKCONFIGURATION_IDX            = 16, // QList<QNetworkConfiguration >
    SBK_QTNETWORK_QLIST_QNETWORKCOOKIE_IDX                   = 17, // QList<QNetworkCookie >
    SBK_QTNETWORK_QLIST_QNETWORKADDRESSENTRY_IDX             = 18, // QList<QNetworkAddressEntry >
    SBK_QTNETWORK_QLIST_QNETWORKINTERFACE_IDX                = 19, // QList<QNetworkInterface >
    SBK_QTNETWORK_QLIST_QNETWORKPROXY_IDX                    = 20, // QList<QNetworkProxy >
    SBK_QTNETWORK_QLIST_QSSLCERTIFICATEEXTENSION_IDX         = 21, // QList<QSslCertificateExtension >
    SBK_QTNETWORK_QLIST_QSSLCERTIFICATE_IDX                  = 22, // QList<QSslCertificate >
    SBK_QTNETWORK_QMULTIMAP_QSSL_ALTERNATIVENAMEENTRYTYPE_QSTRING_IDX = 23, // QMultiMap<QSsl::AlternativeNameEntryType,QString >
    SBK_QTNETWORK_QMAP_QBYTEARRAY_QVARIANT_IDX               = 24, // QMap<QByteArray,QVariant >
    SBK_QTNETWORK_QLIST_QSSLCIPHER_IDX                       = 25, // QList<QSslCipher >
    SBK_QTNETWORK_QVECTOR_QOCSPRESPONSE_IDX                  = 26, // QVector<QOcspResponse >
    SBK_QTNETWORK_QLIST_QVARIANT_IDX                         = 27, // QList<QVariant >
    SBK_QTNETWORK_QLIST_QSTRING_IDX                          = 28, // QList<QString >
    SBK_QTNETWORK_QMAP_QSTRING_QVARIANT_IDX                  = 29, // QMap<QString,QVariant >
    SBK_QtNetwork_CONVERTERS_IDX_COUNT                       = 30
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QDtlsError >() { return SbkPySide2_QtNetworkTypes[SBK_QDTLSERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOcspCertificateStatus >() { return SbkPySide2_QtNetworkTypes[SBK_QOCSPCERTIFICATESTATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOcspRevocationReason >() { return SbkPySide2_QtNetworkTypes[SBK_QOCSPREVOCATIONREASON_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractNetworkCache >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QABSTRACTNETWORKCACHE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractSocket::SocketType >() { return SbkPySide2_QtNetworkTypes[SBK_QABSTRACTSOCKET_SOCKETTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractSocket::NetworkLayerProtocol >() { return SbkPySide2_QtNetworkTypes[SBK_QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractSocket::SocketError >() { return SbkPySide2_QtNetworkTypes[SBK_QABSTRACTSOCKET_SOCKETERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractSocket::SocketState >() { return SbkPySide2_QtNetworkTypes[SBK_QABSTRACTSOCKET_SOCKETSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractSocket::SocketOption >() { return SbkPySide2_QtNetworkTypes[SBK_QABSTRACTSOCKET_SOCKETOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractSocket::BindFlag >() { return SbkPySide2_QtNetworkTypes[SBK_QABSTRACTSOCKET_BINDFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QAbstractSocket::BindFlag> >() { return SbkPySide2_QtNetworkTypes[SBK_QFLAGS_QABSTRACTSOCKET_BINDFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractSocket::PauseMode >() { return SbkPySide2_QtNetworkTypes[SBK_QABSTRACTSOCKET_PAUSEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QAbstractSocket::PauseMode> >() { return SbkPySide2_QtNetworkTypes[SBK_QFLAGS_QABSTRACTSOCKET_PAUSEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractSocket >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QABSTRACTSOCKET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAuthenticator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QAUTHENTICATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDnsDomainNameRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QDNSDOMAINNAMERECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDnsHostAddressRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QDNSHOSTADDRESSRECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDnsLookup::Error >() { return SbkPySide2_QtNetworkTypes[SBK_QDNSLOOKUP_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDnsLookup::Type >() { return SbkPySide2_QtNetworkTypes[SBK_QDNSLOOKUP_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDnsLookup >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QDNSLOOKUP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDnsMailExchangeRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QDNSMAILEXCHANGERECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDnsServiceRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QDNSSERVICERECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDnsTextRecord >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QDNSTEXTRECORD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDtls::HandshakeState >() { return SbkPySide2_QtNetworkTypes[SBK_QDTLS_HANDSHAKESTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDtls >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QDTLS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHostAddress::SpecialAddress >() { return SbkPySide2_QtNetworkTypes[SBK_QHOSTADDRESS_SPECIALADDRESS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QHostAddress::ConversionModeFlag >() { return SbkPySide2_QtNetworkTypes[SBK_QHOSTADDRESS_CONVERSIONMODEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QHostAddress::ConversionModeFlag> >() { return SbkPySide2_QtNetworkTypes[SBK_QFLAGS_QHOSTADDRESS_CONVERSIONMODEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QHostAddress >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QHOSTADDRESS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHostInfo::HostInfoError >() { return SbkPySide2_QtNetworkTypes[SBK_QHOSTINFO_HOSTINFOERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QHostInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QHOSTINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHstsPolicy::PolicyFlag >() { return SbkPySide2_QtNetworkTypes[SBK_QHSTSPOLICY_POLICYFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QHstsPolicy::PolicyFlag> >() { return SbkPySide2_QtNetworkTypes[SBK_QFLAGS_QHSTSPOLICY_POLICYFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QHstsPolicy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QHSTSPOLICY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHttpMultiPart::ContentType >() { return SbkPySide2_QtNetworkTypes[SBK_QHTTPMULTIPART_CONTENTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QHttpMultiPart >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QHTTPMULTIPART_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHttpPart >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QHTTPPART_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIPv6Address >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QIPV6ADDRESS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLocalServer::SocketOption >() { return SbkPySide2_QtNetworkTypes[SBK_QLOCALSERVER_SOCKETOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QLocalServer::SocketOption> >() { return SbkPySide2_QtNetworkTypes[SBK_QFLAGS_QLOCALSERVER_SOCKETOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocalServer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QLOCALSERVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLocalSocket::LocalSocketError >() { return SbkPySide2_QtNetworkTypes[SBK_QLOCALSOCKET_LOCALSOCKETERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocalSocket::LocalSocketState >() { return SbkPySide2_QtNetworkTypes[SBK_QLOCALSOCKET_LOCALSOCKETSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocalSocket >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QLOCALSOCKET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkAccessManager::Operation >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKACCESSMANAGER_OPERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkAccessManager::NetworkAccessibility >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKACCESSMANAGER_NETWORKACCESSIBILITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkAccessManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKACCESSMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkAddressEntry::DnsEligibilityStatus >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKADDRESSENTRY_DNSELIGIBILITYSTATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkAddressEntry >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKADDRESSENTRY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkCacheMetaData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKCACHEMETADATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkConfiguration::Type >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKCONFIGURATION_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkConfiguration::Purpose >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKCONFIGURATION_PURPOSE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkConfiguration::StateFlag >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKCONFIGURATION_STATEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QNetworkConfiguration::StateFlag> >() { return SbkPySide2_QtNetworkTypes[SBK_QFLAGS_QNETWORKCONFIGURATION_STATEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkConfiguration::BearerType >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKCONFIGURATION_BEARERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkConfiguration >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKCONFIGURATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkConfigurationManager::Capability >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKCONFIGURATIONMANAGER_CAPABILITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QNetworkConfigurationManager::Capability> >() { return SbkPySide2_QtNetworkTypes[SBK_QFLAGS_QNETWORKCONFIGURATIONMANAGER_CAPABILITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkConfigurationManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKCONFIGURATIONMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkCookie::RawForm >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKCOOKIE_RAWFORM_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkCookie >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKCOOKIE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkCookieJar >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKCOOKIEJAR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkDatagram >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKDATAGRAM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkDiskCache >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKDISKCACHE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkInterface::InterfaceFlag >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKINTERFACE_INTERFACEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QNetworkInterface::InterfaceFlag> >() { return SbkPySide2_QtNetworkTypes[SBK_QFLAGS_QNETWORKINTERFACE_INTERFACEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkInterface::InterfaceType >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKINTERFACE_INTERFACETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkProxy::ProxyType >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKPROXY_PROXYTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkProxy::Capability >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKPROXY_CAPABILITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QNetworkProxy::Capability> >() { return SbkPySide2_QtNetworkTypes[SBK_QFLAGS_QNETWORKPROXY_CAPABILITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkProxy >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKPROXY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkProxyFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKPROXYFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkProxyQuery::QueryType >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKPROXYQUERY_QUERYTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkProxyQuery >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKPROXYQUERY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkReply::NetworkError >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKREPLY_NETWORKERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkRequest::KnownHeaders >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKREQUEST_KNOWNHEADERS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkRequest::Attribute >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKREQUEST_ATTRIBUTE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkRequest::CacheLoadControl >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKREQUEST_CACHELOADCONTROL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkRequest::LoadControl >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKREQUEST_LOADCONTROL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkRequest::Priority >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKREQUEST_PRIORITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkRequest::RedirectPolicy >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKREQUEST_REDIRECTPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkRequest::TransferTimeoutConstant >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKREQUEST_TRANSFERTIMEOUTCONSTANT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNetworkSession::State >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKSESSION_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkSession::SessionError >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKSESSION_SESSIONERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkSession::UsagePolicy >() { return SbkPySide2_QtNetworkTypes[SBK_QNETWORKSESSION_USAGEPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QNetworkSession::UsagePolicy> >() { return SbkPySide2_QtNetworkTypes[SBK_QFLAGS_QNETWORKSESSION_USAGEPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNetworkSession >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QNETWORKSESSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOcspResponse >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QOCSPRESPONSE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSsl::KeyType >() { return SbkPySide2_QtNetworkTypes[SBK_QSSL_KEYTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSsl::EncodingFormat >() { return SbkPySide2_QtNetworkTypes[SBK_QSSL_ENCODINGFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSsl::KeyAlgorithm >() { return SbkPySide2_QtNetworkTypes[SBK_QSSL_KEYALGORITHM_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSsl::AlternativeNameEntryType >() { return SbkPySide2_QtNetworkTypes[SBK_QSSL_ALTERNATIVENAMEENTRYTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSsl::SslProtocol >() { return SbkPySide2_QtNetworkTypes[SBK_QSSL_SSLPROTOCOL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSsl::SslOption >() { return SbkPySide2_QtNetworkTypes[SBK_QSSL_SSLOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QSsl::SslOption> >() { return SbkPySide2_QtNetworkTypes[SBK_QFLAGS_QSSL_SSLOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSslCertificate::SubjectInfo >() { return SbkPySide2_QtNetworkTypes[SBK_QSSLCERTIFICATE_SUBJECTINFO_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSslCertificate::PatternSyntax >() { return SbkPySide2_QtNetworkTypes[SBK_QSSLCERTIFICATE_PATTERNSYNTAX_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSslCertificate >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QSSLCERTIFICATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSslCertificateExtension >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QSSLCERTIFICATEEXTENSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSslCipher >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QSSLCIPHER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSslConfiguration::NextProtocolNegotiationStatus >() { return SbkPySide2_QtNetworkTypes[SBK_QSSLCONFIGURATION_NEXTPROTOCOLNEGOTIATIONSTATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSslConfiguration >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QSSLCONFIGURATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSslDiffieHellmanParameters::Error >() { return SbkPySide2_QtNetworkTypes[SBK_QSSLDIFFIEHELLMANPARAMETERS_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSslDiffieHellmanParameters >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QSSLDIFFIEHELLMANPARAMETERS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSslError::SslError >() { return SbkPySide2_QtNetworkTypes[SBK_QSSLERROR_SSLERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSslError >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QSSLERROR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSslKey >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QSSLKEY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSslPreSharedKeyAuthenticator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QSSLPRESHAREDKEYAUTHENTICATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSslSocket::SslMode >() { return SbkPySide2_QtNetworkTypes[SBK_QSSLSOCKET_SSLMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSslSocket::PeerVerifyMode >() { return SbkPySide2_QtNetworkTypes[SBK_QSSLSOCKET_PEERVERIFYMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSslSocket >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QSSLSOCKET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTcpServer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QTCPSERVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTcpSocket >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QTCPSOCKET_IDX]); }
template<> inline PyTypeObject *SbkType< ::QUdpSocket >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtNetworkTypes[SBK_QUDPSOCKET_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTNETWORK_PYTHON_H

