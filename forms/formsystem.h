#ifndef FORMSYSTEM_H
#define FORMSYSTEM_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class FormSystem;
}

class FormSystem : public QWidget
{
    Q_OBJECT

public:
    explicit FormSystem(QWidget *parent = 0);
    ~FormSystem();
signals:
    void switchToPage(int index);

public slots:

    void on_toolButton_clicked();

    void on_toolButton_7_clicked();

private slots:

    void on_toolButton_5_clicked();

    void on_toolButton_8_clicked();

    void on_toolButton_4_clicked();

    void on_toolButton_9_clicked();

private:
    Ui::FormSystem *ui;

};

#endif // FORMSYSTEM_H
