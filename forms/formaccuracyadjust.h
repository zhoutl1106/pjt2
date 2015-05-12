#ifndef FORMACCURACYADJUST_H
#define FORMACCURACYADJUST_H

#include <QWidget>

namespace Ui {
class FormAccuracyAdjust;
}

class FormAccuracyAdjust : public QWidget
{
    Q_OBJECT

public:
    explicit FormAccuracyAdjust(QWidget *parent = 0);
    ~FormAccuracyAdjust();

signals:
    void switchToPage(int index);

public slots:
    void updateData();

private slots:
    void on_toolButton_clicked();
    void on_toolButton_11u_clicked();
    void on_toolButton_11d_clicked();
    void on_toolButton_12u_clicked();
    void on_toolButton_12d_clicked();
    void on_toolButton_13u_clicked();
    void on_toolButton_13d_clicked();
    void on_toolButton_21u_clicked();
    void on_toolButton_21d_clicked();
    void on_toolButton_22u_clicked();
    void on_toolButton_22d_clicked();
    void on_toolButton_23u_clicked();
    void on_toolButton_23d_clicked();
    void on_toolButton_31u_clicked();
    void on_toolButton_31d_clicked();
    void on_toolButton_32u_clicked();
    void on_toolButton_32d_clicked();
    void on_toolButton_33u_clicked();
    void on_toolButton_33d_clicked();

    void on_toolButton_Camera_clicked();

    void on_toolButton_2_clicked();

private:
    Ui::FormAccuracyAdjust *ui;
    void checkDataRange(int &v, int min, int max);
    bool isEndCamera;
    QString styleSheetCamera[2];
    QString textCamera[2];
    int last1;
    int last2;
    int last3;
};

#endif // FORMACCURACYADJUST_H
