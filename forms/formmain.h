#ifndef FORMMAIN_H
#define FORMMAIN_H

#include <QWidget>
#include <QTimer>
#include <QShowEvent>

namespace Ui {
class FormMain;
}

class FormMain : public QWidget
{
    Q_OBJECT

public:
    explicit FormMain(QWidget *parent = 0);
    ~FormMain();
    void setValve(bool value);
    void setVibrator(bool value);
    void showEvent(QShowEvent *e);

signals:
    void switchToPage(int index);
private slots:

    void onLongPressTimer();

    void on_toolButtonExit_pressed();

    void on_toolButtonExit_released();

    void on_toolButton_5_clicked();

    void on_toolButton_6_clicked();

    void on_toolButton_8_clicked();

    void on_toolButton_3_clicked();

    void on_toolButtonValve_clicked();

    void on_toolButtonVibrator_clicked();

private:
    Ui::FormMain *ui;
    QTimer *longPressTimer;
};

#endif // FORMMAIN_H
