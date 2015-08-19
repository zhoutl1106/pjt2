#ifndef DIALOGMODEMEM_H
#define DIALOGMODEMEM_H

#include <QDialog>

namespace Ui {
class DialogModeMem;
}

class DialogModeMem : public QDialog
{
    Q_OBJECT

public:
    explicit DialogModeMem(QWidget *parent = 0);
    ~DialogModeMem();
    void setTitle(QString str);
    void setModeAndMem(int mode, int mem);

private slots:
    void on_pushButtonRead_clicked();

    void on_pushButtonWrite_clicked();

    void on_pushButtonCancel_clicked();

    void on_radioButton_1_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();
    void on_radioButton_4_clicked();
    void on_radioButton_5_clicked();
    void on_radioButton_6_clicked();
    void on_radioButton_7_clicked();
    void on_radioButton_8_clicked();

private:
    Ui::DialogModeMem *ui;
    int m_mode;
};

#endif // DIALOGMODEMEM_H
