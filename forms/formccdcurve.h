#ifndef FORMCCDCURVE_H
#define FORMCCDCURVE_H

#include <QWidget>
#include <QBrush>
#include <QTimer>
#include "dialogdisplayrange.h"
#include "../multistatustoolbutton.h"

namespace Ui {
class FormCCDCurve;
}

class FormCCDCurve : public QWidget
{
    Q_OBJECT

public:
    explicit FormCCDCurve(QWidget *parent = 0);
    ~FormCCDCurve();
    DialogDisplayRange *range;

public slots:
    void updateData();
    void updateRange(int upper, int lower);

signals:
    void switchToPage(int index);
    /*void paintEvent(QPaintEvent *);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void setMode(QString str);
    void setMem(int index);*/

/*
    void updateCCD(QByteArray array);
    void getPos(int motor, int angle);*/
private slots:/*
    void on_toolButton_Clear_clicked();

    void on_horizontalScrollBar_valueChanged(int value);

    void on_spinBox_f_valueChanged(int arg1);

    void on_toolButton_Clear_8_clicked();

    void on_toolButton_clockwise_f_clicked();
    void on_toolButton_anticlockwise_f_clicked();

    void on_spinBox_channel_valueChanged(int arg1);
    void onTimer();
    void onPeriod();
    void onSavePosTimeOut();

    void on_toolButton_Clear_4_clicked();
*/
    void on_toolButton_SetRange_clicked();


    void on_toolButton_clicked();
/*
    void on_toolButton_anticlockwise_f_2_clicked();

    void on_camera_2_currentIndexChanged(int index);*/

    void on_toolButton_seperate_clicked();

    void on_toolButton_all_clicked();

private:
    Ui::FormCCDCurve *ui;
    MultiStatusToolButton* btnBkg;
    MultiStatusToolButton* btnCamera;


    QByteArray m_array;
    bool isMousePressed;
    QPoint lastPos;
    int delta;
    QTimer *timer;
    QTimer *periodTimer;
    QTimer *savePosTimer;
    int mode;
    int upperbound;
    int lowerbound;
    bool ask1pos;
};

#endif // FORMCCDCURVE_H
