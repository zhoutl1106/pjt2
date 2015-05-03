#ifndef FORMADMIN_H
#define FORMADMIN_H

#include <QWidget>
#include "../formkeyboard.h"

namespace Ui {
class FormAdmin;
}

class FormAdmin : public QWidget
{
    Q_OBJECT

public:
    explicit FormAdmin(QWidget *parent = 0);
    ~FormAdmin();
signals:
    void switchToPage(int index);

public slots:
    void getLicenseString(QString str);

private:
    Ui::FormAdmin *ui;
    FormKeyboard *keyboard;
};

#endif // FORMADMIN_H
