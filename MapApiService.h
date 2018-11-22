#pragma once

#include <QObject>
#include <QThread>
#include <QMutex>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>

enum query_type {
    query_none = 0,
    query_road_name,
};

struct coordinate {
    float latitude;
    float longitude;
};


class MapApiService : public QThread
{
    Q_OBJECT

public:
    MapApiService(QObject *parent);
    ~MapApiService();
    
    void query(query_type type, void *data);

protected:
    virtual void run();

private:

    bool m_quit;
    QMutex m_mutex;
    QList<QNetworkRequest> m_request_que;
};
