#ifndef DIALOGAUTOCLOSEMESSAGEBOX_H
#define DIALOGAUTOCLOSEMESSAGEBOX_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class DialogAutoCloseMessageBox;
}

class DialogAutoCloseMessageBox : public QDialog
{
    Q_OBJECT

public:
    DialogAutoCloseMessageBox(QWidget *parent, QString title, QString text,
                              QString acceptText, QString rejectText, int delay_s, bool isTimeShow);
    ~DialogAutoCloseMessageBox();
    void setDelay(int s);
    int exec();

public slots:
    void setText(QString text);

private slots:
    void on_pushButtonOK_clicked();

    void on_pushButtonCancel_clicked();

    void onTimer();

private:
    Ui::DialogAutoCloseMessageBox *ui;
    QTimer *timer;
    int m_delay_s;
};

#endif // DIALOGAUTOCLOSEMESSAGEBOX_H
