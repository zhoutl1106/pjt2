#ifndef FORMWELCOME_H
#define FORMWELCOME_H

#include <QDialog>

namespace Ui {
class FormWelcome;
}

class FormWelcome : public QDialog
{
    Q_OBJECT

public:
    explicit FormWelcome(int type,QWidget *parent = 0);
    ~FormWelcome();
    void setPassword(int pass);
    void showEvent(QShowEvent *e);

public slots:
    void updateStatus(bool exit, QString str);

signals:
    void accessed();

private slots:
    void on_toolButton_1_clicked();
    void on_toolButton_2_clicked();
    void on_toolButton_3_clicked();
    void on_toolButton_4_clicked();
    void on_toolButton_5_clicked();
    void on_toolButton_6_clicked();
    void on_toolButton_7_clicked();
    void on_toolButton_8_clicked();
    void on_toolButton_9_clicked();
    void on_toolButton_0_clicked();
    void on_toolButton_back_clicked();
    void on_toolButton_OK_clicked();
    void onClose();

private:
    Ui::FormWelcome *ui;
    int account;
    int password;
    int m_type;
};

#endif // FORMWELCOME_H
