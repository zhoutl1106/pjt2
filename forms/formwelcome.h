#ifndef FORMWELCOME_H
#define FORMWELCOME_H

#include <QWidget>
#include <QShowEvent>
#include <QTimer>

namespace Ui {
class FormWelcome;
}

class FormWelcome : public QWidget
{
    Q_OBJECT

public:
    explicit FormWelcome(QWidget *parent = 0);
    ~FormWelcome();
    void showEvent(QShowEvent *);

public slots:
    void checkLicense();

signals:
    void switchToPage(int index);

private:
    Ui::FormWelcome *ui;
    QTimer *timer;
};

#endif // FORMWELCOME_H
