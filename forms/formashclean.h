#ifndef FORMASHCLEAN_H
#define FORMASHCLEAN_H

#include <QWidget>
#include <QTimer>
#include "../dialogautoclosemessagebox.h"

namespace Ui {
class FormAshClean;
}

class FormAshClean : public QWidget
{
    Q_OBJECT

public:
    explicit FormAshClean(QWidget *parent = 0);
    ~FormAshClean();
    DialogAutoCloseMessageBox *dlgAsh;
    QTimer *timeAshTimer;

public slots:
    void updateData();
    void autoCleanAsh();

signals:
    void switchToPage(int index);

private slots:
    void on_toolButton_clicked();

    void on_toolButton_manual_clicked();

    void on_spinBox_thresholdFront_valueChanged(int arg1);

    void on_spinBox_thresholdEnd_valueChanged(int arg1);

    void on_spinBox_delay_valueChanged(int arg1);

    void on_spinBox_interval_valueChanged(int arg1);

    void on_radioButtonTiming_clicked();

    void on_radioButtonAuto_clicked();

    void timeAshClean();

    void on_toolButton_2_clicked();

private:
    Ui::FormAshClean *ui;
    void cleanAsh();
};

#endif // FORMASHCLEAN_H
