#ifndef FORMACCURACYDETAILADJUST_H
#define FORMACCURACYDETAILADJUST_H

#include <QWidget>

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

signals:
    void switchToPage(int index);
    /*void setMode(QString str);
    void setMem(int index);
    void setAccuracy(quint8* data);
    void writeAccuracy();
    void uploadValue(int channel, int delta);

signals:
    void sendCmd(int type,QByteArray cmd);

protected:
*/
private slots:
    void on_toolButton_clicked();
/*

    void on_toolButton_5_clicked();

    void on_toolButton_6_clicked();

    void on_horizontalScrollBar_1_sliderReleased();

    void on_toolButton_8_clicked();

    void on_toolButton_7_clicked();

    void on_horizontalScrollBar_2_sliderReleased();

    void on_toolButton_10_clicked();

    void on_toolButton_9_clicked();

    void on_horizontalScrollBar_3_sliderReleased();

    void on_camera_currentIndexChanged(int index);

    void on_spinBox_valueChanged(int arg1);*/

private:
    Ui::FormAccuracyDetailAdjust *ui;
    quint8 m_accuracy[14][3];
};

#endif // FORMVIBRATIONADJUST_H
