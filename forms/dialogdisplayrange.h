#ifndef DIALOGDISPLAYRANGE_H
#define DIALOGDISPLAYRANGE_H

#include <QDialog>

namespace Ui {
class DialogDisplayRange;
}

class DialogDisplayRange : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDisplayRange(QWidget *parent = 0);
    ~DialogDisplayRange();
    void setRange(int upper, int lower);

signals:
    void displayRange(int,int);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

private:
    Ui::DialogDisplayRange *ui;
};

#endif // DIALOGDISPLAYRANGE_H
