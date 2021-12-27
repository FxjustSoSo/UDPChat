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
    udpRecv->bind(QHostAddress::LocalHost,10086);
    connect(udpRecv,&QUdpSocket::readyRead,this,&UDP::slotRecv);
}

/*接收*/
void UDP::slotRecv()
{
    while (udpRecv->hasPendingDatagrams())
    {
        QNetworkDatagram datagram = udpRecv->receiveDatagram();
        //processTheDatagram(datagram);
        emit signalRecv(datagram.data());
    }
}

/*发送*/
void UDP::slotSend(QByteArray _ba)
{
    cout<<"发送消息";
    udpSend->writeDatagram(_ba,QHostAddress::LocalHost,10011);
}
