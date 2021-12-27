#include "processdata.h"
#include "udp.h"
ProcessData::ProcessData(QObject *parent) : QObject(parent)
{

}

void ProcessData::init()
{
    udp = new UDP;
    udp->init();


}
