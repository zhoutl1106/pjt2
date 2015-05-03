#ifndef FORMASHCLEAN_H
#define FORMASHCLEAN_H

#include <QWidget>
//#include "formkeyboard.h"
#include <QTimer>
//#include "dlgash.h"

namespace Ui {
class FormAshClean;
}

class FormAshClean : public QWidget
{
    Q_OBJECT

public:
    explicit FormAshClean(QWidget *parent = 0);
    ~FormAshClean();

public slots:
    void updateData();

signals:
    void switchToPage(int index);
   /* void setThreshold(short* dat);
    void setValue(int delay, int interval);

public slots:
    void cleanAsh();

signals:
    void sendCmd(int i,QByteArray array);

private slots:
    void on_toolButton_clicked();

    void on_toolButton_manual_clicked();

    void on_spinBox_threshold_valueChanged(int arg1);

    void on_spinBox_delay_valueChanged(int arg1);

    void on_spinBox_interval_valueChanged(int arg1);

    void on_radioButtonTiming_clicked();

    void on_radioButtonAuto_clicked();*/

private slots:
    void on_toolButton_clicked();

private:
    Ui::FormAshClean *ui;
   /* QTimer *singleTimer;
    QTimer *autoTimer;
    DlgAsh *dlgAsh;*/
};

#endif // FORMASHCLEAN_H
