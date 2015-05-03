#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
#include "dialogautoclosemessagebox.h"
#include <QTime>
#include <QDate>
#include <QFile>
#include "encryption.h"
#include <QVBoxLayout>

extern QString styleSheet;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    displayTimer = new QTimer();
    displayTimer->setInterval(1000);
    connect(displayTimer,SIGNAL(timeout()),this,SLOT(onDisplayTime()));
    displayTimer->start();
    s = new QUdpSocket();
    s->bind(8889,QUdpSocket::ShareAddress);
    connect(s,SIGNAL(readyRead()),this,SLOT(onUdpRead()));
    file.setFileName("e:/1");
    fileManager = new FileManager;


    form0_welcome = new FormWelcome;
    form1_account = new FormLicense;
    form2_main = new FormMain;
    form3_vibrationAdjust = new FormVibrationAdjust;
    form4_mode = new FormModeSelect;
    form5_accuracy = new FormAccuracyAdjust;
    form6_system = new FormSystem;
    form7_shutdown = new FormShutdown;
    form8_admin = new FormAdmin;
    form9_ash = new FormAshClean;
    form10_bkg = new FormCCDCurve;
    form11_valve = new FormValveTest;
    form12_accuracyDetail = new FormAccuracyDetailAdjust;
    form13_whole = new FormWholeSetting;
    form14_monitor = new FormCntCheck;

    connect(form0_welcome,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form1_account,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form2_main,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form3_vibrationAdjust,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form4_mode,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form5_accuracy,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form6_system,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form7_shutdown,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form8_admin,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form9_ash,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form10_bkg,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form11_valve,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form12_accuracyDetail,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form13_whole,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(form14_monitor,SIGNAL(switchToPage(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));

    connect(fileManager,SIGNAL(configChanged()),form3_vibrationAdjust,SLOT(updateData()));
    connect(fileManager,SIGNAL(configChanged()),form4_mode,SLOT(updateData()));
    connect(fileManager,SIGNAL(configChanged()),form5_accuracy,SLOT(updateData()));
    connect(fileManager,SIGNAL(configChanged()),form9_ash,SLOT(updateData()));
    connect(fileManager,SIGNAL(configChanged()),form10_bkg,SLOT(updateData()));
    connect(fileManager,SIGNAL(configChanged()),form11_valve,SLOT(updateData()));
    connect(fileManager,SIGNAL(configChanged()),form12_accuracyDetail,SLOT(updateData()));
    connect(fileManager,SIGNAL(configChanged()),form13_whole,SLOT(updateData()));
    connect(fileManager,SIGNAL(configChanged()),form14_monitor,SLOT(updateData()));

    ui->stackedWidget->insertWidget(0,form14_monitor);
    ui->stackedWidget->insertWidget(0,form13_whole);
    ui->stackedWidget->insertWidget(0,form12_accuracyDetail);
    ui->stackedWidget->insertWidget(0,form11_valve);
    ui->stackedWidget->insertWidget(0,form10_bkg);
    ui->stackedWidget->insertWidget(0,form9_ash);
    ui->stackedWidget->insertWidget(0,form8_admin);
    ui->stackedWidget->insertWidget(0,form7_shutdown);
    ui->stackedWidget->insertWidget(0,form6_system);
    ui->stackedWidget->insertWidget(0,form5_accuracy);
    ui->stackedWidget->insertWidget(0,form4_mode);
    ui->stackedWidget->insertWidget(0,form3_vibrationAdjust);
    ui->stackedWidget->insertWidget(0,form2_main);
    ui->stackedWidget->insertWidget(0,form1_account);
    ui->stackedWidget->insertWidget(0,form0_welcome);
    ui->stackedWidget->setCurrentIndex(0);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setModeAndMem(int mode, int mem)
{
    QString str;
    switch(mode)
    {
    case 1:str = "当前模式/ 选异色";break;
    case 2:str = "当前模式/ 黄白同选";break;
    case 3:str = "当前模式/ 选黑米";break;
    case 4:str = "当前模式/ 选腹白";break;
    case 5:str = "当前模式/ 选糯米";break;
    default:
        return;
    }
    str += " 记忆" + QString::number(mem);
    ui->label->setText(str);
}

void Dialog::onDisplayTime()
{
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();
    ui->labelHour->setText(time.toString("hh"));
    ui->labelMinute->setText(time.toString("mm"));
    ui->labelDate->setText(date.toString("yyyy/MM/dd"));
}

void Dialog::onUdpRead()
{
    while (s->hasPendingDatagrams()) {
            QByteArray datagram;
            datagram.resize(s->pendingDatagramSize());
            QHostAddress sender;
            quint16 senderPort;

            s->readDatagram(datagram.data(), datagram.size(),
                                    &sender, &senderPort);

            char *dat = datagram.data();
            int index = *((int*)dat);
            short len = *((short*)(dat + 4));
            char cmd[6] = {0};
            *((int*)cmd) = index;
            if(index == 0)
                file.remove();

            if(len == 1024 && datagram.length() == 1030)
            {
                file.open(QFile::Append);
                *((short*)(cmd+4)) = 0;
                file.write(dat+6,len);
                file.close();
            }
            else if(len != 1024 && datagram.length() == len + 6)
            {
                file.open(QFile::Append);
                *((short*)(cmd+4)) = 2;
                file.write(dat+6,len);
                file.close();
                //system("cp /2 /pjt2");
                //system("chmod +x /pjt2");
            }
            else
                *((short*)(cmd+4)) = 1;
            s->writeDatagram(cmd,6,sender,senderPort);
        }
}

