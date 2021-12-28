#include "processdata.h"
#include "udp.h"
#include "Universal.h"
#include <windows.h>

ProcessData::ProcessData(QObject *parent) : QObject(parent)
{

}

void ProcessData::init()
{
    udp = new UDP;
    udp->init();
    connect(udp,&UDP::signalRecv,this,&ProcessData::slotRecv);
    connect(this,&ProcessData::signaSend,udp,&UDP::slotSend);
}

/*发送测试*/
void ProcessData::sendTest()
{
    emit signaSend(QByteArray("你好Qt"));
}

void ProcessData::slotRecv(QByteArray _ba)
{
    cout<<QString(_ba.data());
}

