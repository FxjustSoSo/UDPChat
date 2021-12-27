#ifndef PROCESSDATA_H
#define PROCESSDATA_H

#include <QObject>

class UDP;
class ProcessData : public QObject
{
    Q_OBJECT
public:
    explicit ProcessData(QObject *parent = nullptr);
public:
    Q_INVOKABLE void init();
    Q_INVOKABLE void sendTest();

private:
    UDP* udp;
signals:
    void signaSend(QByteArray);
public slots:
    void slotRecv(QByteArray _ba);
};

#endif // PROCESSDATA_H
