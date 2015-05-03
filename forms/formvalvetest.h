#ifndef FORMVALVETEST_H
#define FORMVALVETEST_H

#include <QWidget>
#include <QTimer>
#include <QMessageBox>

namespace Ui {
class FormValveTest;
}

class FormValveTest : public QWidget
{
    Q_OBJECT

public:
    explicit FormValveTest(QWidget *parent = 0);
    ~FormValveTest();

public slots:
    void updateData();

signals:
    void switchToPage(int index);/*
    FormValveMonitor *formValveMonitor;
    void setParameter();

signals:
    void sendCmd(int type,QByteArray cmd);
*/
private slots:
    //void onTimer();
    void on_toolButton_clicked();/*

    void on_toolButton_singleTest_clicked();

    void on_toolButton_autoTest_clicked();

    void on_toolButton_valveOn_clicked();

    void on_toolButton_loopTest_3_clicked();

    void on_toolButton_loopTest_4_clicked();

    void on_doubleSpinBox_delay_valueChanged(double arg1);

    void on_doubleSpinBox_pulseWidth_valueChanged(double arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_spinBoxGroup_valueChanged(int arg1);

    void on_spinBoxPos_valueChanged(int arg1);

    void on_camera_currentIndexChanged(int index);*/

private:
    Ui::FormValveTest *ui;
    QTimer *timer;
    bool autoTest;
    QMessageBox *autoMsg;
};

#endif // FORMVALVETEST_H
