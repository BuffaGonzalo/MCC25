/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQUIT;
    QAction *actionPROTOCOL_DATA;
    QAction *actionCAR_MODE;
    QAction *actionHELP;
    QWidget *centralwidget;
    QTextBrowser *textBrowserUnProcessed;
    QTextBrowser *textBrowserProcessed;
    QLabel *label_udp_2;
    QFrame *line_3;
    QComboBox *comboBox_CMD;
    QLabel *label_devide_port;
    QLineEdit *lineEdit_device_port;
    QLabel *label_udp;
    QLabel *label_serial;
    QLabel *label_sensors;
    QLabel *label_communications;
    QLabel *label_left_encoder_data;
    QLabel *label_left_encoder;
    QPushButton *pushButton_sendSerial;
    QPushButton *pushButton_connectSerial;
    QComboBox *comboBox_PORT;
    QLabel *label_right_encoder;
    QLabel *label_right_encoder_data;
    QPushButton *pushButton_connectUdp;
    QLineEdit *lineEdit_local_port;
    QPushButton *pushButton_sendUdp;
    QLabel *label_device_ip;
    QLineEdit *lineEdit_device_ip;
    QLineEdit *PosX;
    QLineEdit *PosY;
    QLabel *label_sensors_2;
    QLabel *label_sensors_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 650);
        MainWindow->setMinimumSize(QSize(800, 650));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Im\303\241genes/Icons/mazeIcon.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionQUIT = new QAction(MainWindow);
        actionQUIT->setObjectName("actionQUIT");
        actionPROTOCOL_DATA = new QAction(MainWindow);
        actionPROTOCOL_DATA->setObjectName("actionPROTOCOL_DATA");
        actionCAR_MODE = new QAction(MainWindow);
        actionCAR_MODE->setObjectName("actionCAR_MODE");
        actionHELP = new QAction(MainWindow);
        actionHELP->setObjectName("actionHELP");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setAutoFillBackground(false);
        textBrowserUnProcessed = new QTextBrowser(centralwidget);
        textBrowserUnProcessed->setObjectName("textBrowserUnProcessed");
        textBrowserUnProcessed->setGeometry(QRect(340, 360, 271, 221));
        textBrowserProcessed = new QTextBrowser(centralwidget);
        textBrowserProcessed->setObjectName("textBrowserProcessed");
        textBrowserProcessed->setGeometry(QRect(30, 360, 271, 221));
        label_udp_2 = new QLabel(centralwidget);
        label_udp_2->setObjectName("label_udp_2");
        label_udp_2->setGeometry(QRect(20, 320, 78, 20));
        QFont font;
        font.setBold(true);
        label_udp_2->setFont(font);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(12, 12, 338, 16));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        comboBox_CMD = new QComboBox(centralwidget);
        comboBox_CMD->setObjectName("comboBox_CMD");
        comboBox_CMD->setGeometry(QRect(13, 52, 82, 28));
        label_devide_port = new QLabel(centralwidget);
        label_devide_port->setObjectName("label_devide_port");
        label_devide_port->setGeometry(QRect(187, 277, 94, 20));
        label_devide_port->setFont(font);
        lineEdit_device_port = new QLineEdit(centralwidget);
        lineEdit_device_port->setObjectName("lineEdit_device_port");
        lineEdit_device_port->setGeometry(QRect(20, 277, 77, 28));
        label_udp = new QLabel(centralwidget);
        label_udp->setObjectName("label_udp");
        label_udp->setGeometry(QRect(20, 173, 78, 20));
        label_udp->setFont(font);
        label_serial = new QLabel(centralwidget);
        label_serial->setObjectName("label_serial");
        label_serial->setGeometry(QRect(14, 88, 50, 20));
        label_serial->setFont(font);
        label_sensors = new QLabel(centralwidget);
        label_sensors->setObjectName("label_sensors");
        label_sensors->setGeometry(QRect(438, 10, 65, 20));
        label_sensors->setFont(font);
        label_communications = new QLabel(centralwidget);
        label_communications->setObjectName("label_communications");
        label_communications->setGeometry(QRect(14, 24, 140, 20));
        label_communications->setFont(font);
        label_left_encoder_data = new QLabel(centralwidget);
        label_left_encoder_data->setObjectName("label_left_encoder_data");
        label_left_encoder_data->setGeometry(QRect(439, 80, 152, 27));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_left_encoder_data->setFont(font1);
        label_left_encoder = new QLabel(centralwidget);
        label_left_encoder->setObjectName("label_left_encoder");
        label_left_encoder->setGeometry(QRect(439, 53, 106, 20));
        label_left_encoder->setFont(font);
        pushButton_sendSerial = new QPushButton(centralwidget);
        pushButton_sendSerial->setObjectName("pushButton_sendSerial");
        pushButton_sendSerial->setGeometry(QRect(225, 117, 97, 29));
        pushButton_connectSerial = new QPushButton(centralwidget);
        pushButton_connectSerial->setObjectName("pushButton_connectSerial");
        pushButton_connectSerial->setGeometry(QRect(138, 117, 80, 29));
        comboBox_PORT = new QComboBox(centralwidget);
        comboBox_PORT->setObjectName("comboBox_PORT");
        comboBox_PORT->setGeometry(QRect(14, 117, 82, 28));
        label_right_encoder = new QLabel(centralwidget);
        label_right_encoder->setObjectName("label_right_encoder");
        label_right_encoder->setGeometry(QRect(600, 53, 119, 20));
        label_right_encoder->setFont(font);
        label_right_encoder_data = new QLabel(centralwidget);
        label_right_encoder_data->setObjectName("label_right_encoder_data");
        label_right_encoder_data->setGeometry(QRect(600, 80, 152, 27));
        label_right_encoder_data->setFont(font1);
        pushButton_connectUdp = new QPushButton(centralwidget);
        pushButton_connectUdp->setObjectName("pushButton_connectUdp");
        pushButton_connectUdp->setGeometry(QRect(187, 202, 80, 29));
        lineEdit_local_port = new QLineEdit(centralwidget);
        lineEdit_local_port->setObjectName("lineEdit_local_port");
        lineEdit_local_port->setGeometry(QRect(20, 202, 77, 28));
        pushButton_sendUdp = new QPushButton(centralwidget);
        pushButton_sendUdp->setObjectName("pushButton_sendUdp");
        pushButton_sendUdp->setGeometry(QRect(274, 202, 80, 29));
        label_device_ip = new QLabel(centralwidget);
        label_device_ip->setObjectName("label_device_ip");
        label_device_ip->setGeometry(QRect(177, 240, 69, 20));
        label_device_ip->setFont(font);
        lineEdit_device_ip = new QLineEdit(centralwidget);
        lineEdit_device_ip->setObjectName("lineEdit_device_ip");
        lineEdit_device_ip->setGeometry(QRect(20, 240, 72, 28));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_device_ip->sizePolicy().hasHeightForWidth());
        lineEdit_device_ip->setSizePolicy(sizePolicy);
        PosX = new QLineEdit(centralwidget);
        PosX->setObjectName("PosX");
        PosX->setGeometry(QRect(580, 160, 113, 28));
        PosY = new QLineEdit(centralwidget);
        PosY->setObjectName("PosY");
        PosY->setGeometry(QRect(580, 190, 113, 28));
        label_sensors_2 = new QLabel(centralwidget);
        label_sensors_2->setObjectName("label_sensors_2");
        label_sensors_2->setGeometry(QRect(510, 160, 65, 20));
        label_sensors_2->setFont(font);
        label_sensors_3 = new QLabel(centralwidget);
        label_sensors_3->setObjectName("label_sensors_3");
        label_sensors_3->setGeometry(QRect(510, 190, 65, 20));
        label_sensors_3->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AMC -AutoMazeCar", nullptr));
        actionQUIT->setText(QCoreApplication::translate("MainWindow", "QUIT", nullptr));
        actionPROTOCOL_DATA->setText(QCoreApplication::translate("MainWindow", "PROTOCOL DATA", nullptr));
        actionCAR_MODE->setText(QCoreApplication::translate("MainWindow", "CAR MODE", nullptr));
        actionHELP->setText(QCoreApplication::translate("MainWindow", "HELP", nullptr));
        label_udp_2->setText(QCoreApplication::translate("MainWindow", "DEBUG", nullptr));
        label_devide_port->setText(QCoreApplication::translate("MainWindow", "DEVICE PORT", nullptr));
        lineEdit_device_port->setText(QString());
        label_udp->setText(QCoreApplication::translate("MainWindow", "WIFI - UDP", nullptr));
        label_serial->setText(QCoreApplication::translate("MainWindow", "SERIAL", nullptr));
        label_sensors->setText(QCoreApplication::translate("MainWindow", "SENSORS", nullptr));
        label_communications->setText(QCoreApplication::translate("MainWindow", "COMMUNICATIONS", nullptr));
        label_left_encoder_data->setText(QCoreApplication::translate("MainWindow", "ENCODER DATA", nullptr));
        label_left_encoder->setText(QCoreApplication::translate("MainWindow", "LEFT ENCODER", nullptr));
        pushButton_sendSerial->setText(QCoreApplication::translate("MainWindow", "SEND SERIAL", nullptr));
        pushButton_connectSerial->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        comboBox_PORT->setPlaceholderText(QCoreApplication::translate("MainWindow", "PORTS", nullptr));
        label_right_encoder->setText(QCoreApplication::translate("MainWindow", "RIGHT ENCODER", nullptr));
        label_right_encoder_data->setText(QCoreApplication::translate("MainWindow", "ENCODER DATA", nullptr));
        pushButton_connectUdp->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        lineEdit_local_port->setText(QCoreApplication::translate("MainWindow", "30010", nullptr));
        pushButton_sendUdp->setText(QCoreApplication::translate("MainWindow", "SEND UDP", nullptr));
        label_device_ip->setText(QCoreApplication::translate("MainWindow", "DEVICE IP", nullptr));
        lineEdit_device_ip->setText(QString());
        label_sensors_2->setText(QCoreApplication::translate("MainWindow", "POS X", nullptr));
        label_sensors_3->setText(QCoreApplication::translate("MainWindow", "POS Y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
