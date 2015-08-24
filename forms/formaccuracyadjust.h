#ifndef FORMACCURACYADJUST_H
#define FORMACCURACYADJUST_H

#include <QWidget>
#include "../multistatustoolbutton.h"
#include "../longclicktoolbutton.h"
#include <QSlider>

namespace Ui {
class FormAccuracyAdjust;
}

class FormAccuracyAdjust : public QWidget
{
    Q_OBJECT

public:
    explicit FormAccuracyAdjust(QWidget *parent = 0);
    ~FormAccuracyAdjust();
    void setVibrator(bool value);
    void setValve(bool value);
    void reset();

signals:
    void switchToPage(int index);

private slots:
    void on_toolButton_clicked();
    void lbtnValue(int index, int value);

    void on_toolButton_2_clicked();

    void on_toolButtonValve_clicked();

    void on_toolButtonVibrator_clicked();

    void on_radioButton_1_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();

private:
    Ui::FormAccuracyAdjust *ui;
    void checkDataRange(int &v, int min, int max);
    QList<QWidget*> listWidget;
    QList<QSlider*> listSlider;
    LongClickToolButton *lbtn[8];
    int deltas[3][4];
};

#endif // FORMACCURACYADJUST_H
