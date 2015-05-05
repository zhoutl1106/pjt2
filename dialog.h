#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QFile>
#include <QUdpSocket>
#include "filemanager.h"
#include "formkeyboard.h"
#include "forms/formwelcome.h"
#include "forms/formlicense.h"
#include "forms/formmain.h"
#include "forms/formvibrationadjust.h"
#include "forms/formmodeselect.h"
#include "forms/formaccuracyadjust.h"
#include "forms/formsystem.h"
#include "forms/formshutdown.h"
#include "forms/formadmin.h"
#include "forms/formashclean.h"
#include "forms/formccdcurve.h"
#include "forms/formvalvetest.h"
#include "forms/formaccuracydetailadjust.h"
#include "forms/formwholesetting.h"
#include "forms/formcntcheck.h"


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    FileManager *fileManager;
    void setModeAndMem(int mode, int mem);

    FormWelcome                 *form0_welcome;
    FormLicense                 *form1_account;
    FormMain                    *form2_main;
    FormVibrationAdjust         *form3_vibrationAdjust;
    FormModeSelect              *form4_mode;
    FormAccuracyAdjust          *form5_accuracy;
    FormSystem                  *form6_system;
    FormShutdown                *form7_shutdown;
    FormAdmin                   *form8_admin;
    FormAshClean                *form9_ash;
    FormCCDCurve                *form10_bkg;
    FormValveTest               *form11_valve;
    FormAccuracyDetailAdjust    *form12_accuracyDetail;
    FormWholeSetting            *form13_whole;
    FormCntCheck                *form14_monitor;

private slots:
    void onUdpRead();
    void onDisplayTime();

private:
    Ui::Dialog *ui;
    QTimer *displayTimer;
    QFile file;
    QUdpSocket *s;
};

#endif // DIALOG_H