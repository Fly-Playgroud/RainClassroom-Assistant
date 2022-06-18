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


#ifndef SBK_QTLOCATION_PYTHON_H
#define SBK_QTLOCATION_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>
#include <pyside2_qtpositioning_python.h>

// Bound library includes
#include <QtLocation/qgeoroutesegment.h>
#include <QtLocation/qplaceattribute.h>
#include <QtLocation/qgeoroute.h>
#include <QtLocation/qplacecontent.h>
#include <QtLocation/qgeocodingmanagerengine.h>
#include <QtLocation/qplaceuser.h>
#include <QtLocation/qgeomaneuver.h>
#include <QtLocation/qplacecontentrequest.h>
#include <QtLocation/qplacemanager.h>
#include <QtLocation/qplaceproposedsearchresult.h>
#include <QtLocation/qgeoroutingmanagerengine.h>
#include <QtLocation/qplacecategory.h>
#include <QtLocation/qplacesearchreply.h>
#include <QtLocation/qplacematchrequest.h>
#include <QtLocation/qplacesupplier.h>
#include <QtLocation/qplaceresult.h>
#include <QtLocation/qplaceidreply.h>
#include <QtLocation/qgeorouterequest.h>
#include <QtLocation/qgeoroutereply.h>
#include <QtLocation/qplacereview.h>
#include <QtLocation/qplacecontactdetail.h>
#include <QtLocation/qplaceeditorial.h>
#include <QtLocation/qplacesearchrequest.h>
#include <QtLocation/qplacecontentreply.h>
#include <QtLocation/qgeoserviceprovider.h>
#include <QtLocation/qplaceimage.h>
#include <QtLocation/qgeocodereply.h>
#include <QtLocation/qplacesearchsuggestionreply.h>
#include <QtLocation/qplacesearchresult.h>
#include <QtLocation/qgeoserviceproviderfactory.h>
#include <QtLocation/qgeoroutingmanager.h>
#include <QtLocation/qplacematchreply.h>
#include <QtLocation/qplace.h>
#include <QtLocation/qgeocodingmanager.h>
#include <QtLocation/qplacedetailsreply.h>
#include <QtLocation/qplaceicon.h>
#include <QtLocation/qplacemanagerengine.h>
#include <QtLocation/qplacereply.h>
#include <QtLocation/qplaceratings.h>
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
    SBK_QGEOCODEREPLY_ERROR_IDX                              = 12,
    SBK_QGEOCODEREPLY_IDX                                    = 11,
    SBK_QGEOCODINGMANAGER_IDX                                = 13,
    SBK_QGEOCODINGMANAGERENGINE_IDX                          = 14,
    SBK_QGEOMANEUVER_INSTRUCTIONDIRECTION_IDX                = 16,
    SBK_QGEOMANEUVER_IDX                                     = 15,
    SBK_QGEOROUTE_IDX                                        = 17,
    SBK_QGEOROUTEREPLY_ERROR_IDX                             = 19,
    SBK_QGEOROUTEREPLY_IDX                                   = 18,
    SBK_QGEOROUTEREQUEST_TRAVELMODE_IDX                      = 26,
    SBK_QFLAGS_QGEOROUTEREQUEST_TRAVELMODE_IDX               = 5,
    SBK_QGEOROUTEREQUEST_FEATURETYPE_IDX                     = 21,
    SBK_QFLAGS_QGEOROUTEREQUEST_FEATURETYPE_IDX              = 0,
    SBK_QGEOROUTEREQUEST_FEATUREWEIGHT_IDX                   = 22,
    SBK_QFLAGS_QGEOROUTEREQUEST_FEATUREWEIGHT_IDX            = 1,
    SBK_QGEOROUTEREQUEST_ROUTEOPTIMIZATION_IDX               = 24,
    SBK_QFLAGS_QGEOROUTEREQUEST_ROUTEOPTIMIZATION_IDX        = 3,
    SBK_QGEOROUTEREQUEST_SEGMENTDETAIL_IDX                   = 25,
    SBK_QFLAGS_QGEOROUTEREQUEST_SEGMENTDETAIL_IDX            = 4,
    SBK_QGEOROUTEREQUEST_MANEUVERDETAIL_IDX                  = 23,
    SBK_QFLAGS_QGEOROUTEREQUEST_MANEUVERDETAIL_IDX           = 2,
    SBK_QGEOROUTEREQUEST_IDX                                 = 20,
    SBK_QGEOROUTESEGMENT_IDX                                 = 27,
    SBK_QGEOROUTINGMANAGER_IDX                               = 28,
    SBK_QGEOROUTINGMANAGERENGINE_IDX                         = 29,
    SBK_QGEOSERVICEPROVIDER_ERROR_IDX                        = 31,
    SBK_QGEOSERVICEPROVIDER_ROUTINGFEATURE_IDX               = 36,
    SBK_QFLAGS_QGEOSERVICEPROVIDER_ROUTINGFEATURE_IDX        = 10,
    SBK_QGEOSERVICEPROVIDER_GEOCODINGFEATURE_IDX             = 32,
    SBK_QFLAGS_QGEOSERVICEPROVIDER_GEOCODINGFEATURE_IDX      = 6,
    SBK_QGEOSERVICEPROVIDER_MAPPINGFEATURE_IDX               = 33,
    SBK_QFLAGS_QGEOSERVICEPROVIDER_MAPPINGFEATURE_IDX        = 7,
    SBK_QGEOSERVICEPROVIDER_PLACESFEATURE_IDX                = 35,
    SBK_QFLAGS_QGEOSERVICEPROVIDER_PLACESFEATURE_IDX         = 9,
    SBK_QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_IDX            = 34,
    SBK_QFLAGS_QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_IDX     = 8,
    SBK_QGEOSERVICEPROVIDER_IDX                              = 30,
    SBK_QGEOSERVICEPROVIDERFACTORY_IDX                       = 37,
    SBK_QGEOSERVICEPROVIDERFACTORYV2_IDX                     = 38,
    SBK_QPLACE_IDX                                           = 39,
    SBK_QPLACEATTRIBUTE_IDX                                  = 40,
    SBK_QPLACECATEGORY_IDX                                   = 41,
    SBK_QPLACECONTACTDETAIL_IDX                              = 42,
    SBK_QPLACECONTENT_TYPE_IDX                               = 44,
    SBK_QPLACECONTENT_IDX                                    = 43,
    SBK_QPLACECONTENTREPLY_IDX                               = 45,
    SBK_QPLACECONTENTREQUEST_IDX                             = 46,
    SBK_QPLACEDETAILSREPLY_IDX                               = 47,
    SBK_QPLACEEDITORIAL_IDX                                  = 48,
    SBK_QPLACEICON_IDX                                       = 49,
    SBK_QPLACEIDREPLY_OPERATIONTYPE_IDX                      = 51,
    SBK_QPLACEIDREPLY_IDX                                    = 50,
    SBK_QPLACEIMAGE_IDX                                      = 52,
    SBK_QPLACEMANAGER_IDX                                    = 53,
    SBK_QPLACEMANAGERENGINE_IDX                              = 54,
    SBK_QPLACEMATCHREPLY_IDX                                 = 55,
    SBK_QPLACEMATCHREQUEST_IDX                               = 56,
    SBK_QPLACEPROPOSEDSEARCHRESULT_IDX                       = 57,
    SBK_QPLACERATINGS_IDX                                    = 58,
    SBK_QPLACEREPLY_ERROR_IDX                                = 60,
    SBK_QPLACEREPLY_TYPE_IDX                                 = 61,
    SBK_QPLACEREPLY_IDX                                      = 59,
    SBK_QPLACERESULT_IDX                                     = 62,
    SBK_QPLACEREVIEW_IDX                                     = 63,
    SBK_QPLACESEARCHREPLY_IDX                                = 64,
    SBK_QPLACESEARCHREQUEST_RELEVANCEHINT_IDX                = 66,
    SBK_QPLACESEARCHREQUEST_IDX                              = 65,
    SBK_QPLACESEARCHRESULT_SEARCHRESULTTYPE_IDX              = 68,
    SBK_QPLACESEARCHRESULT_IDX                               = 67,
    SBK_QPLACESEARCHSUGGESTIONREPLY_IDX                      = 69,
    SBK_QPLACESUPPLIER_IDX                                   = 70,
    SBK_QPLACEUSER_IDX                                       = 71,
    SBK_QtLocation_IDX_COUNT                                 = 72
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtLocationTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtLocationModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtLocationTypeConverters;

// Converter indices
enum : int {
    SBK_QTLOCATION_QLIST_QOBJECTPTR_IDX                      = 0, // const QList<QObject* > &
    SBK_QTLOCATION_QLIST_QBYTEARRAY_IDX                      = 1, // QList<QByteArray >
    SBK_QTLOCATION_QLIST_QGEOLOCATION_IDX                    = 2, // QList<QGeoLocation >
    SBK_QTLOCATION_QMAP_QSTRING_QVARIANT_IDX                 = 3, // const QMap<QString,QVariant > &
    SBK_QTLOCATION_QLIST_QGEOCOORDINATE_IDX                  = 4, // QList<QGeoCoordinate >
    SBK_QTLOCATION_QLIST_QGEOROUTE_IDX                       = 5, // const QList<QGeoRoute > &
    SBK_QTLOCATION_QLIST_QGEORECTANGLE_IDX                   = 6, // QList<QGeoRectangle >
    SBK_QTLOCATION_QLIST_QGEOROUTEREQUEST_FEATURETYPE_IDX    = 7, // QList<QGeoRouteRequest::FeatureType >
    SBK_QTLOCATION_QLIST_QMAP_QSTRING_QVARIANT_IDX           = 8, // const QList<QMap< QString,QVariant > > &
    SBK_QTLOCATION_QLIST_QPLACECATEGORY_IDX                  = 9, // QList<QPlaceCategory >
    SBK_QTLOCATION_QLIST_QPLACECONTACTDETAIL_IDX             = 10, // QList<QPlaceContactDetail >
    SBK_QTLOCATION_QMAP_INT_QPLACECONTENT_IDX                = 11, // QMap<int,QPlaceContent >
    SBK_QTLOCATION_QLIST_QLOCALE_IDX                         = 12, // QList<QLocale >
    SBK_QTLOCATION_QLIST_QPLACE_IDX                          = 13, // QList<QPlace >
    SBK_QTLOCATION_QLIST_QPLACESEARCHRESULT_IDX              = 14, // const QList<QPlaceSearchResult > &
    SBK_QTLOCATION_QLIST_QVARIANT_IDX                        = 15, // QList<QVariant >
    SBK_QTLOCATION_QLIST_QSTRING_IDX                         = 16, // QList<QString >
    SBK_QtLocation_CONVERTERS_IDX_COUNT                      = 17
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QGeoCodeReply::Error >() { return SbkPySide2_QtLocationTypes[SBK_QGEOCODEREPLY_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoCodeReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOCODEREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoCodingManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOCODINGMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoCodingManagerEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOCODINGMANAGERENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoManeuver::InstructionDirection >() { return SbkPySide2_QtLocationTypes[SBK_QGEOMANEUVER_INSTRUCTIONDIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoManeuver >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOMANEUVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRoute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOROUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRouteReply::Error >() { return SbkPySide2_QtLocationTypes[SBK_QGEOROUTEREPLY_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOROUTEREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::TravelMode >() { return SbkPySide2_QtLocationTypes[SBK_QGEOROUTEREQUEST_TRAVELMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::TravelMode> >() { return SbkPySide2_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_TRAVELMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::FeatureType >() { return SbkPySide2_QtLocationTypes[SBK_QGEOROUTEREQUEST_FEATURETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::FeatureType> >() { return SbkPySide2_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_FEATURETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::FeatureWeight >() { return SbkPySide2_QtLocationTypes[SBK_QGEOROUTEREQUEST_FEATUREWEIGHT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::FeatureWeight> >() { return SbkPySide2_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_FEATUREWEIGHT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::RouteOptimization >() { return SbkPySide2_QtLocationTypes[SBK_QGEOROUTEREQUEST_ROUTEOPTIMIZATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::RouteOptimization> >() { return SbkPySide2_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_ROUTEOPTIMIZATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::SegmentDetail >() { return SbkPySide2_QtLocationTypes[SBK_QGEOROUTEREQUEST_SEGMENTDETAIL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::SegmentDetail> >() { return SbkPySide2_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_SEGMENTDETAIL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::ManeuverDetail >() { return SbkPySide2_QtLocationTypes[SBK_QGEOROUTEREQUEST_MANEUVERDETAIL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::ManeuverDetail> >() { return SbkPySide2_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_MANEUVERDETAIL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOROUTEREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRouteSegment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOROUTESEGMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRoutingManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOROUTINGMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRoutingManagerEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOROUTINGMANAGERENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::Error >() { return SbkPySide2_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::RoutingFeature >() { return SbkPySide2_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_ROUTINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoServiceProvider::RoutingFeature> >() { return SbkPySide2_QtLocationTypes[SBK_QFLAGS_QGEOSERVICEPROVIDER_ROUTINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::GeocodingFeature >() { return SbkPySide2_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_GEOCODINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoServiceProvider::GeocodingFeature> >() { return SbkPySide2_QtLocationTypes[SBK_QFLAGS_QGEOSERVICEPROVIDER_GEOCODINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::MappingFeature >() { return SbkPySide2_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_MAPPINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoServiceProvider::MappingFeature> >() { return SbkPySide2_QtLocationTypes[SBK_QFLAGS_QGEOSERVICEPROVIDER_MAPPINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::PlacesFeature >() { return SbkPySide2_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_PLACESFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoServiceProvider::PlacesFeature> >() { return SbkPySide2_QtLocationTypes[SBK_QFLAGS_QGEOSERVICEPROVIDER_PLACESFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::NavigationFeature >() { return SbkPySide2_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoServiceProvider::NavigationFeature> >() { return SbkPySide2_QtLocationTypes[SBK_QFLAGS_QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProviderFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOSERVICEPROVIDERFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProviderFactoryV2 >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QGEOSERVICEPROVIDERFACTORYV2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlace >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceAttribute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEATTRIBUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceCategory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACECATEGORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceContactDetail >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACECONTACTDETAIL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceContent::Type >() { return SbkPySide2_QtLocationTypes[SBK_QPLACECONTENT_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceContent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACECONTENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceContentReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACECONTENTREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceContentRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACECONTENTREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceDetailsReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEDETAILSREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceEditorial >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEEDITORIAL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceIcon >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEICON_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceIdReply::OperationType >() { return SbkPySide2_QtLocationTypes[SBK_QPLACEIDREPLY_OPERATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceIdReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEIDREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceImage >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEIMAGE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceManagerEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEMANAGERENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceMatchReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEMATCHREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceMatchRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEMATCHREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceProposedSearchResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEPROPOSEDSEARCHRESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceRatings >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACERATINGS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceReply::Error >() { return SbkPySide2_QtLocationTypes[SBK_QPLACEREPLY_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceReply::Type >() { return SbkPySide2_QtLocationTypes[SBK_QPLACEREPLY_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACERESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceReview >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEREVIEW_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACESEARCHREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchRequest::RelevanceHint >() { return SbkPySide2_QtLocationTypes[SBK_QPLACESEARCHREQUEST_RELEVANCEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACESEARCHREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchResult::SearchResultType >() { return SbkPySide2_QtLocationTypes[SBK_QPLACESEARCHRESULT_SEARCHRESULTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACESEARCHRESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchSuggestionReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACESEARCHSUGGESTIONREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceSupplier >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACESUPPLIER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceUser >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtLocationTypes[SBK_QPLACEUSER_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTLOCATION_PYTHON_H

