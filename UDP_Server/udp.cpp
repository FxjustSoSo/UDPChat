#include "udp.h"
#include <QUdpSocket>
#include <QNetworkDatagram>
#include "Universal.h"
UDP::UDP(QObject *parent) : QObject(parent)
{

}

/*初始化*/
void UDP::init()
{
    udpRecv = new QUdpSocket(this);
    udpSend = new QUdpSocket(this);
    udpRecv->bind(QHostAddress::LocalHost,10011);
    connect(udpRecv,&QUdpSocket::readyRead,this,&UDP::slotRecv);
}

/*接收*/
void UDP::slotRecv()
{
    while (udpRecv->hasPendingDatagrams())
    {
        QNetworkDatagram datagram = udpRecv->receiveDatagram();
        cout<<QString(datagram.data().data());
        //processTheDatagram(datagram);
    }
}

/*发送*/
void UDP::slotSend()
{

}
