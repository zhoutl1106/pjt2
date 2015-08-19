#ifndef FORMVALVETEST_H
#define FORMVALVETEST_H

#include <QWidget>
#include <QTimer>
#include "../multistatustoolbutton.h"

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
    void switchToPage(int index);

private slots:
    void onTimer();
    void on_toolButton_clicked();
    void onCameraClicked();

    void on_toolButton_singleTest_clicked();

    void on_toolButton_autoTest_clicked();

//    void on_toolButton_valveOn_clicked();

    void on_toolButton_OK_clicked();

//    void on_toolButton_reset_clicked();

    void on_doubleSpinBox_delay_valueChanged(double arg1);

    void on_doubleSpinBox_pulseWidth_valueChanged(double arg1);

//    void on_spinBoxChannel_valueChanged(int arg1);

    void on_spinBoxGroup_valueChanged(int arg1);

    void on_spinBoxPos_valueChanged(int arg1);

    void on_radioButton_1_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();
    void on_radioButton_4_clicked();
    void on_radioButton_5_clicked();
    void on_radioButton_6_clicked();
    void on_radioButton_7_clicked();

    void on_toolButton_OK_2_clicked();

private:
    Ui::FormValveTest *ui;
    QTimer *timer;
    bool autoTest;
    MultiStatusToolButton *btn;
};

#endif // FORMVALVETEST_H
