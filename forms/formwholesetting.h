#ifndef FORMWHOLESETTING_H
#define FORMWHOLESETTING_H

#include <QWidget>
#include "../multistatustoolbutton.h"

namespace Ui {
class FormWholeSetting;
}

class FormWholeSetting : public QWidget
{
    Q_OBJECT

public:
    explicit FormWholeSetting(QWidget *parent = 0);
    ~FormWholeSetting();

public slots:
    void updateData();

signals:
    void switchToPage(int index);

private slots:
    void on_toolButton_clicked();
    
    void on_toolButtonMain_clicked();

    void on_toolButtonCfg_clicked();

    void on_toolButtonIP_clicked();

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::FormWholeSetting *ui;
    MultiStatusToolButton *btn[7];
    QList<QWidget*> list;
};

#endif // FORMWHOLESETTING_H
