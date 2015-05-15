#ifndef FORMCNTCHECK_H
#define FORMCNTCHECK_H

#include <QDialog>

#define STATE_UNKNOWN   0
#define STATE_GOOD      1
#define STATE_BAD       2

#define MAX_GROUP_CNT     28
#define MAX_NUMBER_CNT    16

namespace Ui {
class FormCntCheck;
}

class FormCntCheck : public QDialog
{
    Q_OBJECT

public:
    explicit FormCntCheck(QWidget *parent = 0);
    ~FormCntCheck();
    void paintEvent(QPaintEvent *);
    void showEvent(QShowEvent *);
    void mouseMoveEvent(QMouseEvent *e);

public slots:
    void cntUpload(int channel, int pos, int value);

signals:
    void switchToPage(int index);

private slots:
    void askCnt();

    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

private:
    Ui::FormCntCheck *ui;
    char data_state[MAX_GROUP_CNT][MAX_NUMBER_CNT];
    int data[MAX_GROUP_CNT][MAX_NUMBER_CNT];
    int threshold;
    int currentChannel;
    int currentPos;
    bool isOver;
    int targetX;
    int targetY;
    QPixmap pic[3];
};

#endif // FORMCNTCHECK_H
