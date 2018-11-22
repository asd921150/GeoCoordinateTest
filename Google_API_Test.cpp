#include "Google_API_Test.h"

Google_API_Test::Google_API_Test(QWidget *parent)
    : QMainWindow(parent),m_LocationInfo(NULL)
{
    ui.setupUi(this);

    m_map_api = new MapApiService(this);
    coordinate cor = { 22.1111,33.222 };
    m_map_api->query(query_road_name, &cor);

    startLocationAPI();


}

void Google_API_Test::startLocationAPI() {
    if (!m_LocationInfo) {
        m_LocationInfo = QGeoPositionInfoSource::createDefaultSource(this);
        m_LocationInfo->setPreferredPositioningMethods(QGeoPositionInfoSource::NonSatellitePositioningMethods);
        connect(m_LocationInfo, SIGNAL(positionUpdated(const QGeoPositionInfo&)), this,SLOT(positionUpdated(const QGeoPositionInfo&)));
        m_LocationInfo->startUpdates();
    }
}


void Google_API_Test::positionUpdated(const QGeoPositionInfo& posInfo) {
    if (posInfo.isValid()) {
        QGeoCoordinate geoCoordinate = posInfo.coordinate();

        qreal latitude = geoCoordinate.latitude();
        qreal longitude = geoCoordinate.longitude();

        qDebug() << QString("Latitude: %1 Longitude: %2").arg(latitude).arg(longitude);
    
    }
}