#pragma once


#include <QtWidgets/QMainWindow>
#include "ui_Google_API_Test.h"

#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>


#include "MapApiService.h"

class Google_API_Test : public QMainWindow
{
    Q_OBJECT

public:
    Google_API_Test(QWidget *parent = Q_NULLPTR);

    public Q_SLOTS:
    void positionUpdated(const QGeoPositionInfo& posInfo);

private:
    Ui::Google_API_TestClass ui;

    MapApiService *m_map_api;
    QGeoPositionInfoSource *m_LocationInfo;

    void startLocationAPI();

};
