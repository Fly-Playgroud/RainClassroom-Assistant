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


#ifndef SBK_QTCORE_PYTHON_H
#define SBK_QTCORE_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Bound library includes
#include <qmessageauthenticationcode.h>
#include <qtransposeproxymodel.h>
#include <qfiledevice.h>
#include <qfileinfo.h>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qsystemsemaphore.h>
#include <qabstractnativeeventfilter.h>
#include <qcborvalue.h>
#include <qwaitcondition.h>
#include <qregularexpression.h>
#include <qversionnumber.h>
#include <qjsonarray.h>
#include <qpoint.h>
#include <qlogging.h>
#include <qdatetime.h>
#include <qsignaltransition.h>
#include <qthread.h>
#include <qtimer.h>
#include <qcborcommon.h>
#include <qparallelanimationgroup.h>
#include <qtextboundaryfinder.h>
#include <qdeadlinetimer.h>
#include <qcommandlineparser.h>
#include <qrandom.h>
#include <QtCore/qbuffer.h>
#include <qpropertyanimation.h>
#include <qrunnable.h>
#include <qwineventnotifier.h>
#include <qtextcodec.h>
#include <qfactoryinterface.h>
#include <qlockfile.h>
#include <qeventloop.h>
#include <qstatemachine.h>
#include <qreadwritelock.h>
#include <qmutex.h>
#include <qmimedata.h>
#include <qcbormap.h>
#include <qdiriterator.h>
#include <qsize.h>
#include <qdatastream.h>
#include <qconcatenatetablesproxymodel.h>
#include <qresource.h>
#include <qabstracttransition.h>
#include <qbytearraymatcher.h>
#include <qanimationgroup.h>
#include <qcollator.h>
#include <qpluginloader.h>
#include <qlibraryinfo.h>
#include <qobjectdefs.h>
#include <qline.h>
#include <qcoreapplication.h>
#include <qjsonvalue.h>
#include <qfinalstate.h>
#include <qtimezone.h>
#include <qabstractproxymodel.h>
#include <qtemporaryfile.h>
#include <qprocess.h>
#include <qcborstreamreader.h>
#include <qcryptographichash.h>
#include <qitemselectionmodel.h>
#include <qcborarray.h>
#include <qcborstream.h>
#include <qstorageinfo.h>
#include <qtranslator.h>
#include <qsocketnotifier.h>
#include <qjsondocument.h>
#include <qsemaphore.h>
#include <qtextstream.h>
#include <qurl.h>
#include <qsortfilterproxymodel.h>
#include <qstandardpaths.h>
#include <qmargins.h>
#include <quuid.h>
#include <qvariantanimation.h>
#include <qabstractitemmodel.h>
#include <qstringlistmodel.h>
#include <qdir.h>
#include <qnamespace.h>
#include <qrect.h>
#include <qsequentialanimationgroup.h>
#include <qeventtransition.h>
#include <qurlquery.h>
#include <qbitarray.h>
#include <qabstracteventdispatcher.h>
#include <qeasingcurve.h>
#include <qxmlstream.h>
#include <qelapsedtimer.h>
#include <qabstractanimation.h>
#include <qsavefile.h>
#include <QList>
#include <qfileselector.h>
#include <qbasictimer.h>
#include <qfile.h>
#include <qfilesystemwatcher.h>
#include <QTextCodec>
#include <qhistorystate.h>
#include <qsignalmapper.h>
#include <qstate.h>
#include <qsysinfo.h>
#include <qtemporarydir.h>
#include <qregexp.h>
#include <qthreadpool.h>
#include <qtimeline.h>
#include <qmimedatabase.h>
#include <qmimetype.h>
#include <qidentityproxymodel.h>
#include <qobject.h>
#include <qabstractstate.h>
#include <qlocale.h>
#include <qpauseanimation.h>
#include <qcalendar.h>
#include <qsettings.h>
#include <qcoreevent.h>
#include <qcommandlineoption.h>
#include <qmetaobject.h>
#include <qfutureinterface.h>
#include <qoperatingsystemversion.h>
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
    SBK_QABSTRACTANIMATION_DIRECTION_IDX                     = 2,
    SBK_QABSTRACTANIMATION_STATE_IDX                         = 3,
    SBK_QABSTRACTANIMATION_DELETIONPOLICY_IDX                = 1,
    SBK_QABSTRACTANIMATION_IDX                               = 0,
    SBK_QABSTRACTEVENTDISPATCHER_IDX                         = 4,
    SBK_QABSTRACTEVENTDISPATCHER_TIMERINFO_IDX               = 5,
    SBK_QABSTRACTITEMMODEL_LAYOUTCHANGEHINT_IDX              = 8,
    SBK_QABSTRACTITEMMODEL_CHECKINDEXOPTION_IDX              = 7,
    SBK_QFLAGS_QABSTRACTITEMMODEL_CHECKINDEXOPTION_IDX       = 96,
    SBK_QABSTRACTITEMMODEL_IDX                               = 6,
    SBK_QABSTRACTLISTMODEL_IDX                               = 9,
    SBK_QABSTRACTNATIVEEVENTFILTER_IDX                       = 10,
    SBK_QABSTRACTPROXYMODEL_IDX                              = 11,
    SBK_QABSTRACTSTATE_IDX                                   = 12,
    SBK_QABSTRACTTABLEMODEL_IDX                              = 13,
    SBK_QABSTRACTTRANSITION_TRANSITIONTYPE_IDX               = 15,
    SBK_QABSTRACTTRANSITION_IDX                              = 14,
    SBK_QANIMATIONGROUP_IDX                                  = 16,
    SBK_QBASICMUTEX_IDX                                      = 17,
    SBK_QBASICTIMER_IDX                                      = 18,
    SBK_QBITARRAY_IDX                                        = 19,
    SBK_QBUFFER_IDX                                          = 20,
    SBK_QBYTEARRAY_BASE64OPTION_IDX                          = 23,
    SBK_QFLAGS_QBYTEARRAY_BASE64OPTION_IDX                   = 97,
    SBK_QBYTEARRAY_BASE64DECODINGSTATUS_IDX                  = 22,
    SBK_QBYTEARRAY_IDX                                       = 21,
    SBK_QBYTEARRAY_FROMBASE64RESULT_IDX                      = 24,
    SBK_QBYTEARRAYMATCHER_IDX                                = 25,
    SBK_QCALENDAR_SYSTEM_IDX                                 = 27,
    SBK_QCALENDAR_IDX                                        = 26,
    SBK_QCALENDAR_YEARMONTHDAY_IDX                           = 28,
    SBK_QCBORARRAY_IDX                                       = 29,
    SBK_QCBORERROR_CODE_IDX                                  = 31,
    SBK_QCBORERROR_IDX                                       = 30,
    SBK_QCBORMAP_IDX                                         = 33,
    SBK_QCBORPARSERERROR_IDX                                 = 34,
    SBK_QCBORSTREAMREADER_TYPE_IDX                           = 38,
    SBK_QCBORSTREAMREADER_STRINGRESULTCODE_IDX               = 37,
    SBK_QCBORSTREAMREADER_IDX                                = 36,
    SBK_QCBORSTREAMWRITER_IDX                                = 39,
    SBK_QCBORSTRINGRESULTBYTEARRAY_IDX                       = 40,
    SBK_QCBORSTREAMREADER_STRINGRESULT_QBYTEARRAY_IDX        = 40,
    SBK_QCBORSTRINGRESULTSTRING_IDX                          = 41,
    SBK_QCBORSTREAMREADER_STRINGRESULT_QSTRING_IDX           = 41,
    SBK_QCBORVALUE_ENCODINGOPTION_IDX                        = 44,
    SBK_QFLAGS_QCBORVALUE_ENCODINGOPTION_IDX                 = 99,
    SBK_QCBORVALUE_DIAGNOSTICNOTATIONOPTION_IDX              = 43,
    SBK_QFLAGS_QCBORVALUE_DIAGNOSTICNOTATIONOPTION_IDX       = 98,
    SBK_QCBORVALUE_TYPE_IDX                                  = 45,
    SBK_QCBORVALUE_IDX                                       = 42,
    SBK_QCHILDEVENT_IDX                                      = 46,
    SBK_QCOLLATOR_IDX                                        = 47,
    SBK_QCOLLATORSORTKEY_IDX                                 = 48,
    SBK_QCOMMANDLINEOPTION_FLAG_IDX                          = 50,
    SBK_QFLAGS_QCOMMANDLINEOPTION_FLAG_IDX                   = 100,
    SBK_QCOMMANDLINEOPTION_IDX                               = 49,
    SBK_QCOMMANDLINEPARSER_SINGLEDASHWORDOPTIONMODE_IDX      = 53,
    SBK_QCOMMANDLINEPARSER_OPTIONSAFTERPOSITIONALARGUMENTSMODE_IDX = 52,
    SBK_QCOMMANDLINEPARSER_IDX                               = 51,
    SBK_QCONCATENATETABLESPROXYMODEL_IDX                     = 54,
    SBK_QCOREAPPLICATION_APPLICATIONFLAGS_IDX                = 421,
    SBK_QCOREAPPLICATION_IDX                                 = 55,
    SBK_QCRYPTOGRAPHICHASH_ALGORITHM_IDX                     = 57,
    SBK_QCRYPTOGRAPHICHASH_IDX                               = 56,
    SBK_QDATASTREAM_VERSION_IDX                              = 62,
    SBK_QDATASTREAM_BYTEORDER_IDX                            = 59,
    SBK_QDATASTREAM_STATUS_IDX                               = 61,
    SBK_QDATASTREAM_FLOATINGPOINTPRECISION_IDX               = 60,
    SBK_QDATASTREAM_IDX                                      = 58,
    SBK_QDATE_MONTHNAMETYPE_IDX                              = 64,
    SBK_QDATE_IDX                                            = 63,
    SBK_QDATETIME_YEARRANGE_IDX                              = 66,
    SBK_QDATETIME_IDX                                        = 65,
    SBK_QDEADLINETIMER_FOREVERCONSTANT_IDX                   = 68,
    SBK_QDEADLINETIMER_IDX                                   = 67,
    SBK_QDIR_FILTER_IDX                                      = 70,
    SBK_QFLAGS_QDIR_FILTER_IDX                               = 101,
    SBK_QDIR_SORTFLAG_IDX                                    = 71,
    SBK_QFLAGS_QDIR_SORTFLAG_IDX                             = 102,
    SBK_QDIR_IDX                                             = 69,
    SBK_QDIRITERATOR_ITERATORFLAG_IDX                        = 73,
    SBK_QFLAGS_QDIRITERATOR_ITERATORFLAG_IDX                 = 103,
    SBK_QDIRITERATOR_IDX                                     = 72,
    SBK_QDYNAMICPROPERTYCHANGEEVENT_IDX                      = 74,
    SBK_QEASINGCURVE_TYPE_IDX                                = 76,
    SBK_QEASINGCURVE_IDX                                     = 75,
    SBK_QELAPSEDTIMER_CLOCKTYPE_IDX                          = 78,
    SBK_QELAPSEDTIMER_IDX                                    = 77,
    SBK_QEVENT_TYPE_IDX                                      = 80,
    SBK_QEVENT_IDX                                           = 79,
    SBK_QEVENTLOOP_PROCESSEVENTSFLAG_IDX                     = 82,
    SBK_QFLAGS_QEVENTLOOP_PROCESSEVENTSFLAG_IDX              = 104,
    SBK_QEVENTLOOP_IDX                                       = 81,
    SBK_QEVENTTRANSITION_IDX                                 = 83,
    SBK_QFACTORYINTERFACE_IDX                                = 84,
    SBK_QFILE_IDX                                            = 85,
    SBK_QFILEDEVICE_FILEERROR_IDX                            = 87,
    SBK_QFILEDEVICE_FILETIME_IDX                             = 89,
    SBK_QFILEDEVICE_PERMISSION_IDX                           = 91,
    SBK_QFLAGS_QFILEDEVICE_PERMISSION_IDX                    = 106,
    SBK_QFILEDEVICE_FILEHANDLEFLAG_IDX                       = 88,
    SBK_QFLAGS_QFILEDEVICE_FILEHANDLEFLAG_IDX                = 105,
    SBK_QFILEDEVICE_MEMORYMAPFLAGS_IDX                       = 90,
    SBK_QFILEDEVICE_IDX                                      = 86,
    SBK_QFILEINFO_IDX                                        = 92,
    SBK_QFILESELECTOR_IDX                                    = 93,
    SBK_QFILESYSTEMWATCHER_IDX                               = 94,
    SBK_QFINALSTATE_IDX                                      = 95,
    SBK_QFUTUREINTERFACEBASE_STATE_IDX                       = 144,
    SBK_QFUTUREINTERFACEBASE_IDX                             = 143,
    SBK_QGENERICARGUMENT_IDX                                 = 145,
    SBK_QGENERICRETURNARGUMENT_IDX                           = 146,
    SBK_QHISTORYSTATE_HISTORYTYPE_IDX                        = 148,
    SBK_QHISTORYSTATE_IDX                                    = 147,
    SBK_QIODEVICE_OPENMODEFLAG_IDX                           = 150,
    SBK_QFLAGS_QIODEVICE_OPENMODEFLAG_IDX                    = 107,
    SBK_QIODEVICE_IDX                                        = 149,
    SBK_QIDENTITYPROXYMODEL_IDX                              = 151,
    SBK_QITEMSELECTION_IDX                                   = 152,
    SBK_QLIST_QITEMSELECTIONRANGE_IDX                        = 152,
    SBK_QITEMSELECTIONMODEL_SELECTIONFLAG_IDX                = 154,
    SBK_QFLAGS_QITEMSELECTIONMODEL_SELECTIONFLAG_IDX         = 108,
    SBK_QITEMSELECTIONMODEL_IDX                              = 153,
    SBK_QITEMSELECTIONRANGE_IDX                              = 155,
    SBK_QJSONARRAY_IDX                                       = 156,
    SBK_QJSONDOCUMENT_DATAVALIDATION_IDX                     = 158,
    SBK_QJSONDOCUMENT_JSONFORMAT_IDX                         = 159,
    SBK_QJSONDOCUMENT_IDX                                    = 157,
    SBK_QJSONPARSEERROR_PARSEERROR_IDX                       = 161,
    SBK_QJSONPARSEERROR_IDX                                  = 160,
    SBK_QJSONVALUE_TYPE_IDX                                  = 163,
    SBK_QJSONVALUE_IDX                                       = 162,
    SBK_QLIBRARYINFO_LIBRARYLOCATION_IDX                     = 165,
    SBK_QLIBRARYINFO_IDX                                     = 164,
    SBK_QLINE_IDX                                            = 166,
    SBK_QLINEF_INTERSECTTYPE_IDX                             = 168,
    SBK_QLINEF_IDX                                           = 167,
    SBK_QLOCALE_LANGUAGE_IDX                                 = 174,
    SBK_QLOCALE_SCRIPT_IDX                                   = 424,
    SBK_QLOCALE_COUNTRY_IDX                                  = 170,
    SBK_QLOCALE_MEASUREMENTSYSTEM_IDX                        = 175,
    SBK_QLOCALE_FORMATTYPE_IDX                               = 173,
    SBK_QLOCALE_NUMBEROPTION_IDX                             = 176,
    SBK_QFLAGS_QLOCALE_NUMBEROPTION_IDX                      = 110,
    SBK_QLOCALE_FLOATINGPOINTPRECISIONOPTION_IDX             = 172,
    SBK_QLOCALE_CURRENCYSYMBOLFORMAT_IDX                     = 422,
    SBK_QLOCALE_DATASIZEFORMAT_IDX                           = 171,
    SBK_QFLAGS_QLOCALE_DATASIZEFORMAT_IDX                    = 109,
    SBK_QLOCALE_QUOTATIONSTYLE_IDX                           = 423,
    SBK_QLOCALE_IDX                                          = 169,
    SBK_QLOCKFILE_LOCKERROR_IDX                              = 178,
    SBK_QLOCKFILE_IDX                                        = 177,
    SBK_QMARGINS_IDX                                         = 179,
    SBK_QMARGINSF_IDX                                        = 180,
    SBK_QMESSAGEAUTHENTICATIONCODE_IDX                       = 181,
    SBK_QMESSAGELOGCONTEXT_IDX                               = 182,
    SBK_QMETACLASSINFO_IDX                                   = 183,
    SBK_QMETAENUM_IDX                                        = 184,
    SBK_QMETAMETHOD_ACCESS_IDX                               = 186,
    SBK_QMETAMETHOD_METHODTYPE_IDX                           = 187,
    SBK_QMETAMETHOD_IDX                                      = 185,
    SBK_QMETAOBJECT_CALL_IDX                                 = 189,
    SBK_QMETAOBJECT_IDX                                      = 188,
    SBK_QMETAOBJECT_CONNECTION_IDX                           = 190,
    SBK_QMETAPROPERTY_IDX                                    = 191,
    SBK_QMIMEDATA_IDX                                        = 192,
    SBK_QMIMEDATABASE_MATCHMODE_IDX                          = 194,
    SBK_QMIMEDATABASE_IDX                                    = 193,
    SBK_QMIMETYPE_IDX                                        = 195,
    SBK_QMODELINDEX_IDX                                      = 196,
    SBK_QMUTEX_RECURSIONMODE_IDX                             = 198,
    SBK_QMUTEX_IDX                                           = 197,
    SBK_QMUTEXLOCKER_IDX                                     = 199,
    SBK_QOBJECT_IDX                                          = 200,
    SBK_QOPERATINGSYSTEMVERSION_OSTYPE_IDX                   = 202,
    SBK_QOPERATINGSYSTEMVERSION_IDX                          = 201,
    SBK_QPARALLELANIMATIONGROUP_IDX                          = 203,
    SBK_QPAUSEANIMATION_IDX                                  = 204,
    SBK_QPERSISTENTMODELINDEX_IDX                            = 205,
    SBK_QPLUGINLOADER_IDX                                    = 206,
    SBK_QPOINT_IDX                                           = 207,
    SBK_QPOINTF_IDX                                          = 208,
    SBK_QPROCESS_PROCESSERROR_IDX                            = 214,
    SBK_QPROCESS_PROCESSSTATE_IDX                            = 215,
    SBK_QPROCESS_PROCESSCHANNEL_IDX                          = 212,
    SBK_QPROCESS_PROCESSCHANNELMODE_IDX                      = 213,
    SBK_QPROCESS_INPUTCHANNELMODE_IDX                        = 211,
    SBK_QPROCESS_EXITSTATUS_IDX                              = 210,
    SBK_QPROCESS_IDX                                         = 209,
    SBK_QPROCESSENVIRONMENT_IDX                              = 216,
    SBK_QPROPERTYANIMATION_IDX                               = 217,
    SBK_QRANDOMGENERATOR_IDX                                 = 218,
    SBK_QRANDOMGENERATOR64_IDX                               = 219,
    SBK_QREADLOCKER_IDX                                      = 220,
    SBK_QREADWRITELOCK_RECURSIONMODE_IDX                     = 222,
    SBK_QREADWRITELOCK_IDX                                   = 221,
    SBK_QRECT_IDX                                            = 223,
    SBK_QRECTF_IDX                                           = 224,
    SBK_QRECURSIVEMUTEX_IDX                                  = 225,
    SBK_QREGEXP_PATTERNSYNTAX_IDX                            = 228,
    SBK_QREGEXP_CARETMODE_IDX                                = 227,
    SBK_QREGEXP_IDX                                          = 226,
    SBK_QREGULAREXPRESSION_PATTERNOPTION_IDX                 = 232,
    SBK_QFLAGS_QREGULAREXPRESSION_PATTERNOPTION_IDX          = 112,
    SBK_QREGULAREXPRESSION_MATCHTYPE_IDX                     = 231,
    SBK_QREGULAREXPRESSION_MATCHOPTION_IDX                   = 230,
    SBK_QFLAGS_QREGULAREXPRESSION_MATCHOPTION_IDX            = 111,
    SBK_QREGULAREXPRESSION_IDX                               = 229,
    SBK_QREGULAREXPRESSIONMATCH_IDX                          = 233,
    SBK_QREGULAREXPRESSIONMATCHITERATOR_IDX                  = 234,
    SBK_QRESOURCE_COMPRESSION_IDX                            = 236,
    SBK_QRESOURCE_IDX                                        = 235,
    SBK_QRUNNABLE_IDX                                        = 237,
    SBK_QSAVEFILE_IDX                                        = 238,
    SBK_QSEMAPHORE_IDX                                       = 239,
    SBK_QSEMAPHORERELEASER_IDX                               = 240,
    SBK_QSEQUENTIALANIMATIONGROUP_IDX                        = 241,
    SBK_QSETTINGS_STATUS_IDX                                 = 245,
    SBK_QSETTINGS_FORMAT_IDX                                 = 243,
    SBK_QSETTINGS_SCOPE_IDX                                  = 244,
    SBK_QSETTINGS_IDX                                        = 242,
    SBK_QSIGNALBLOCKER_IDX                                   = 246,
    SBK_QSIGNALMAPPER_IDX                                    = 247,
    SBK_QSIGNALTRANSITION_IDX                                = 248,
    SBK_QSIZE_IDX                                            = 249,
    SBK_QSIZEF_IDX                                           = 250,
    SBK_QSOCKETDESCRIPTOR_IDX                                = 251,
    SBK_QSOCKETNOTIFIER_TYPE_IDX                             = 253,
    SBK_QSOCKETNOTIFIER_IDX                                  = 252,
    SBK_QSORTFILTERPROXYMODEL_IDX                            = 254,
    SBK_QSTANDARDPATHS_STANDARDLOCATION_IDX                  = 257,
    SBK_QSTANDARDPATHS_LOCATEOPTION_IDX                      = 256,
    SBK_QFLAGS_QSTANDARDPATHS_LOCATEOPTION_IDX               = 113,
    SBK_QSTANDARDPATHS_IDX                                   = 255,
    SBK_QSTATE_CHILDMODE_IDX                                 = 259,
    SBK_QSTATE_RESTOREPOLICY_IDX                             = 260,
    SBK_QSTATE_IDX                                           = 258,
    SBK_QSTATEMACHINE_EVENTPRIORITY_IDX                      = 263,
    SBK_QSTATEMACHINE_ERROR_IDX                              = 262,
    SBK_QSTATEMACHINE_IDX                                    = 261,
    SBK_QSTATEMACHINE_SIGNALEVENT_IDX                        = 264,
    SBK_QSTATEMACHINE_WRAPPEDEVENT_IDX                       = 265,
    SBK_QSTORAGEINFO_IDX                                     = 266,
    SBK_QSTRINGLISTMODEL_IDX                                 = 267,
    SBK_QSYSINFO_SIZES_IDX                                   = 270,
    SBK_QSYSINFO_ENDIAN_IDX                                  = 269,
    SBK_QSYSINFO_WINVERSION_IDX                              = 271,
    SBK_QSYSINFO_IDX                                         = 268,
    SBK_QSYSTEMSEMAPHORE_ACCESSMODE_IDX                      = 273,
    SBK_QSYSTEMSEMAPHORE_SYSTEMSEMAPHOREERROR_IDX            = 274,
    SBK_QSYSTEMSEMAPHORE_IDX                                 = 272,
    SBK_QTEMPORARYDIR_IDX                                    = 275,
    SBK_QTEMPORARYFILE_IDX                                   = 276,
    SBK_QTEXTBOUNDARYFINDER_BOUNDARYTYPE_IDX                 = 279,
    SBK_QTEXTBOUNDARYFINDER_BOUNDARYREASON_IDX               = 278,
    SBK_QFLAGS_QTEXTBOUNDARYFINDER_BOUNDARYREASON_IDX        = 114,
    SBK_QTEXTBOUNDARYFINDER_IDX                              = 277,
    SBK_QTEXTCODEC_CONVERSIONFLAG_IDX                        = 281,
    SBK_QFLAGS_QTEXTCODEC_CONVERSIONFLAG_IDX                 = 115,
    SBK_QTEXTCODEC_IDX                                       = 280,
    SBK_QTEXTCODEC_CONVERTERSTATE_IDX                        = 282,
    SBK_QTEXTDECODER_IDX                                     = 283,
    SBK_QTEXTENCODER_IDX                                     = 284,
    SBK_QTEXTSTREAM_REALNUMBERNOTATION_IDX                   = 288,
    SBK_QTEXTSTREAM_FIELDALIGNMENT_IDX                       = 286,
    SBK_QTEXTSTREAM_STATUS_IDX                               = 289,
    SBK_QTEXTSTREAM_NUMBERFLAG_IDX                           = 287,
    SBK_QFLAGS_QTEXTSTREAM_NUMBERFLAG_IDX                    = 116,
    SBK_QTEXTSTREAM_IDX                                      = 285,
    SBK_QTEXTSTREAMMANIPULATOR_IDX                           = 290,
    SBK_QTHREAD_PRIORITY_IDX                                 = 292,
    SBK_QTHREAD_IDX                                          = 291,
    SBK_QTHREADPOOL_IDX                                      = 293,
    SBK_QTIME_IDX                                            = 294,
    SBK_QTIMELINE_STATE_IDX                                  = 298,
    SBK_QTIMELINE_DIRECTION_IDX                              = 297,
    SBK_QTIMELINE_CURVESHAPE_IDX                             = 296,
    SBK_QTIMELINE_IDX                                        = 295,
    SBK_QTIMEZONE_TIMETYPE_IDX                               = 302,
    SBK_QTIMEZONE_NAMETYPE_IDX                               = 300,
    SBK_QTIMEZONE_IDX                                        = 299,
    SBK_QTIMEZONE_OFFSETDATA_IDX                             = 301,
    SBK_QTIMER_IDX                                           = 303,
    SBK_QTIMEREVENT_IDX                                      = 304,
    SBK_QTRANSLATOR_IDX                                      = 305,
    SBK_QTRANSPOSEPROXYMODEL_IDX                             = 306,
    SBK_QURL_PARSINGMODE_IDX                                 = 309,
    SBK_QURL_URLFORMATTINGOPTION_IDX                         = 310,
    SBK_QURL_COMPONENTFORMATTINGOPTION_IDX                   = 308,
    SBK_QFLAGS_QURL_COMPONENTFORMATTINGOPTION_IDX            = 117,
    SBK_QURL_USERINPUTRESOLUTIONOPTION_IDX                   = 311,
    SBK_QFLAGS_QURL_USERINPUTRESOLUTIONOPTION_IDX            = 119,
    SBK_QURL_IDX                                             = 307,
    SBK_QURLQUERY_IDX                                        = 312,
    SBK_QUUID_VARIANT_IDX                                    = 315,
    SBK_QUUID_VERSION_IDX                                    = 316,
    SBK_QUUID_STRINGFORMAT_IDX                               = 314,
    SBK_QUUID_IDX                                            = 313,
    SBK_QVARIANTANIMATION_IDX                                = 317,
    SBK_QVERSIONNUMBER_IDX                                   = 318,
    SBK_QWAITCONDITION_IDX                                   = 319,
    SBK_QWINEVENTNOTIFIER_IDX                                = 320,
    SBK_QWRITELOCKER_IDX                                     = 321,
    SBK_QXMLSTREAMATTRIBUTE_IDX                              = 322,
    SBK_QXMLSTREAMATTRIBUTES_IDX                             = 323,
    SBK_QVECTOR_QXMLSTREAMATTRIBUTE_IDX                      = 323,
    SBK_QXMLSTREAMENTITYDECLARATION_IDX                      = 324,
    SBK_QXMLSTREAMENTITYRESOLVER_IDX                         = 325,
    SBK_QXMLSTREAMNAMESPACEDECLARATION_IDX                   = 326,
    SBK_QXMLSTREAMNOTATIONDECLARATION_IDX                    = 327,
    SBK_QXMLSTREAMREADER_TOKENTYPE_IDX                       = 331,
    SBK_QXMLSTREAMREADER_READELEMENTTEXTBEHAVIOUR_IDX        = 330,
    SBK_QXMLSTREAMREADER_ERROR_IDX                           = 329,
    SBK_QXMLSTREAMREADER_IDX                                 = 328,
    SBK_QXMLSTREAMWRITER_IDX                                 = 332,
    SBK_QT_GLOBALCOLOR_IDX                                   = 367,
    SBK_QT_KEYBOARDMODIFIER_IDX                              = 378,
    SBK_QFLAGS_QT_KEYBOARDMODIFIER_IDX                       = 131,
    SBK_QT_MODIFIER_IDX                                      = 382,
    SBK_QT_MOUSEBUTTON_IDX                                   = 383,
    SBK_QFLAGS_QT_MOUSEBUTTON_IDX                            = 133,
    SBK_QT_ORIENTATION_IDX                                   = 388,
    SBK_QFLAGS_QT_ORIENTATION_IDX                            = 135,
    SBK_QT_FOCUSPOLICY_IDX                                   = 362,
    SBK_QT_TABFOCUSBEHAVIOR_IDX                              = 400,
    SBK_QT_SORTORDER_IDX                                     = 398,
    SBK_QT_SPLITBEHAVIORFLAGS_IDX                            = 399,
    SBK_QFLAGS_QT_SPLITBEHAVIORFLAGS_IDX                     = 137,
    SBK_QT_TILERULE_IDX                                      = 405,
    SBK_QT_ALIGNMENTFLAG_IDX                                 = 334,
    SBK_QFLAGS_QT_ALIGNMENTFLAG_IDX                          = 120,
    SBK_QT_TEXTFLAG_IDX                                      = 402,
    SBK_QT_TEXTELIDEMODE_IDX                                 = 401,
    SBK_QT_WHITESPACEMODE_IDX                                = 414,
    SBK_QT_HITTESTACCURACY_IDX                               = 369,
    SBK_QT_WINDOWTYPE_IDX                                    = 419,
    SBK_QFLAGS_QT_WINDOWTYPE_IDX                             = 142,
    SBK_QT_WINDOWSTATE_IDX                                   = 418,
    SBK_QFLAGS_QT_WINDOWSTATE_IDX                            = 141,
    SBK_QT_APPLICATIONSTATE_IDX                              = 337,
    SBK_QFLAGS_QT_APPLICATIONSTATE_IDX                       = 121,
    SBK_QT_SCREENORIENTATION_IDX                             = 392,
    SBK_QFLAGS_QT_SCREENORIENTATION_IDX                      = 136,
    SBK_QT_WIDGETATTRIBUTE_IDX                               = 415,
    SBK_QT_APPLICATIONATTRIBUTE_IDX                          = 336,
    SBK_QT_IMAGECONVERSIONFLAG_IDX                           = 370,
    SBK_QFLAGS_QT_IMAGECONVERSIONFLAG_IDX                    = 127,
    SBK_QT_BGMODE_IDX                                        = 341,
    SBK_QT_KEY_IDX                                           = 377,
    SBK_QT_ARROWTYPE_IDX                                     = 338,
    SBK_QT_PENSTYLE_IDX                                      = 391,
    SBK_QT_PENCAPSTYLE_IDX                                   = 389,
    SBK_QT_PENJOINSTYLE_IDX                                  = 390,
    SBK_QT_BRUSHSTYLE_IDX                                    = 342,
    SBK_QT_SIZEMODE_IDX                                      = 397,
    SBK_QT_UIEFFECT_IDX                                      = 413,
    SBK_QT_CURSORSHAPE_IDX                                   = 351,
    SBK_QT_TEXTFORMAT_IDX                                    = 403,
    SBK_QT_ASPECTRATIOMODE_IDX                               = 339,
    SBK_QT_DOCKWIDGETAREA_IDX                                = 354,
    SBK_QFLAGS_QT_DOCKWIDGETAREA_IDX                         = 122,
    SBK_QT_DOCKWIDGETAREASIZES_IDX                           = 355,
    SBK_QT_TOOLBARAREA_IDX                                   = 408,
    SBK_QFLAGS_QT_TOOLBARAREA_IDX                            = 139,
    SBK_QT_TOOLBARAREASIZES_IDX                              = 409,
    SBK_QT_DATEFORMAT_IDX                                    = 352,
    SBK_QT_TIMESPEC_IDX                                      = 406,
    SBK_QT_DAYOFWEEK_IDX                                     = 353,
    SBK_QT_SCROLLBARPOLICY_IDX                               = 393,
    SBK_QT_CASESENSITIVITY_IDX                               = 343,
    SBK_QT_CORNER_IDX                                        = 350,
    SBK_QT_EDGE_IDX                                          = 357,
    SBK_QFLAGS_QT_EDGE_IDX                                   = 124,
    SBK_QT_CONNECTIONTYPE_IDX                                = 347,
    SBK_QT_SHORTCUTCONTEXT_IDX                               = 395,
    SBK_QT_FILLRULE_IDX                                      = 360,
    SBK_QT_MASKMODE_IDX                                      = 380,
    SBK_QT_CLIPOPERATION_IDX                                 = 346,
    SBK_QT_ITEMSELECTIONMODE_IDX                             = 375,
    SBK_QT_ITEMSELECTIONOPERATION_IDX                        = 376,
    SBK_QT_TRANSFORMATIONMODE_IDX                            = 412,
    SBK_QT_AXIS_IDX                                          = 340,
    SBK_QT_FOCUSREASON_IDX                                   = 363,
    SBK_QT_CONTEXTMENUPOLICY_IDX                             = 348,
    SBK_QT_INPUTMETHODQUERY_IDX                              = 372,
    SBK_QFLAGS_QT_INPUTMETHODQUERY_IDX                       = 129,
    SBK_QT_INPUTMETHODHINT_IDX                               = 371,
    SBK_QFLAGS_QT_INPUTMETHODHINT_IDX                        = 128,
    SBK_QT_ENTERKEYTYPE_IDX                                  = 358,
    SBK_QT_TOOLBUTTONSTYLE_IDX                               = 410,
    SBK_QT_LAYOUTDIRECTION_IDX                               = 379,
    SBK_QT_ANCHORPOINT_IDX                                   = 335,
    SBK_QT_FINDCHILDOPTION_IDX                               = 361,
    SBK_QFLAGS_QT_FINDCHILDOPTION_IDX                        = 125,
    SBK_QT_DROPACTION_IDX                                    = 356,
    SBK_QFLAGS_QT_DROPACTION_IDX                             = 123,
    SBK_QT_CHECKSTATE_IDX                                    = 344,
    SBK_QT_ITEMDATAROLE_IDX                                  = 373,
    SBK_QT_ITEMFLAG_IDX                                      = 374,
    SBK_QFLAGS_QT_ITEMFLAG_IDX                               = 130,
    SBK_QT_MATCHFLAG_IDX                                     = 381,
    SBK_QFLAGS_QT_MATCHFLAG_IDX                              = 132,
    SBK_QT_WINDOWMODALITY_IDX                                = 417,
    SBK_QT_TEXTINTERACTIONFLAG_IDX                           = 404,
    SBK_QFLAGS_QT_TEXTINTERACTIONFLAG_IDX                    = 138,
    SBK_QT_EVENTPRIORITY_IDX                                 = 359,
    SBK_QT_SIZEHINT_IDX                                      = 396,
    SBK_QT_WINDOWFRAMESECTION_IDX                            = 416,
    SBK_QT_COORDINATESYSTEM_IDX                              = 349,
    SBK_QT_TOUCHPOINTSTATE_IDX                               = 411,
    SBK_QFLAGS_QT_TOUCHPOINTSTATE_IDX                        = 140,
    SBK_QT_GESTURESTATE_IDX                                  = 365,
    SBK_QT_GESTURETYPE_IDX                                   = 366,
    SBK_QT_GESTUREFLAG_IDX                                   = 364,
    SBK_QFLAGS_QT_GESTUREFLAG_IDX                            = 126,
    SBK_QT_NATIVEGESTURETYPE_IDX                             = 386,
    SBK_QT_NAVIGATIONMODE_IDX                                = 387,
    SBK_QT_CURSORMOVESTYLE_IDX                               = 425,
    SBK_QT_TIMERTYPE_IDX                                     = 407,
    SBK_QT_SCROLLPHASE_IDX                                   = 394,
    SBK_QT_MOUSEEVENTSOURCE_IDX                              = 385,
    SBK_QT_MOUSEEVENTFLAG_IDX                                = 384,
    SBK_QFLAGS_QT_MOUSEEVENTFLAG_IDX                         = 134,
    SBK_QT_CHECKSUMTYPE_IDX                                  = 345,
    SBK_QT_HIGHDPISCALEFACTORROUNDINGPOLICY_IDX              = 368,
    SBK_QtCoreQT_IDX                                         = 333,
    SBK_QCBORKNOWNTAGS_IDX                                   = 32,
    SBK_QCBORSIMPLETYPE_IDX                                  = 35,
    SBK_QTMSGTYPE_IDX                                        = 420,
    SBK_QtCore_IDX_COUNT                                     = 426
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtCoreTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtCoreModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtCoreTypeConverters;

// Converter indices
enum : int {
    SBK_HWND_IDX                                             = 0,
    SBK_QCHAR_IDX                                            = 1,
    SBK_QJSONOBJECT_IDX                                      = 2,
    SBK_QMODELINDEXLIST_IDX                                  = 3,
    SBK_QSTRING_IDX                                          = 4,
    SBK_QSTRINGLIST_IDX                                      = 5,
    SBK_QSTRINGREF_IDX                                       = 6,
    SBK_QVARIANT_IDX                                         = 7,
    SBK_QVARIANT_TYPE_IDX                                    = 8,
    SBK_BOOL_IDX                                             = 9,
    SBK_QINTPTR_IDX                                          = 10,
    SBK_QPTRDIFF_IDX                                         = 11,
    SBK_QUINTPTR_IDX                                         = 12,
    SBK_QTCORE_QLIST_QOBJECTPTR_IDX                          = 13, // const QList<QObject* > &
    SBK_QTCORE_QLIST_QBYTEARRAY_IDX                          = 14, // QList<QByteArray >
    SBK_QTCORE_QLIST_QABSTRACTEVENTDISPATCHER_TIMERINFO_IDX  = 15, // QList<QAbstractEventDispatcher::TimerInfo >
    SBK_QTCORE_QVECTOR_INT_IDX                               = 16, // const QVector<int > &
    SBK_QTCORE_QHASH_INT_QBYTEARRAY_IDX                      = 17, // const QHash<int,QByteArray > &
    SBK_QTCORE_QMAP_INT_QVARIANT_IDX                         = 18, // QMap<int,QVariant >
    SBK_QTCORE_QLIST_QPERSISTENTMODELINDEX_IDX               = 19, // const QList<QPersistentModelIndex > &
    SBK_QTCORE_QLIST_QABSTRACTANIMATIONPTR_IDX               = 20, // QList<QAbstractAnimation* >
    SBK_QTCORE_QLIST_QABSTRACTSTATEPTR_IDX                   = 21, // const QList<QAbstractState* > &
    SBK_QTCORE_QLIST_QVARIANT_IDX                            = 22, // const QList<QVariant > &
    SBK_QTCORE_QHASH_QSTRING_QVARIANT_IDX                    = 23, // const QHash<QString,QVariant > &
    SBK_QTCORE_QMAP_QSTRING_QVARIANT_IDX                     = 24, // const QMap<QString,QVariant > &
    SBK_QTCORE_QVECTOR_QCBORVALUE_IDX                        = 25, // QVector<QCborValue >
    SBK_QTCORE_QLIST_QCOMMANDLINEOPTION_IDX                  = 26, // const QList<QCommandLineOption > &
    SBK_QTCORE_QLIST_QABSTRACTITEMMODELPTR_IDX               = 27, // QList<QAbstractItemModel* >
    SBK_QTCORE_QPAIR_QINT64_UNSIGNEDINT_IDX                  = 28, // QPair<qint64,unsigned int >
    SBK_QTCORE_QLIST_QFILEINFO_IDX                           = 29, // QList<QFileInfo >
    SBK_QTCORE_QVECTOR_QPOINTF_IDX                           = 30, // QVector<QPointF >
    SBK_QTCORE_QLIST_QITEMSELECTIONRANGE_IDX                 = 31, // const QList<QItemSelectionRange > &
    SBK_QTCORE_QSET_QITEMSELECTIONRANGE_IDX                  = 32, // const QSet<QItemSelectionRange > &
    SBK_QTCORE_QVECTOR_QITEMSELECTIONRANGE_IDX               = 33, // const QVector<QItemSelectionRange > &
    SBK_QTCORE_QLIST_QLOCALE_COUNTRY_IDX                     = 34, // QList<QLocale::Country >
    SBK_QTCORE_QLIST_QLOCALE_IDX                             = 35, // QList<QLocale >
    SBK_QTCORE_QLIST_QT_DAYOFWEEK_IDX                        = 36, // QList<Qt::DayOfWeek >
    SBK_QTCORE_QLIST_QURL_IDX                                = 37, // const QList<QUrl > &
    SBK_QTCORE_QLIST_QMIMETYPE_IDX                           = 38, // QList<QMimeType >
    SBK_QTCORE_QPAIR_QREAL_QVARIANT_IDX                      = 39, // QPair<qreal,QVariant >
    SBK_QTCORE_QVECTOR_QPAIR_QREAL_QVARIANT_IDX              = 40, // QVector<QPair< qreal,QVariant > >
    SBK_QTCORE_QLIST_QABSTRACTTRANSITIONPTR_IDX              = 41, // QList<QAbstractTransition* >
    SBK_QTCORE_QSET_QABSTRACTSTATEPTR_IDX                    = 42, // QSet<QAbstractState* >
    SBK_QTCORE_QLIST_QSTORAGEINFO_IDX                        = 43, // QList<QStorageInfo >
    SBK_QTCORE_QLIST_INT_IDX                                 = 44, // QList<int >
    SBK_QTCORE_QVECTOR_QTIMEZONE_OFFSETDATA_IDX              = 45, // QVector<QTimeZone::OffsetData >
    SBK_QTCORE_QPAIR_QSTRING_QSTRING_IDX                     = 46, // QPair<QString,QString >
    SBK_QTCORE_QLIST_QPAIR_QSTRING_QSTRING_IDX               = 47, // QList<QPair< QString,QString > >
    SBK_QTCORE_QVECTOR_QXMLSTREAMATTRIBUTE_IDX               = 48, // QVector<QXmlStreamAttribute > &
    SBK_QTCORE_QLIST_QXMLSTREAMATTRIBUTE_IDX                 = 49, // const QList<QXmlStreamAttribute > &
    SBK_QTCORE_QVECTOR_QXMLSTREAMNAMESPACEDECLARATION_IDX    = 50, // const QVector<QXmlStreamNamespaceDeclaration > &
    SBK_QTCORE_QVECTOR_QXMLSTREAMENTITYDECLARATION_IDX       = 51, // QVector<QXmlStreamEntityDeclaration >
    SBK_QTCORE_QVECTOR_QXMLSTREAMNOTATIONDECLARATION_IDX     = 52, // QVector<QXmlStreamNotationDeclaration >
    SBK_QTCORE_QLIST_QSTRING_IDX                             = 53, // QList<QString >
    SBK_QtCore_CONVERTERS_IDX_COUNT                          = 54
};

// typedef entries
using QCborStringResultByteArray = QCborStreamReader::StringResult<QByteArray>;
using QCborStringResultString = QCborStreamReader::StringResult<QString>;

// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QCborKnownTags >() { return SbkPySide2_QtCoreTypes[SBK_QCBORKNOWNTAGS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCborSimpleType >() { return SbkPySide2_QtCoreTypes[SBK_QCBORSIMPLETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QtMsgType >() { return SbkPySide2_QtCoreTypes[SBK_QTMSGTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractAnimation::Direction >() { return SbkPySide2_QtCoreTypes[SBK_QABSTRACTANIMATION_DIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractAnimation::State >() { return SbkPySide2_QtCoreTypes[SBK_QABSTRACTANIMATION_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractAnimation::DeletionPolicy >() { return SbkPySide2_QtCoreTypes[SBK_QABSTRACTANIMATION_DELETIONPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractAnimation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QABSTRACTANIMATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractEventDispatcher >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QABSTRACTEVENTDISPATCHER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractEventDispatcher::TimerInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QABSTRACTEVENTDISPATCHER_TIMERINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractItemModel::LayoutChangeHint >() { return SbkPySide2_QtCoreTypes[SBK_QABSTRACTITEMMODEL_LAYOUTCHANGEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractItemModel::CheckIndexOption >() { return SbkPySide2_QtCoreTypes[SBK_QABSTRACTITEMMODEL_CHECKINDEXOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QAbstractItemModel::CheckIndexOption> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QABSTRACTITEMMODEL_CHECKINDEXOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractItemModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QABSTRACTITEMMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractListModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QABSTRACTLISTMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractNativeEventFilter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QABSTRACTNATIVEEVENTFILTER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractProxyModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QABSTRACTPROXYMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QABSTRACTSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTableModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QABSTRACTTABLEMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTransition::TransitionType >() { return SbkPySide2_QtCoreTypes[SBK_QABSTRACTTRANSITION_TRANSITIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QAbstractTransition >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QABSTRACTTRANSITION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAnimationGroup >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QANIMATIONGROUP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBasicMutex >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QBASICMUTEX_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBasicTimer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QBASICTIMER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBitArray >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QBITARRAY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBuffer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QBUFFER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QByteArray::Base64Option >() { return SbkPySide2_QtCoreTypes[SBK_QBYTEARRAY_BASE64OPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QByteArray::Base64Option> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QBYTEARRAY_BASE64OPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QByteArray::Base64DecodingStatus >() { return SbkPySide2_QtCoreTypes[SBK_QBYTEARRAY_BASE64DECODINGSTATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QByteArray >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QBYTEARRAY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QByteArray::FromBase64Result >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QBYTEARRAY_FROMBASE64RESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QByteArrayMatcher >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QBYTEARRAYMATCHER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCalendar::System >() { return SbkPySide2_QtCoreTypes[SBK_QCALENDAR_SYSTEM_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCalendar >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCALENDAR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCalendar::YearMonthDay >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCALENDAR_YEARMONTHDAY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCborArray >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCBORARRAY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCborError::Code >() { return SbkPySide2_QtCoreTypes[SBK_QCBORERROR_CODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCborError >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCBORERROR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCborMap >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCBORMAP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCborParserError >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCBORPARSERERROR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCborStreamReader::Type >() { return SbkPySide2_QtCoreTypes[SBK_QCBORSTREAMREADER_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCborStreamReader::StringResultCode >() { return SbkPySide2_QtCoreTypes[SBK_QCBORSTREAMREADER_STRINGRESULTCODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCborStreamReader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCBORSTREAMREADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCborStreamWriter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCBORSTREAMWRITER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCborStringResultByteArray >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCBORSTRINGRESULTBYTEARRAY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCborStringResultString >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCBORSTRINGRESULTSTRING_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCborValue::EncodingOption >() { return SbkPySide2_QtCoreTypes[SBK_QCBORVALUE_ENCODINGOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QCborValue::EncodingOption> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QCBORVALUE_ENCODINGOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCborValue::DiagnosticNotationOption >() { return SbkPySide2_QtCoreTypes[SBK_QCBORVALUE_DIAGNOSTICNOTATIONOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QCborValue::DiagnosticNotationOption> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QCBORVALUE_DIAGNOSTICNOTATIONOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCborValue::Type >() { return SbkPySide2_QtCoreTypes[SBK_QCBORVALUE_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCborValue >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCBORVALUE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QChildEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCHILDEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCollator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCOLLATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCollatorSortKey >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCOLLATORSORTKEY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCommandLineOption::Flag >() { return SbkPySide2_QtCoreTypes[SBK_QCOMMANDLINEOPTION_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QCommandLineOption::Flag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QCOMMANDLINEOPTION_FLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCommandLineOption >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCOMMANDLINEOPTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCommandLineParser::SingleDashWordOptionMode >() { return SbkPySide2_QtCoreTypes[SBK_QCOMMANDLINEPARSER_SINGLEDASHWORDOPTIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCommandLineParser::OptionsAfterPositionalArgumentsMode >() { return SbkPySide2_QtCoreTypes[SBK_QCOMMANDLINEPARSER_OPTIONSAFTERPOSITIONALARGUMENTSMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCommandLineParser >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCOMMANDLINEPARSER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QConcatenateTablesProxyModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCONCATENATETABLESPROXYMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCoreApplication >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCOREAPPLICATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCryptographicHash::Algorithm >() { return SbkPySide2_QtCoreTypes[SBK_QCRYPTOGRAPHICHASH_ALGORITHM_IDX]; }
template<> inline PyTypeObject *SbkType< ::QCryptographicHash >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QCRYPTOGRAPHICHASH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDataStream::Version >() { return SbkPySide2_QtCoreTypes[SBK_QDATASTREAM_VERSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDataStream::ByteOrder >() { return SbkPySide2_QtCoreTypes[SBK_QDATASTREAM_BYTEORDER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDataStream::Status >() { return SbkPySide2_QtCoreTypes[SBK_QDATASTREAM_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDataStream::FloatingPointPrecision >() { return SbkPySide2_QtCoreTypes[SBK_QDATASTREAM_FLOATINGPOINTPRECISION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDataStream >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QDATASTREAM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDate::MonthNameType >() { return SbkPySide2_QtCoreTypes[SBK_QDATE_MONTHNAMETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDate >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QDATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDateTime::YearRange >() { return SbkPySide2_QtCoreTypes[SBK_QDATETIME_YEARRANGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDateTime >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QDATETIME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDeadlineTimer::ForeverConstant >() { return SbkPySide2_QtCoreTypes[SBK_QDEADLINETIMER_FOREVERCONSTANT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDeadlineTimer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QDEADLINETIMER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDir::Filter >() { return SbkPySide2_QtCoreTypes[SBK_QDIR_FILTER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QDir::Filter> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QDIR_FILTER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDir::SortFlag >() { return SbkPySide2_QtCoreTypes[SBK_QDIR_SORTFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QDir::SortFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QDIR_SORTFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDir >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QDIR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDirIterator::IteratorFlag >() { return SbkPySide2_QtCoreTypes[SBK_QDIRITERATOR_ITERATORFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QDirIterator::IteratorFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QDIRITERATOR_ITERATORFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QDirIterator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QDIRITERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDynamicPropertyChangeEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QDYNAMICPROPERTYCHANGEEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QEasingCurve::Type >() { return SbkPySide2_QtCoreTypes[SBK_QEASINGCURVE_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QEasingCurve >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QEASINGCURVE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QElapsedTimer::ClockType >() { return SbkPySide2_QtCoreTypes[SBK_QELAPSEDTIMER_CLOCKTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QElapsedTimer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QELAPSEDTIMER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QEvent::Type >() { return SbkPySide2_QtCoreTypes[SBK_QEVENT_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QEventLoop::ProcessEventsFlag >() { return SbkPySide2_QtCoreTypes[SBK_QEVENTLOOP_PROCESSEVENTSFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QEventLoop::ProcessEventsFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QEVENTLOOP_PROCESSEVENTSFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QEventLoop >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QEVENTLOOP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QEventTransition >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QEVENTTRANSITION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFactoryInterface >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QFACTORYINTERFACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFile >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QFILE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFileDevice::FileError >() { return SbkPySide2_QtCoreTypes[SBK_QFILEDEVICE_FILEERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFileDevice::FileTime >() { return SbkPySide2_QtCoreTypes[SBK_QFILEDEVICE_FILETIME_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFileDevice::Permission >() { return SbkPySide2_QtCoreTypes[SBK_QFILEDEVICE_PERMISSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QFileDevice::Permission> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QFILEDEVICE_PERMISSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFileDevice::FileHandleFlag >() { return SbkPySide2_QtCoreTypes[SBK_QFILEDEVICE_FILEHANDLEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QFileDevice::FileHandleFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QFILEDEVICE_FILEHANDLEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFileDevice::MemoryMapFlags >() { return SbkPySide2_QtCoreTypes[SBK_QFILEDEVICE_MEMORYMAPFLAGS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFileDevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QFILEDEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFileInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QFILEINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFileSelector >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QFILESELECTOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFileSystemWatcher >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QFILESYSTEMWATCHER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFinalState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QFINALSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFutureInterfaceBase::State >() { return SbkPySide2_QtCoreTypes[SBK_QFUTUREINTERFACEBASE_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFutureInterfaceBase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QFUTUREINTERFACEBASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGenericArgument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QGENERICARGUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGenericReturnArgument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QGENERICRETURNARGUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHistoryState::HistoryType >() { return SbkPySide2_QtCoreTypes[SBK_QHISTORYSTATE_HISTORYTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QHistoryState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QHISTORYSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIODevice::OpenModeFlag >() { return SbkPySide2_QtCoreTypes[SBK_QIODEVICE_OPENMODEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QIODevice::OpenModeFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QIODEVICE_OPENMODEFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QIODevice >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QIODEVICE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIdentityProxyModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QIDENTITYPROXYMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QItemSelection >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QITEMSELECTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QItemSelectionModel::SelectionFlag >() { return SbkPySide2_QtCoreTypes[SBK_QITEMSELECTIONMODEL_SELECTIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QItemSelectionModel::SelectionFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QITEMSELECTIONMODEL_SELECTIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QItemSelectionModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QITEMSELECTIONMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QItemSelectionRange >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QITEMSELECTIONRANGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QJsonArray >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QJSONARRAY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QJsonDocument::DataValidation >() { return SbkPySide2_QtCoreTypes[SBK_QJSONDOCUMENT_DATAVALIDATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJsonDocument::JsonFormat >() { return SbkPySide2_QtCoreTypes[SBK_QJSONDOCUMENT_JSONFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJsonDocument >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QJSONDOCUMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QJsonParseError::ParseError >() { return SbkPySide2_QtCoreTypes[SBK_QJSONPARSEERROR_PARSEERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJsonParseError >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QJSONPARSEERROR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QJsonValue::Type >() { return SbkPySide2_QtCoreTypes[SBK_QJSONVALUE_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QJsonValue >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QJSONVALUE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLibraryInfo::LibraryLocation >() { return SbkPySide2_QtCoreTypes[SBK_QLIBRARYINFO_LIBRARYLOCATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLibraryInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QLIBRARYINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QLINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLineF::IntersectType >() { return SbkPySide2_QtCoreTypes[SBK_QLINEF_INTERSECTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLineF >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QLINEF_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLocale::Language >() { return SbkPySide2_QtCoreTypes[SBK_QLOCALE_LANGUAGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocale::Script >() { return SbkPySide2_QtCoreTypes[SBK_QLOCALE_SCRIPT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocale::Country >() { return SbkPySide2_QtCoreTypes[SBK_QLOCALE_COUNTRY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocale::MeasurementSystem >() { return SbkPySide2_QtCoreTypes[SBK_QLOCALE_MEASUREMENTSYSTEM_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocale::FormatType >() { return SbkPySide2_QtCoreTypes[SBK_QLOCALE_FORMATTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocale::NumberOption >() { return SbkPySide2_QtCoreTypes[SBK_QLOCALE_NUMBEROPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QLocale::NumberOption> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QLOCALE_NUMBEROPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocale::FloatingPointPrecisionOption >() { return SbkPySide2_QtCoreTypes[SBK_QLOCALE_FLOATINGPOINTPRECISIONOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocale::CurrencySymbolFormat >() { return SbkPySide2_QtCoreTypes[SBK_QLOCALE_CURRENCYSYMBOLFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocale::DataSizeFormat >() { return SbkPySide2_QtCoreTypes[SBK_QLOCALE_DATASIZEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QLocale::DataSizeFormat> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QLOCALE_DATASIZEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocale::QuotationStyle >() { return SbkPySide2_QtCoreTypes[SBK_QLOCALE_QUOTATIONSTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLocale >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QLOCALE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLockFile::LockError >() { return SbkPySide2_QtCoreTypes[SBK_QLOCKFILE_LOCKERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QLockFile >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QLOCKFILE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMargins >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMARGINS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMarginsF >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMARGINSF_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMessageAuthenticationCode >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMESSAGEAUTHENTICATIONCODE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMessageLogContext >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMESSAGELOGCONTEXT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMetaClassInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMETACLASSINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMetaEnum >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMETAENUM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMetaMethod::Access >() { return SbkPySide2_QtCoreTypes[SBK_QMETAMETHOD_ACCESS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QMetaMethod::MethodType >() { return SbkPySide2_QtCoreTypes[SBK_QMETAMETHOD_METHODTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QMetaMethod >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMETAMETHOD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMetaObject::Call >() { return SbkPySide2_QtCoreTypes[SBK_QMETAOBJECT_CALL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QMetaObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMETAOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMetaObject::Connection >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMETAOBJECT_CONNECTION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMetaProperty >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMETAPROPERTY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMimeData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMIMEDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMimeDatabase::MatchMode >() { return SbkPySide2_QtCoreTypes[SBK_QMIMEDATABASE_MATCHMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QMimeDatabase >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMIMEDATABASE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMimeType >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMIMETYPE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModelIndex >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMODELINDEX_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMutex::RecursionMode >() { return SbkPySide2_QtCoreTypes[SBK_QMUTEX_RECURSIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QMutex >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMUTEX_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMutexLocker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QMUTEXLOCKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QObject >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QOBJECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOperatingSystemVersion::OSType >() { return SbkPySide2_QtCoreTypes[SBK_QOPERATINGSYSTEMVERSION_OSTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QOperatingSystemVersion >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QOPERATINGSYSTEMVERSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QParallelAnimationGroup >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QPARALLELANIMATIONGROUP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPauseAnimation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QPAUSEANIMATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPersistentModelIndex >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QPERSISTENTMODELINDEX_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPluginLoader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QPLUGINLOADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPoint >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QPOINT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPointF >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QPOINTF_IDX]); }
template<> inline PyTypeObject *SbkType< ::QProcess::ProcessError >() { return SbkPySide2_QtCoreTypes[SBK_QPROCESS_PROCESSERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QProcess::ProcessState >() { return SbkPySide2_QtCoreTypes[SBK_QPROCESS_PROCESSSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QProcess::ProcessChannel >() { return SbkPySide2_QtCoreTypes[SBK_QPROCESS_PROCESSCHANNEL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QProcess::ProcessChannelMode >() { return SbkPySide2_QtCoreTypes[SBK_QPROCESS_PROCESSCHANNELMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QProcess::InputChannelMode >() { return SbkPySide2_QtCoreTypes[SBK_QPROCESS_INPUTCHANNELMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QProcess::ExitStatus >() { return SbkPySide2_QtCoreTypes[SBK_QPROCESS_EXITSTATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QProcess >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QPROCESS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QProcessEnvironment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QPROCESSENVIRONMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPropertyAnimation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QPROPERTYANIMATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRandomGenerator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QRANDOMGENERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRandomGenerator64 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QRANDOMGENERATOR64_IDX]); }
template<> inline PyTypeObject *SbkType< ::QReadLocker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QREADLOCKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QReadWriteLock::RecursionMode >() { return SbkPySide2_QtCoreTypes[SBK_QREADWRITELOCK_RECURSIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QReadWriteLock >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QREADWRITELOCK_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRect >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QRECT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRectF >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QRECTF_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRecursiveMutex >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QRECURSIVEMUTEX_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegExp::PatternSyntax >() { return SbkPySide2_QtCoreTypes[SBK_QREGEXP_PATTERNSYNTAX_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRegExp::CaretMode >() { return SbkPySide2_QtCoreTypes[SBK_QREGEXP_CARETMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRegExp >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QREGEXP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegularExpression::PatternOption >() { return SbkPySide2_QtCoreTypes[SBK_QREGULAREXPRESSION_PATTERNOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QRegularExpression::PatternOption> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QREGULAREXPRESSION_PATTERNOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRegularExpression::MatchType >() { return SbkPySide2_QtCoreTypes[SBK_QREGULAREXPRESSION_MATCHTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRegularExpression::MatchOption >() { return SbkPySide2_QtCoreTypes[SBK_QREGULAREXPRESSION_MATCHOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QRegularExpression::MatchOption> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QREGULAREXPRESSION_MATCHOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QRegularExpression >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QREGULAREXPRESSION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegularExpressionMatch >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QREGULAREXPRESSIONMATCH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegularExpressionMatchIterator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QREGULAREXPRESSIONMATCHITERATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QResource::Compression >() { return SbkPySide2_QtCoreTypes[SBK_QRESOURCE_COMPRESSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QResource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QRESOURCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRunnable >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QRUNNABLE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSaveFile >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSAVEFILE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSemaphore >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSEMAPHORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSemaphoreReleaser >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSEMAPHORERELEASER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSequentialAnimationGroup >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSEQUENTIALANIMATIONGROUP_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSettings::Status >() { return SbkPySide2_QtCoreTypes[SBK_QSETTINGS_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSettings::Format >() { return SbkPySide2_QtCoreTypes[SBK_QSETTINGS_FORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSettings::Scope >() { return SbkPySide2_QtCoreTypes[SBK_QSETTINGS_SCOPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSettings >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSETTINGS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSignalBlocker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSIGNALBLOCKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSignalMapper >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSIGNALMAPPER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSignalTransition >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSIGNALTRANSITION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSize >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSIZE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSizeF >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSIZEF_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSocketDescriptor >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSOCKETDESCRIPTOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSocketNotifier::Type >() { return SbkPySide2_QtCoreTypes[SBK_QSOCKETNOTIFIER_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSocketNotifier >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSOCKETNOTIFIER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSortFilterProxyModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSORTFILTERPROXYMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStandardPaths::StandardLocation >() { return SbkPySide2_QtCoreTypes[SBK_QSTANDARDPATHS_STANDARDLOCATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QStandardPaths::LocateOption >() { return SbkPySide2_QtCoreTypes[SBK_QSTANDARDPATHS_LOCATEOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QStandardPaths::LocateOption> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QSTANDARDPATHS_LOCATEOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QStandardPaths >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSTANDARDPATHS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QState::ChildMode >() { return SbkPySide2_QtCoreTypes[SBK_QSTATE_CHILDMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QState::RestorePolicy >() { return SbkPySide2_QtCoreTypes[SBK_QSTATE_RESTOREPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStateMachine::EventPriority >() { return SbkPySide2_QtCoreTypes[SBK_QSTATEMACHINE_EVENTPRIORITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QStateMachine::Error >() { return SbkPySide2_QtCoreTypes[SBK_QSTATEMACHINE_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QStateMachine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSTATEMACHINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStateMachine::SignalEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSTATEMACHINE_SIGNALEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStateMachine::WrappedEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSTATEMACHINE_WRAPPEDEVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStorageInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSTORAGEINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStringListModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSTRINGLISTMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSysInfo::Sizes >() { return SbkPySide2_QtCoreTypes[SBK_QSYSINFO_SIZES_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSysInfo::Endian >() { return SbkPySide2_QtCoreTypes[SBK_QSYSINFO_ENDIAN_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSysInfo::WinVersion >() { return SbkPySide2_QtCoreTypes[SBK_QSYSINFO_WINVERSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSysInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSYSINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSystemSemaphore::AccessMode >() { return SbkPySide2_QtCoreTypes[SBK_QSYSTEMSEMAPHORE_ACCESSMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSystemSemaphore::SystemSemaphoreError >() { return SbkPySide2_QtCoreTypes[SBK_QSYSTEMSEMAPHORE_SYSTEMSEMAPHOREERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QSystemSemaphore >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QSYSTEMSEMAPHORE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTemporaryDir >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTEMPORARYDIR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTemporaryFile >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTEMPORARYFILE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBoundaryFinder::BoundaryType >() { return SbkPySide2_QtCoreTypes[SBK_QTEXTBOUNDARYFINDER_BOUNDARYTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextBoundaryFinder::BoundaryReason >() { return SbkPySide2_QtCoreTypes[SBK_QTEXTBOUNDARYFINDER_BOUNDARYREASON_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextBoundaryFinder::BoundaryReason> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QTEXTBOUNDARYFINDER_BOUNDARYREASON_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextBoundaryFinder >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTEXTBOUNDARYFINDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCodec::ConversionFlag >() { return SbkPySide2_QtCoreTypes[SBK_QTEXTCODEC_CONVERSIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextCodec::ConversionFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QTEXTCODEC_CONVERSIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextCodec >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTEXTCODEC_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCodec::ConverterState >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTEXTCODEC_CONVERTERSTATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDecoder >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTEXTDECODER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextEncoder >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTEXTENCODER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextStream::RealNumberNotation >() { return SbkPySide2_QtCoreTypes[SBK_QTEXTSTREAM_REALNUMBERNOTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextStream::FieldAlignment >() { return SbkPySide2_QtCoreTypes[SBK_QTEXTSTREAM_FIELDALIGNMENT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextStream::Status >() { return SbkPySide2_QtCoreTypes[SBK_QTEXTSTREAM_STATUS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextStream::NumberFlag >() { return SbkPySide2_QtCoreTypes[SBK_QTEXTSTREAM_NUMBERFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextStream::NumberFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QTEXTSTREAM_NUMBERFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTextStream >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTEXTSTREAM_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextStreamManipulator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTEXTSTREAMMANIPULATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QThread::Priority >() { return SbkPySide2_QtCoreTypes[SBK_QTHREAD_PRIORITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QThread >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTHREAD_IDX]); }
template<> inline PyTypeObject *SbkType< ::QThreadPool >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTHREADPOOL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTime >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTIME_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTimeLine::State >() { return SbkPySide2_QtCoreTypes[SBK_QTIMELINE_STATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTimeLine::Direction >() { return SbkPySide2_QtCoreTypes[SBK_QTIMELINE_DIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTimeLine::CurveShape >() { return SbkPySide2_QtCoreTypes[SBK_QTIMELINE_CURVESHAPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTimeLine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTIMELINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTimeZone::TimeType >() { return SbkPySide2_QtCoreTypes[SBK_QTIMEZONE_TIMETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTimeZone::NameType >() { return SbkPySide2_QtCoreTypes[SBK_QTIMEZONE_NAMETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QTimeZone >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTIMEZONE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTimeZone::OffsetData >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTIMEZONE_OFFSETDATA_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTimer >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTIMER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTimerEvent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTIMEREVENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTranslator >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTRANSLATOR_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTransposeProxyModel >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QTRANSPOSEPROXYMODEL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QUrl::ParsingMode >() { return SbkPySide2_QtCoreTypes[SBK_QURL_PARSINGMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QUrl::UrlFormattingOption >() { return SbkPySide2_QtCoreTypes[SBK_QURL_URLFORMATTINGOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QUrl::ComponentFormattingOption >() { return SbkPySide2_QtCoreTypes[SBK_QURL_COMPONENTFORMATTINGOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QUrl::ComponentFormattingOption> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QURL_COMPONENTFORMATTINGOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QUrl::UserInputResolutionOption >() { return SbkPySide2_QtCoreTypes[SBK_QURL_USERINPUTRESOLUTIONOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QUrl::UserInputResolutionOption> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QURL_USERINPUTRESOLUTIONOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QUrl >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QURL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QUrlQuery >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QURLQUERY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QUuid::Variant >() { return SbkPySide2_QtCoreTypes[SBK_QUUID_VARIANT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QUuid::Version >() { return SbkPySide2_QtCoreTypes[SBK_QUUID_VERSION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QUuid::StringFormat >() { return SbkPySide2_QtCoreTypes[SBK_QUUID_STRINGFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QUuid >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QUUID_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVariantAnimation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QVARIANTANIMATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVersionNumber >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QVERSIONNUMBER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWaitCondition >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QWAITCONDITION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWinEventNotifier >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QWINEVENTNOTIFIER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWriteLocker >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QWRITELOCKER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlStreamAttribute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QXMLSTREAMATTRIBUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlStreamAttributes >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QXMLSTREAMATTRIBUTES_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlStreamEntityDeclaration >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QXMLSTREAMENTITYDECLARATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlStreamEntityResolver >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QXMLSTREAMENTITYRESOLVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlStreamNamespaceDeclaration >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QXMLSTREAMNAMESPACEDECLARATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlStreamNotationDeclaration >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QXMLSTREAMNOTATIONDECLARATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlStreamReader::TokenType >() { return SbkPySide2_QtCoreTypes[SBK_QXMLSTREAMREADER_TOKENTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QXmlStreamReader::ReadElementTextBehaviour >() { return SbkPySide2_QtCoreTypes[SBK_QXMLSTREAMREADER_READELEMENTTEXTBEHAVIOUR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QXmlStreamReader::Error >() { return SbkPySide2_QtCoreTypes[SBK_QXMLSTREAMREADER_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QXmlStreamReader >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QXMLSTREAMREADER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QXmlStreamWriter >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtCoreTypes[SBK_QXMLSTREAMWRITER_IDX]); }
template<> inline PyTypeObject *SbkType< ::Qt::GlobalColor >() { return SbkPySide2_QtCoreTypes[SBK_QT_GLOBALCOLOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::KeyboardModifier >() { return SbkPySide2_QtCoreTypes[SBK_QT_KEYBOARDMODIFIER_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::KeyboardModifier> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_KEYBOARDMODIFIER_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::Modifier >() { return SbkPySide2_QtCoreTypes[SBK_QT_MODIFIER_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::MouseButton >() { return SbkPySide2_QtCoreTypes[SBK_QT_MOUSEBUTTON_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::MouseButton> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_MOUSEBUTTON_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::Orientation >() { return SbkPySide2_QtCoreTypes[SBK_QT_ORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::Orientation> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_ORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::FocusPolicy >() { return SbkPySide2_QtCoreTypes[SBK_QT_FOCUSPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::TabFocusBehavior >() { return SbkPySide2_QtCoreTypes[SBK_QT_TABFOCUSBEHAVIOR_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::SortOrder >() { return SbkPySide2_QtCoreTypes[SBK_QT_SORTORDER_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::SplitBehaviorFlags >() { return SbkPySide2_QtCoreTypes[SBK_QT_SPLITBEHAVIORFLAGS_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::SplitBehaviorFlags> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_SPLITBEHAVIORFLAGS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::TileRule >() { return SbkPySide2_QtCoreTypes[SBK_QT_TILERULE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::AlignmentFlag >() { return SbkPySide2_QtCoreTypes[SBK_QT_ALIGNMENTFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::AlignmentFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_ALIGNMENTFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::TextFlag >() { return SbkPySide2_QtCoreTypes[SBK_QT_TEXTFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::TextElideMode >() { return SbkPySide2_QtCoreTypes[SBK_QT_TEXTELIDEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::WhiteSpaceMode >() { return SbkPySide2_QtCoreTypes[SBK_QT_WHITESPACEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::HitTestAccuracy >() { return SbkPySide2_QtCoreTypes[SBK_QT_HITTESTACCURACY_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::WindowType >() { return SbkPySide2_QtCoreTypes[SBK_QT_WINDOWTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::WindowType> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_WINDOWTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::WindowState >() { return SbkPySide2_QtCoreTypes[SBK_QT_WINDOWSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::WindowState> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_WINDOWSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ApplicationState >() { return SbkPySide2_QtCoreTypes[SBK_QT_APPLICATIONSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::ApplicationState> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_APPLICATIONSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ScreenOrientation >() { return SbkPySide2_QtCoreTypes[SBK_QT_SCREENORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::ScreenOrientation> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_SCREENORIENTATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::WidgetAttribute >() { return SbkPySide2_QtCoreTypes[SBK_QT_WIDGETATTRIBUTE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ApplicationAttribute >() { return SbkPySide2_QtCoreTypes[SBK_QT_APPLICATIONATTRIBUTE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ImageConversionFlag >() { return SbkPySide2_QtCoreTypes[SBK_QT_IMAGECONVERSIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::ImageConversionFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_IMAGECONVERSIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::BGMode >() { return SbkPySide2_QtCoreTypes[SBK_QT_BGMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::Key >() { return SbkPySide2_QtCoreTypes[SBK_QT_KEY_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ArrowType >() { return SbkPySide2_QtCoreTypes[SBK_QT_ARROWTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::PenStyle >() { return SbkPySide2_QtCoreTypes[SBK_QT_PENSTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::PenCapStyle >() { return SbkPySide2_QtCoreTypes[SBK_QT_PENCAPSTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::PenJoinStyle >() { return SbkPySide2_QtCoreTypes[SBK_QT_PENJOINSTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::BrushStyle >() { return SbkPySide2_QtCoreTypes[SBK_QT_BRUSHSTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::SizeMode >() { return SbkPySide2_QtCoreTypes[SBK_QT_SIZEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::UIEffect >() { return SbkPySide2_QtCoreTypes[SBK_QT_UIEFFECT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::CursorShape >() { return SbkPySide2_QtCoreTypes[SBK_QT_CURSORSHAPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::TextFormat >() { return SbkPySide2_QtCoreTypes[SBK_QT_TEXTFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::AspectRatioMode >() { return SbkPySide2_QtCoreTypes[SBK_QT_ASPECTRATIOMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::DockWidgetArea >() { return SbkPySide2_QtCoreTypes[SBK_QT_DOCKWIDGETAREA_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::DockWidgetArea> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_DOCKWIDGETAREA_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::DockWidgetAreaSizes >() { return SbkPySide2_QtCoreTypes[SBK_QT_DOCKWIDGETAREASIZES_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ToolBarArea >() { return SbkPySide2_QtCoreTypes[SBK_QT_TOOLBARAREA_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::ToolBarArea> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_TOOLBARAREA_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ToolBarAreaSizes >() { return SbkPySide2_QtCoreTypes[SBK_QT_TOOLBARAREASIZES_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::DateFormat >() { return SbkPySide2_QtCoreTypes[SBK_QT_DATEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::TimeSpec >() { return SbkPySide2_QtCoreTypes[SBK_QT_TIMESPEC_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::DayOfWeek >() { return SbkPySide2_QtCoreTypes[SBK_QT_DAYOFWEEK_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ScrollBarPolicy >() { return SbkPySide2_QtCoreTypes[SBK_QT_SCROLLBARPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::CaseSensitivity >() { return SbkPySide2_QtCoreTypes[SBK_QT_CASESENSITIVITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::Corner >() { return SbkPySide2_QtCoreTypes[SBK_QT_CORNER_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::Edge >() { return SbkPySide2_QtCoreTypes[SBK_QT_EDGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::Edge> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_EDGE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ConnectionType >() { return SbkPySide2_QtCoreTypes[SBK_QT_CONNECTIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ShortcutContext >() { return SbkPySide2_QtCoreTypes[SBK_QT_SHORTCUTCONTEXT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::FillRule >() { return SbkPySide2_QtCoreTypes[SBK_QT_FILLRULE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::MaskMode >() { return SbkPySide2_QtCoreTypes[SBK_QT_MASKMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ClipOperation >() { return SbkPySide2_QtCoreTypes[SBK_QT_CLIPOPERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ItemSelectionMode >() { return SbkPySide2_QtCoreTypes[SBK_QT_ITEMSELECTIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ItemSelectionOperation >() { return SbkPySide2_QtCoreTypes[SBK_QT_ITEMSELECTIONOPERATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::TransformationMode >() { return SbkPySide2_QtCoreTypes[SBK_QT_TRANSFORMATIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::Axis >() { return SbkPySide2_QtCoreTypes[SBK_QT_AXIS_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::FocusReason >() { return SbkPySide2_QtCoreTypes[SBK_QT_FOCUSREASON_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ContextMenuPolicy >() { return SbkPySide2_QtCoreTypes[SBK_QT_CONTEXTMENUPOLICY_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::InputMethodQuery >() { return SbkPySide2_QtCoreTypes[SBK_QT_INPUTMETHODQUERY_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::InputMethodQuery> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_INPUTMETHODQUERY_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::InputMethodHint >() { return SbkPySide2_QtCoreTypes[SBK_QT_INPUTMETHODHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::InputMethodHint> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_INPUTMETHODHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::EnterKeyType >() { return SbkPySide2_QtCoreTypes[SBK_QT_ENTERKEYTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ToolButtonStyle >() { return SbkPySide2_QtCoreTypes[SBK_QT_TOOLBUTTONSTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::LayoutDirection >() { return SbkPySide2_QtCoreTypes[SBK_QT_LAYOUTDIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::AnchorPoint >() { return SbkPySide2_QtCoreTypes[SBK_QT_ANCHORPOINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::FindChildOption >() { return SbkPySide2_QtCoreTypes[SBK_QT_FINDCHILDOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::FindChildOption> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_FINDCHILDOPTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::DropAction >() { return SbkPySide2_QtCoreTypes[SBK_QT_DROPACTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::DropAction> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_DROPACTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::CheckState >() { return SbkPySide2_QtCoreTypes[SBK_QT_CHECKSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ItemDataRole >() { return SbkPySide2_QtCoreTypes[SBK_QT_ITEMDATAROLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ItemFlag >() { return SbkPySide2_QtCoreTypes[SBK_QT_ITEMFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::ItemFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_ITEMFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::MatchFlag >() { return SbkPySide2_QtCoreTypes[SBK_QT_MATCHFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::MatchFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_MATCHFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::WindowModality >() { return SbkPySide2_QtCoreTypes[SBK_QT_WINDOWMODALITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::TextInteractionFlag >() { return SbkPySide2_QtCoreTypes[SBK_QT_TEXTINTERACTIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::TextInteractionFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_TEXTINTERACTIONFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::EventPriority >() { return SbkPySide2_QtCoreTypes[SBK_QT_EVENTPRIORITY_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::SizeHint >() { return SbkPySide2_QtCoreTypes[SBK_QT_SIZEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::WindowFrameSection >() { return SbkPySide2_QtCoreTypes[SBK_QT_WINDOWFRAMESECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::CoordinateSystem >() { return SbkPySide2_QtCoreTypes[SBK_QT_COORDINATESYSTEM_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::TouchPointState >() { return SbkPySide2_QtCoreTypes[SBK_QT_TOUCHPOINTSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::TouchPointState> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_TOUCHPOINTSTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::GestureState >() { return SbkPySide2_QtCoreTypes[SBK_QT_GESTURESTATE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::GestureType >() { return SbkPySide2_QtCoreTypes[SBK_QT_GESTURETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::GestureFlag >() { return SbkPySide2_QtCoreTypes[SBK_QT_GESTUREFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::GestureFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_GESTUREFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::NativeGestureType >() { return SbkPySide2_QtCoreTypes[SBK_QT_NATIVEGESTURETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::NavigationMode >() { return SbkPySide2_QtCoreTypes[SBK_QT_NAVIGATIONMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::CursorMoveStyle >() { return SbkPySide2_QtCoreTypes[SBK_QT_CURSORMOVESTYLE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::TimerType >() { return SbkPySide2_QtCoreTypes[SBK_QT_TIMERTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ScrollPhase >() { return SbkPySide2_QtCoreTypes[SBK_QT_SCROLLPHASE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::MouseEventSource >() { return SbkPySide2_QtCoreTypes[SBK_QT_MOUSEEVENTSOURCE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::MouseEventFlag >() { return SbkPySide2_QtCoreTypes[SBK_QT_MOUSEEVENTFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<Qt::MouseEventFlag> >() { return SbkPySide2_QtCoreTypes[SBK_QFLAGS_QT_MOUSEEVENTFLAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::ChecksumType >() { return SbkPySide2_QtCoreTypes[SBK_QT_CHECKSUMTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::Qt::HighDpiScaleFactorRoundingPolicy >() { return SbkPySide2_QtCoreTypes[SBK_QT_HIGHDPISCALEFACTORROUNDINGPOLICY_IDX]; }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTCORE_PYTHON_H

