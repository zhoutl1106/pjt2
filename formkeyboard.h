#ifndef FORMKEYBOARD_H
#define FORMKEYBOARD_H

#include <QDialog>

namespace Ui {
class FormKeyboard;
}

class FormKeyboard : public QDialog
{
    Q_OBJECT

public:
    explicit FormKeyboard(QWidget *parent = 0, bool isClose = false);
    ~FormKeyboard();
    QString getString();
signals:
    void sendText(QString);

private slots:

    void on_pushButton_C_clicked();

    void on_pushButton_OK_clicked();

    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
private:
    Ui::FormKeyboard *ui;
    QString str;
    bool m_isClose;
};

#endif // FORMKEYBOARD_H
