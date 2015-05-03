#ifndef SERIALMANAGER_H
#define SERIALMANAGER_H

#include <QObject>
//#include "posix_qextserialport.h"
#include <QTimer>
#include <QDebug>
#include <QMessageBox>

class SerialManager : public QObject
{
    Q_OBJECT
public:
    explicit SerialManager(QObject *parent = 0);
    QByteArray buf485_1;
    quint8 checkSum(char* data, int len);
    bool isAshAccept;

signals:
    void updateCCD(QByteArray array);
    void finishBkg(int);
    void cleanAshRequire();
    void cntUpload(int channel, int pos, int value);
    void getMotor(int motor, int angle);

public slots:
    void comTimeOut();
    void writeCmd(int type,QByteArray cmd);

private:
    /*Posix_QextSerialPort *myCom232;
    Posix_QextSerialPort *myCom485_1;
    Posix_QextSerialPort *myCom485_2;*/
    QTimer *comTimer;
    QMessageBox *lowPresureMsg;
};

#endif // SERIALMANAGER_H
