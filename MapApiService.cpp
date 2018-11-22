#include "MapApiService.h"
#include "defs.h"
#include <QDebug>

#define REQUEST_INTERVAL 200

MapApiService::MapApiService(QObject *parent)
    : QThread(parent)
{

}

MapApiService::~MapApiService()
{

}

void MapApiService::query(query_type type, void *data) {

    switch (type) {
    case query_none:
        break;
    case query_road_name:
        coordinate coor = *((coordinate*)data);
        qDebug() << "lat:" + QString::number(coor.latitude) + "lon:" + QString::number(coor.longitude);
        break;
    default:
        break;
    }

}

void MapApiService::run() {
    quint64 update_tm = 0, curr_tm = 0;
    QNetworkAccessManager *m_NetMgr = new QNetworkAccessManager;
    m_quit = false;
    
    while (!m_quit) {
        curr_tm = QDateTime::currentMSecsSinceEpoch();
        if (curr_tm >= update_tm) {
            if (m_request_que.size() > 0) {
                // TODO : 


            }
            update_tm = curr_tm + REQUEST_INTERVAL;
        }
    }


    m_NetMgr->deleteLater();
}
