#ifndef FORMLICENSE_H
#define FORMLICENSE_H

#include <QDialog>
#include "../formkeyboard.h"

namespace Ui {
class FormLicense;
}

class FormLicense : public QDialog
{
    Q_OBJECT

public:
    explicit FormLicense(QWidget *parent = 0);
    ~FormLicense();

public slots:
    void getLicenseString(QString str);

signals:
    void switchToPage(int index);

private:
    Ui::FormLicense *ui;
    FormKeyboard *keyboard;
};

#endif // FORMLICENSE_H
