#ifndef FORMCCDCURVE_H
#define FORMCCDCURVE_H

#include <QWidget>
#include <QBrush>
#include <QTimer>
#include "dialogdisplayrange.h"
#include "../multistatustoolbutton.h"
#include "../dialogautoclosemessagebox.h"

#define DRAW_MODE_ALL       0
#define DRAW_MODE_INTERVAL  2

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
    DialogAutoCloseMessageBox *msgQueryAngleF;
    DialogAutoCloseMessageBox *msgQueryAngleE;
    void paintEvent(QPaintEvent *);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

public slots:
    void updateData();
    void updateRange(int upper, int lower);    \
    void updateCCD(QByteArray array);

signals:
    void switchToPage(int index);


private slots:
    void on_spinBox_f_valueChanged(int arg1);

    void on_toolButton_Clear_clicked();

    void on_horizontalScrollBar_valueChanged(int value);

    void on_spinBox_channel_valueChanged(int arg1);

    void onTimer();

    void onPeriod();

    void on_toolButton_SetRange_clicked();


    void on_toolButton_clicked();

    void on_toolButton_seperate_clicked();

    void on_toolButton_all_clicked();

    void on_toolButton_clockwise_clicked();

    void on_toolButton_anticlockwise_clicked();

    void on_toolButton_transmit_clicked();

    void on_toolButton_continue_clicked();

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
    int mode;
    int upperbound;
    int lowerbound;
    int drawStartY;
    int drawEndY;
    //bool ask1pos;
};

#endif // FORMCCDCURVE_H
