#ifndef SERIALMANAGER_H
#define SERIALMANAGER_H

#include <QObject>
#ifdef linux
#include "posix_qextserialport.h"
#endif
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

signals:
    void updateCCD(QByteArray array);
    void cleanAshRequire();
    void cntUpload(int channel, int pos, int value);
    void resetSuccess();

public slots:
    void comTimeOut();
    void writeCmd(int type,QByteArray cmd);

private:
#ifdef linux
    Posix_QextSerialPort *myCom232;
    Posix_QextSerialPort *myCom485_1;
    Posix_QextSerialPort *myCom485_2;
#endif
    QTimer *comTimer;
    QMessageBox *lowPresureMsg;
};

#endif // SERIALMANAGER_H
