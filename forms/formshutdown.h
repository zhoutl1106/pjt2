#ifndef FORMSHUTDOWN_H
#define FORMSHUTDOWN_H

#include <QWidget>

namespace Ui {
class FormShutdown;
}

class FormShutdown : public QWidget
{
    Q_OBJECT

public:
    explicit FormShutdown(QWidget *parent = 0);
    ~FormShutdown();
signals:
    void switchToPage(int index);

private:
    Ui::FormShutdown *ui;
};

#endif // FORMSHUTDOWN_H
