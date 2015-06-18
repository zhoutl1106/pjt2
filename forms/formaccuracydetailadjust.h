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

public slots:
    void updateData();
    void lbtnValue(int index, int value);

signals:
    void switchToPage(int index);

private slots:
    void on_toolButton_clicked();
    void onCamera();

    void on_comboBox_currentIndexChanged(int index);

    void on_toolButton_2_clicked();

    void on_verticalSlider11_valueChanged(int value);
    void on_verticalSlider12_valueChanged(int value);
    void on_verticalSlider13_valueChanged(int value);

private:
    Ui::FormAccuracyDetailAdjust *ui;
    MultiStatusToolButton *btn;
    LongClickToolButton *lbtn[6];
    QList<QWidget*> list;
    int lastValue[3];
    bool isSaveValue;
};

#endif // FORMVIBRATIONADJUST_H
