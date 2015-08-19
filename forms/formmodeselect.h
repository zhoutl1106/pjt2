#ifndef FORMMODESELECT_H
#define FORMMODESELECT_H

#include <QWidget>
#include <QButtonGroup>
#include <QToolButton>
#include "dialogmodemem.h"

namespace Ui {
class FormModeSelect;
}

class FormModeSelect : public QWidget
{
    Q_OBJECT

public:
    explicit FormModeSelect(QWidget *parent = 0);
    ~FormModeSelect();

public slots:
    void updateData();

signals:
    void switchToPage(int index);
    void bkgShow();
    void sendCmd(int i,QByteArray array);

private slots:
    void on_toolButton_clicked();

    void on_mode_1_clicked();
    void on_mode_2_clicked();
    void on_mode_3_clicked();
    void on_mode_4_clicked();
    void on_mode_5_clicked();

private:
    void setSelect(int mode, int mem);
    Ui::FormModeSelect *ui;
    int mode;
    QString buttonBkgChecked;
    QString buttonBkgUnchecked;
    DialogModeMem *dlgMem;
};

#endif // FORMMODESELECT_H
