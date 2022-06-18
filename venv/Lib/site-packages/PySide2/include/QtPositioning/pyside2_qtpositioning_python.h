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


#ifndef SBK_QTPOSITIONING_PYTHON_H
#define SBK_QTPOSITIONING_PYTHON_H

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside2_qtcore_python.h>

// Bound library includes
#include <QtPositioning/qgeosatelliteinfosource.h>
#include <QtPositioning/qgeoareamonitorsource.h>
#include <QtPositioning/qgeopositioninfosourcefactory.h>
#include <QtPositioning/qgeocircle.h>
#include <QtPositioning/qgeopolygon.h>
#include <QtPositioning/qnmeapositioninfosource.h>
#include <QtPositioning/qgeoareamonitorinfo.h>
#include <QtPositioning/qgeorectangle.h>
#include <QtPositioning/qgeoshape.h>
#include <QtPositioning/qgeolocation.h>
#include <QtPositioning/qgeopositioninfo.h>
#include <QtPositioning/qgeopositioninfosource.h>
#include <QtPositioning/qgeoaddress.h>
#include <QtPositioning/qgeopath.h>
#include <QtPositioning/qgeocoordinate.h>
#include <QtPositioning/qgeosatelliteinfo.h>
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
    SBK_QGEOADDRESS_IDX                                      = 2,
    SBK_QGEOAREAMONITORINFO_IDX                              = 3,
    SBK_QGEOAREAMONITORSOURCE_ERROR_IDX                      = 6,
    SBK_QGEOAREAMONITORSOURCE_AREAMONITORFEATURE_IDX         = 5,
    SBK_QFLAGS_QGEOAREAMONITORSOURCE_AREAMONITORFEATURE_IDX  = 0,
    SBK_QGEOAREAMONITORSOURCE_IDX                            = 4,
    SBK_QGEOCIRCLE_IDX                                       = 7,
    SBK_QGEOCOORDINATE_COORDINATETYPE_IDX                    = 10,
    SBK_QGEOCOORDINATE_COORDINATEFORMAT_IDX                  = 9,
    SBK_QGEOCOORDINATE_IDX                                   = 8,
    SBK_QGEOLOCATION_IDX                                     = 11,
    SBK_QGEOPATH_IDX                                         = 12,
    SBK_QGEOPOLYGON_IDX                                      = 13,
    SBK_QGEOPOSITIONINFO_ATTRIBUTE_IDX                       = 15,
    SBK_QGEOPOSITIONINFO_IDX                                 = 14,
    SBK_QGEOPOSITIONINFOSOURCE_ERROR_IDX                     = 17,
    SBK_QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_IDX         = 18,
    SBK_QFLAGS_QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_IDX  = 1,
    SBK_QGEOPOSITIONINFOSOURCE_IDX                           = 16,
    SBK_QGEOPOSITIONINFOSOURCEFACTORY_IDX                    = 19,
    SBK_QGEORECTANGLE_IDX                                    = 20,
    SBK_QGEOSATELLITEINFO_ATTRIBUTE_IDX                      = 22,
    SBK_QGEOSATELLITEINFO_SATELLITESYSTEM_IDX                = 23,
    SBK_QGEOSATELLITEINFO_IDX                                = 21,
    SBK_QGEOSATELLITEINFOSOURCE_ERROR_IDX                    = 25,
    SBK_QGEOSATELLITEINFOSOURCE_IDX                          = 24,
    SBK_QGEOSHAPE_SHAPETYPE_IDX                              = 27,
    SBK_QGEOSHAPE_IDX                                        = 26,
    SBK_QNMEAPOSITIONINFOSOURCE_UPDATEMODE_IDX               = 29,
    SBK_QNMEAPOSITIONINFOSOURCE_IDX                          = 28,
    SBK_QtPositioning_IDX_COUNT                              = 30
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide2_QtPositioningTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide2_QtPositioningModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide2_QtPositioningTypeConverters;

// Converter indices
enum : int {
    SBK_QTPOSITIONING_QMAP_QSTRING_QVARIANT_IDX              = 0, // QMap<QString,QVariant >
    SBK_QTPOSITIONING_QLIST_QGEOAREAMONITORINFO_IDX          = 1, // QList<QGeoAreaMonitorInfo >
    SBK_QTPOSITIONING_QLIST_QOBJECTPTR_IDX                   = 2, // const QList<QObject* > &
    SBK_QTPOSITIONING_QLIST_QBYTEARRAY_IDX                   = 3, // QList<QByteArray >
    SBK_QTPOSITIONING_QLIST_QGEOCOORDINATE_IDX               = 4, // const QList<QGeoCoordinate > &
    SBK_QTPOSITIONING_QLIST_QVARIANT_IDX                     = 5, // const QList<QVariant > &
    SBK_QTPOSITIONING_QLIST_QGEOSATELLITEINFO_IDX            = 6, // const QList<QGeoSatelliteInfo > &
    SBK_QTPOSITIONING_QLIST_QSTRING_IDX                      = 7, // QList<QString >
    SBK_QtPositioning_CONVERTERS_IDX_COUNT                   = 8
};
// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
template<> inline PyTypeObject *SbkType< ::QGeoAddress >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOADDRESS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoAreaMonitorInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOAREAMONITORINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoAreaMonitorSource::Error >() { return SbkPySide2_QtPositioningTypes[SBK_QGEOAREAMONITORSOURCE_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoAreaMonitorSource::AreaMonitorFeature >() { return SbkPySide2_QtPositioningTypes[SBK_QGEOAREAMONITORSOURCE_AREAMONITORFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoAreaMonitorSource::AreaMonitorFeature> >() { return SbkPySide2_QtPositioningTypes[SBK_QFLAGS_QGEOAREAMONITORSOURCE_AREAMONITORFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoAreaMonitorSource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOAREAMONITORSOURCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoCircle >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOCIRCLE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoCoordinate::CoordinateType >() { return SbkPySide2_QtPositioningTypes[SBK_QGEOCOORDINATE_COORDINATETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoCoordinate::CoordinateFormat >() { return SbkPySide2_QtPositioningTypes[SBK_QGEOCOORDINATE_COORDINATEFORMAT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoCoordinate >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOCOORDINATE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoLocation >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOLOCATION_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoPath >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOPATH_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoPolygon >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOPOLYGON_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfo::Attribute >() { return SbkPySide2_QtPositioningTypes[SBK_QGEOPOSITIONINFO_ATTRIBUTE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOPOSITIONINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfoSource::Error >() { return SbkPySide2_QtPositioningTypes[SBK_QGEOPOSITIONINFOSOURCE_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfoSource::PositioningMethod >() { return SbkPySide2_QtPositioningTypes[SBK_QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoPositionInfoSource::PositioningMethod> >() { return SbkPySide2_QtPositioningTypes[SBK_QFLAGS_QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfoSource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOPOSITIONINFOSOURCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoPositionInfoSourceFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOPOSITIONINFOSOURCEFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRectangle >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEORECTANGLE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoSatelliteInfo::Attribute >() { return SbkPySide2_QtPositioningTypes[SBK_QGEOSATELLITEINFO_ATTRIBUTE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoSatelliteInfo::SatelliteSystem >() { return SbkPySide2_QtPositioningTypes[SBK_QGEOSATELLITEINFO_SATELLITESYSTEM_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoSatelliteInfo >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOSATELLITEINFO_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoSatelliteInfoSource::Error >() { return SbkPySide2_QtPositioningTypes[SBK_QGEOSATELLITEINFOSOURCE_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoSatelliteInfoSource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOSATELLITEINFOSOURCE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoShape::ShapeType >() { return SbkPySide2_QtPositioningTypes[SBK_QGEOSHAPE_SHAPETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoShape >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QGEOSHAPE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNmeaPositionInfoSource::UpdateMode >() { return SbkPySide2_QtPositioningTypes[SBK_QNMEAPOSITIONINFOSOURCE_UPDATEMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QNmeaPositionInfoSource >() { return reinterpret_cast<PyTypeObject *>(SbkPySide2_QtPositioningTypes[SBK_QNMEAPOSITIONINFOSOURCE_IDX]); }
QT_WARNING_POP

} // namespace Shiboken

#endif // SBK_QTPOSITIONING_PYTHON_H

