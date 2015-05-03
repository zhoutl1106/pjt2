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
/*
    void on_toolButton_3_clicked();

    void on_toolButton_5_clicked();

    void on_toolButton_6_clicked();

    void on_toolButton_8_clicked();

    void on_toolButton_7_clicked();

    void on_toolButton_10_clicked();

    void on_toolButton_9_clicked();*/
private:
    Ui::FormAccuracyAdjust *ui;
    int last1;
    int last2;
    int last3;
};

#endif // FORMACCURACYADJUST_H
