#ifndef UDP_H
#define UDP_H

#include <QObject>

class QUdpSocket;
class QNetworkDatagram;
class UDP : public QObject
{
    Q_OBJECT
public:
    explicit UDP(QObject *parent = nullptr);
    void init();

private:
    QUdpSocket* udpSend;
    QUdpSocket* udpRecv;
signals:

public slots:
    void slotRecv();
    void slotSend();

};

#endif // UDP_H
