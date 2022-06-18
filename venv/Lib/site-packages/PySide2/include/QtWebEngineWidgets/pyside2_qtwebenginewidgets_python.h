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


#ifndef SBK_QTWEBENGINEWIDGETS_PYTHON_H
#define SBK_QTWEBENGINEWIDGETS_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>
#include <pyside2_qtgui_python.h>
#include <pyside2_qtwidgets_python.h>
#include <pyside2_qtnetwork_python.h>
#include <pyside2_qtwebchannel_python.h>
#include <pyside2_qtwebenginecore_python.h>
#include <pyside2_qtprintsupport_python.h>

// Bound library includes
#include <QtWebEngineWidgets/qwebenginescriptcollection.h>
#include <QtWebEngineWidgets/qwebenginecontextmenudata.h>
#include <QtWebEngineWidgets/qwebenginescript.h>
#include <QtWebEngineWidgets/qwebengineprofile.h>
#include <QtWebEngineWidgets/qwebenginehistory.h>
#include <QtWebEngineWidgets/qwebenginefullscreenrequest.h>
#include <QtWebEngineWidgets/qwebenginepage.h>
#include <QtWebEngineWidgets/qwebengineview.h>
#include <QtWebEngineWidgets/qwebenginesettings.h>
#include <QtWebEngineWidgets/qwebenginecertificateerror.h>
#include <QtWebEngineWidgets/qwebenginedownloaditem.h>
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
    SBK_QWEBENGINECERTIFICATEERROR_ERROR_IDX                 = 4,
    SBK_QWEBENGINECERTIFICATEERROR_IDX                       = 3,
    SBK_QWEBENGINECONTEXTMENUDATA_MEDIATYPE_IDX              = 8,
    SBK_QWEBENGINECONTEXTMENUDATA_MEDIAFLAG_IDX              = 7,
    SBK_QFLAGS_QWEBENGINECONTEXTMENUDATA_MEDIAFLAG_IDX       = 1,
    SBK_QWEBENGINECONTEXTMENUDATA_EDITFLAG_IDX               = 6,
    SBK_QFLAGS_QWEBENGINECONTEXTMENUDATA_EDITFLAG_IDX        = 0,
    SBK_QWEBENGINECONTEXTMENUDATA_IDX                        = 5,
    SBK_QWEBENGINEDOWNLOADITEM_DOWNLOADSTATE_IDX             = 11,
    SBK_QWEBENGINEDOWNLOADITEM_SAVEPAGEFORMAT_IDX            = 13,
    SBK_QWEBENGINEDOWNLOADITEM_DOWNLOADINTERRUPTREASON_IDX   = 10,
    SBK_QWEBENGINEDOWNLOADITEM_DOWNLOADTYPE_IDX              = 12,
    SBK_QWEBENGINEDOWNLOADITEM_IDX                           = 9,
    SBK_QWEBENGINEFULLSCREENREQUEST_IDX                      = 14,
    SBK_QWEBENGINEHISTORY_IDX                                = 15,
    SBK_QWEBENGINEHISTORYITEM_IDX                            = 16,
    SBK_QWEBENGINEPAGE_WEBACTION_IDX                         = 26,
    SBK_QWEBENGINEPAGE_FINDFLAG_IDX                          = 20,
    SBK_QFLAGS_QWEBENGINEPAGE_FINDFLAG_IDX                   = 2,
    SBK_QWEBENGINEPAGE_WEBWINDOWTYPE_IDX                     = 27,
    SBK_QWEBENGINEPAGE_PERMISSIONPOLICY_IDX                  = 24,
    SBK_QWEBENGINEPAGE_NAVIGATIONTYPE_IDX                    = 23,
    SBK_QWEBENGINEPAGE_FEATURE_IDX                           = 18,
    SBK_QWEBENGINEPAGE_FILESELECTIONMODE_IDX                 = 19,
    SBK_QWEBENGINEPAGE_JAVASCRIPTCONSOLEMESSAGELEVEL_IDX     = 21,
    SBK_QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_IDX    = 25,
    SBK_QWEBENGINEPAGE_LIFECYCLESTATE_IDX                    = 22,
    SBK_QWEBENGINEPAGE_IDX                                   = 17,
    SBK_QWEBENGINEPROFILE_HTTPCACHETYPE_IDX                  = 29,
    SBK_QWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_IDX        = 30,
    SBK_QWEBENGINEPROFILE_IDX                                = 28,
    SBK_QWEBENGINESCRIPT_INJECTIONPOINT_IDX                  = 32,
    SBK_QWEBENGINESCRIPT_SCRIPTWORLDID_IDX                   = 33,
    SBK_QWEBENGINESCRIPT_IDX                                 = 31,
    SBK_QWEBENGINESCRIPTCOLLECTION_IDX                       = 34,
    SBK_QWEBENGINESETTINGS_FONTFAMILY_IDX                    = 36,
    SBK_QWEBENGINESETTINGS_WEBATTRIBUTE_IDX                  = 39,
    SBK_QWEBENGINESETTINGS_FONTSIZE_IDX                      = 37,
    SBK_QWEBENGINESETTINGS_UNKNOWNURLSCHEMEPOLICY_IDX        = 38,
    SBK_QWEBENGINESETTINGS_IDX                               = 35,
    SBK_QWEBENGINEVIEW_IDX                                   = 40,
    SBK_QtWebEngineWidgets_IDX_COUNT                         = 41
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtWebEngineWidgetsTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtWebEngineWidgetsModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtWebEngineWidgetsTypeConverters;

// Converter indices
enum : int {
    SBK_QTWEBENGINEWIDGETS_QLIST_QSSLCERTIFICATE_IDX         = 0, // QList<QSslCertificate >
    SBK_QTWEBENGINEWIDGETS_QLIST_QOBJECTPTR_IDX              = 1, // const QList<QObject* > &
    SBK_QTWEBENGINEWIDGETS_QLIST_QBYTEARRAY_IDX              = 2, // QList<QByteArray >
    SBK_QTWEBENGINEWIDGETS_QLIST_QWEBENGINEHISTORYITEM_IDX   = 3, // QList<QWebEngineHistoryItem >
    SBK_QTWEBENGINEWIDGETS_QLIST_QURL_IDX                    = 4, // const QList<QUrl > &
    SBK_QTWEBENGINEWIDGETS_QLIST_QWEBENGINESCRIPT_IDX        = 5, // QList<QWebEngineScript >
    SBK_QTWEBENGINEWIDGETS_QLIST_QACTIONPTR_IDX              = 6, // QList<QAction* >
    SBK_QTWEBENGINEWIDGETS_QLIST_QVARIANT_IDX                = 7, // QList<QVariant >
    SBK_QTWEBENGINEWIDGETS_QLIST_QSTRING_IDX                 = 8, // QList<QString >
    SBK_QTWEBENGINEWIDGETS_QMAP_QSTRING_QVARIANT_IDX         = 9, // QMap<QString,QVariant >
    SBK_QtWebEngineWidgets_CONVERTERS_IDX_COUNT              = 10
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QWebEngineCertificateError::Error >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINECERTIFICATEERROR_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineCertificateError >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINECERTIFICATEERROR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineContextMenuData::MediaType >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINECONTEXTMENUDATA_MEDIATYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineContextMenuData::MediaFlag >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINECONTEXTMENUDATA_MEDIAFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QWebEngineContextMenuData::MediaFlag> >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QFLAGS_QWEBENGINECONTEXTMENUDATA_MEDIAFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineContextMenuData::EditFlag >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINECONTEXTMENUDATA_EDITFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QWebEngineContextMenuData::EditFlag> >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QFLAGS_QWEBENGINECONTEXTMENUDATA_EDITFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineContextMenuData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINECONTEXTMENUDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineDownloadItem::DownloadState >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEDOWNLOADITEM_DOWNLOADSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineDownloadItem::SavePageFormat >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEDOWNLOADITEM_SAVEPAGEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineDownloadItem::DownloadInterruptReason >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEDOWNLOADITEM_DOWNLOADINTERRUPTREASON_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineDownloadItem::DownloadType >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEDOWNLOADITEM_DOWNLOADTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineDownloadItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEDOWNLOADITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineFullScreenRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEFULLSCREENREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineHistory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEHISTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineHistoryItem >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEHISTORYITEM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::WebAction >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPAGE_WEBACTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::FindFlag >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPAGE_FINDFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QWebEnginePage::FindFlag> >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QFLAGS_QWEBENGINEPAGE_FINDFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::WebWindowType >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPAGE_WEBWINDOWTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::PermissionPolicy >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPAGE_PERMISSIONPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::NavigationType >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPAGE_NAVIGATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::Feature >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPAGE_FEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::FileSelectionMode >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPAGE_FILESELECTIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::JavaScriptConsoleMessageLevel >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPAGE_JAVASCRIPTCONSOLEMESSAGELEVEL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::RenderProcessTerminationStatus >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage::LifecycleState >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPAGE_LIFECYCLESTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEnginePage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineProfile::HttpCacheType >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPROFILE_HTTPCACHETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineProfile::PersistentCookiesPolicy >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineProfile >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEPROFILE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineScript::InjectionPoint >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINESCRIPT_INJECTIONPOINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineScript::ScriptWorldId >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINESCRIPT_SCRIPTWORLDID_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineScript >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINESCRIPT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineScriptCollection >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINESCRIPTCOLLECTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineSettings::FontFamily >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINESETTINGS_FONTFAMILY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineSettings::WebAttribute >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINESETTINGS_WEBATTRIBUTE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineSettings::FontSize >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINESETTINGS_FONTSIZE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineSettings::UnknownUrlSchemePolicy >() { return SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINESETTINGS_UNKNOWNURLSCHEMEPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QWebEngineSettings >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINESETTINGS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWebEngineView >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtWebEngineWidgetsTypes[SBK_QWEBENGINEVIEW_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTWEBENGINEWIDGETS_PYTHON_H

