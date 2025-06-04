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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
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
    QLabel *label_udp_2;
    QFrame *line_3;
    QComboBox *comboBox_CMD;
    QLineEdit *lineEdit_device_port;
    QLabel *label_udp;
    QLabel *label_serial;
    QLabel *label_sensors;
    QLabel *label_communications;
    QComboBox *comboBox_PORT;
    QLineEdit *lineEdit_local_port;
    QLabel *label_device_ip;
    QLineEdit *lineEdit_device_ip;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *ax_label;
    QLabel *ax_data;
    QVBoxLayout *verticalLayout_5;
    QLabel *ay_label;
    QLabel *ay_data;
    QVBoxLayout *verticalLayout_4;
    QLabel *az_label;
    QLabel *az_data;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *gx_label;
    QLabel *gx_data;
    QVBoxLayout *verticalLayout_2;
    QLabel *gy_label;
    QLabel *gy_data;
    QVBoxLayout *verticalLayout;
    QLabel *gz_label;
    QLabel *gz_data;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowserProcessed;
    QTextBrowser *textBrowserUnProcessed;
    QLabel *label_devide_port;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_connectSerial;
    QPushButton *pushButton_sendSerial;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_sendUdp;
    QPushButton *pushButton_connectUdp;
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
        label_udp_2 = new QLabel(centralwidget);
        label_udp_2->setObjectName("label_udp_2");
        label_udp_2->setGeometry(QRect(20, 330, 78, 20));
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
        comboBox_PORT = new QComboBox(centralwidget);
        comboBox_PORT->setObjectName("comboBox_PORT");
        comboBox_PORT->setGeometry(QRect(14, 117, 82, 28));
        lineEdit_local_port = new QLineEdit(centralwidget);
        lineEdit_local_port->setObjectName("lineEdit_local_port");
        lineEdit_local_port->setGeometry(QRect(20, 202, 77, 28));
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
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(440, 40, 180, 151));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        ax_label = new QLabel(widget);
        ax_label->setObjectName("ax_label");
        ax_label->setFont(font);

        verticalLayout_6->addWidget(ax_label);

        ax_data = new QLabel(widget);
        ax_data->setObjectName("ax_data");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        ax_data->setFont(font1);

        verticalLayout_6->addWidget(ax_data);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        ay_label = new QLabel(widget);
        ay_label->setObjectName("ay_label");
        ay_label->setFont(font);

        verticalLayout_5->addWidget(ay_label);

        ay_data = new QLabel(widget);
        ay_data->setObjectName("ay_data");
        ay_data->setFont(font1);

        verticalLayout_5->addWidget(ay_data);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        az_label = new QLabel(widget);
        az_label->setObjectName("az_label");
        az_label->setFont(font);

        verticalLayout_4->addWidget(az_label);

        az_data = new QLabel(widget);
        az_data->setObjectName("az_data");
        az_data->setFont(font1);

        verticalLayout_4->addWidget(az_data);


        verticalLayout_8->addLayout(verticalLayout_4);


        horizontalLayout->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        gx_label = new QLabel(widget);
        gx_label->setObjectName("gx_label");
        gx_label->setFont(font);

        verticalLayout_3->addWidget(gx_label);

        gx_data = new QLabel(widget);
        gx_data->setObjectName("gx_data");
        gx_data->setFont(font1);

        verticalLayout_3->addWidget(gx_data);


        verticalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        gy_label = new QLabel(widget);
        gy_label->setObjectName("gy_label");
        gy_label->setFont(font);

        verticalLayout_2->addWidget(gy_label);

        gy_data = new QLabel(widget);
        gy_data->setObjectName("gy_data");
        gy_data->setFont(font1);

        verticalLayout_2->addWidget(gy_data);


        verticalLayout_7->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        gz_label = new QLabel(widget);
        gz_label->setObjectName("gz_label");
        gz_label->setFont(font);

        verticalLayout->addWidget(gz_label);

        gz_data = new QLabel(widget);
        gz_data->setObjectName("gz_data");
        gz_data->setFont(font1);

        verticalLayout->addWidget(gz_data);


        verticalLayout_7->addLayout(verticalLayout);


        horizontalLayout->addLayout(verticalLayout_7);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 360, 520, 194));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowserProcessed = new QTextBrowser(widget1);
        textBrowserProcessed->setObjectName("textBrowserProcessed");

        horizontalLayout_2->addWidget(textBrowserProcessed);

        textBrowserUnProcessed = new QTextBrowser(widget1);
        textBrowserUnProcessed->setObjectName("textBrowserUnProcessed");

        horizontalLayout_2->addWidget(textBrowserUnProcessed);

        label_devide_port = new QLabel(centralwidget);
        label_devide_port->setObjectName("label_devide_port");
        label_devide_port->setGeometry(QRect(180, 280, 94, 20));
        label_devide_port->setFont(font);
        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(138, 117, 168, 26));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_connectSerial = new QPushButton(widget2);
        pushButton_connectSerial->setObjectName("pushButton_connectSerial");

        horizontalLayout_4->addWidget(pushButton_connectSerial);

        pushButton_sendSerial = new QPushButton(widget2);
        pushButton_sendSerial->setObjectName("pushButton_sendSerial");

        horizontalLayout_4->addWidget(pushButton_sendSerial);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(188, 203, 168, 26));
        horizontalLayout_3 = new QHBoxLayout(widget3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_sendUdp = new QPushButton(widget3);
        pushButton_sendUdp->setObjectName("pushButton_sendUdp");

        horizontalLayout_3->addWidget(pushButton_sendUdp);

        pushButton_connectUdp = new QPushButton(widget3);
        pushButton_connectUdp->setObjectName("pushButton_connectUdp");

        horizontalLayout_3->addWidget(pushButton_connectUdp);

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
        lineEdit_device_port->setText(QString());
        label_udp->setText(QCoreApplication::translate("MainWindow", "WIFI - UDP", nullptr));
        label_serial->setText(QCoreApplication::translate("MainWindow", "SERIAL", nullptr));
        label_sensors->setText(QCoreApplication::translate("MainWindow", "SENSORS", nullptr));
        label_communications->setText(QCoreApplication::translate("MainWindow", "COMMUNICATIONS", nullptr));
        comboBox_PORT->setPlaceholderText(QCoreApplication::translate("MainWindow", "PORTS", nullptr));
        lineEdit_local_port->setText(QCoreApplication::translate("MainWindow", "30010", nullptr));
        label_device_ip->setText(QCoreApplication::translate("MainWindow", "DEVICE IP", nullptr));
        lineEdit_device_ip->setText(QString());
        ax_label->setText(QCoreApplication::translate("MainWindow", "AX", nullptr));
        ax_data->setText(QCoreApplication::translate("MainWindow", "ACC DATA", nullptr));
        ay_label->setText(QCoreApplication::translate("MainWindow", "AY", nullptr));
        ay_data->setText(QCoreApplication::translate("MainWindow", "ACC DATA", nullptr));
        az_label->setText(QCoreApplication::translate("MainWindow", "AZ", nullptr));
        az_data->setText(QCoreApplication::translate("MainWindow", "ACC DATA", nullptr));
        gx_label->setText(QCoreApplication::translate("MainWindow", "GX", nullptr));
        gx_data->setText(QCoreApplication::translate("MainWindow", "GYRO DATA", nullptr));
        gy_label->setText(QCoreApplication::translate("MainWindow", "GY", nullptr));
        gy_data->setText(QCoreApplication::translate("MainWindow", "GYRODATA", nullptr));
        gz_label->setText(QCoreApplication::translate("MainWindow", "GZ", nullptr));
        gz_data->setText(QCoreApplication::translate("MainWindow", "GYRODATA", nullptr));
        label_devide_port->setText(QCoreApplication::translate("MainWindow", "DEVICE PORT", nullptr));
        pushButton_connectSerial->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        pushButton_sendSerial->setText(QCoreApplication::translate("MainWindow", "SEND SERIAL", nullptr));
        pushButton_sendUdp->setText(QCoreApplication::translate("MainWindow", "SEND UDP", nullptr));
        pushButton_connectUdp->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
