#ifndef FORMACCURACYDETAILADJUST_H
#define FORMACCURACYDETAILADJUST_H

#include <QWidget>
#include "../multistatustoolbutton.h"
#include "../longclicktoolbutton.h"

namespace Ui {
class FormAccuracyDetailAdjust;
}

class FormAccuracyDetailAdjust : public QWidget
{
    Q_OBJECT

public:
    explicit FormAccuracyDetailAdjust(QWidget *parent = 0);
    ~FormAccuracyDetailAdjust();
    void setVibrator(bool value);
    void setValve(bool value);

public slots:
    void updateData();
    void lbtnValue(int index, int value);

signals:
    void switchToPage(int index);

private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_toolButtonValve_clicked();

    void on_toolButtonVibrator_clicked();

    void on_radioButton_1_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();
    void on_radioButton_4_clicked();
    void on_radioButton_5_clicked();
    void on_radioButton_6_clicked();
    void on_radioButton_7_clicked();

private:
    Ui::FormAccuracyDetailAdjust *ui;
    LongClickToolButton *lbtn[12];
    QList<QWidget*> list;
};

#endif // FORMVIBRATIONADJUST_H
