#ifndef FORMWHOLESETTING_H
#define FORMWHOLESETTING_H

#include <QWidget>

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
    
private:
    Ui::FormWholeSetting *ui;
};

#endif // FORMWHOLESETTING_H
