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
#include <QtWidgets/QSpacerItem>
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
    QLabel *label_udp;
    QLabel *label_serial;
    QLabel *label_sensors;
    QLabel *label_communications;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowserUnProcessed;
    QTextBrowser *textBrowserProcessed;
    QFrame *line;
    QFrame *line_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *comboBox_PORT;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_connectSerial;
    QPushButton *pushButton_sendSerial;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *ax_label;
    QLabel *ax_data;
    QLabel *ay_label;
    QLabel *ay_data;
    QLabel *az_label;
    QLabel *az_data;
    QLabel *gx_label;
    QLabel *gx_data;
    QLabel *gy_label;
    QLabel *gy_data;
    QLabel *gz_label;
    QLabel *gz_data;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *ir1_label;
    QLabel *ir1_data;
    QLabel *ir2_label;
    QLabel *ir2_data;
    QLabel *ir3_label;
    QLabel *ir3_data;
    QLabel *ir4_label;
    QLabel *ir4_data;
    QLabel *ir5_label;
    QLabel *ir5_data;
    QLabel *ir6_label;
    QLabel *ir6_data;
    QLabel *ir7_label;
    QLabel *ir7_data;
    QLabel *ir8_label;
    QLabel *ir8_data;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_local_port;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_sendUdp;
    QPushButton *pushButton_connectUdp;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_device_ip;
    QSpacerItem *horizontalSpacer;
    QLabel *label_device_ip;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_device_port;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_devide_port;
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
        label_udp_2->setGeometry(QRect(20, 350, 78, 20));
        QFont font;
        font.setBold(true);
        label_udp_2->setFont(font);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(12, 12, 491, 16));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        comboBox_CMD = new QComboBox(centralwidget);
        comboBox_CMD->setObjectName("comboBox_CMD");
        comboBox_CMD->setGeometry(QRect(13, 52, 481, 28));
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
        label_sensors->setGeometry(QRect(540, 10, 65, 20));
        label_sensors->setFont(font);
        label_communications = new QLabel(centralwidget);
        label_communications->setObjectName("label_communications");
        label_communications->setGeometry(QRect(14, 24, 140, 20));
        label_communications->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 380, 461, 241));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowserUnProcessed = new QTextBrowser(layoutWidget);
        textBrowserUnProcessed->setObjectName("textBrowserUnProcessed");

        horizontalLayout_2->addWidget(textBrowserUnProcessed);

        textBrowserProcessed = new QTextBrowser(layoutWidget);
        textBrowserProcessed->setObjectName("textBrowserProcessed");

        horizontalLayout_2->addWidget(textBrowserProcessed);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(500, 20, 20, 611));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(20, 330, 481, 16));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(14, 117, 481, 33));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        comboBox_PORT = new QComboBox(layoutWidget1);
        comboBox_PORT->setObjectName("comboBox_PORT");

        horizontalLayout_8->addWidget(comboBox_PORT);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_connectSerial = new QPushButton(layoutWidget1);
        pushButton_connectSerial->setObjectName("pushButton_connectSerial");

        horizontalLayout_4->addWidget(pushButton_connectSerial);

        pushButton_sendSerial = new QPushButton(layoutWidget1);
        pushButton_sendSerial->setObjectName("pushButton_sendSerial");

        horizontalLayout_4->addWidget(pushButton_sendSerial);


        horizontalLayout_8->addLayout(horizontalLayout_4);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(540, 43, 115, 361));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ax_label = new QLabel(layoutWidget2);
        ax_label->setObjectName("ax_label");
        ax_label->setFont(font);

        verticalLayout->addWidget(ax_label);

        ax_data = new QLabel(layoutWidget2);
        ax_data->setObjectName("ax_data");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        ax_data->setFont(font1);

        verticalLayout->addWidget(ax_data);

        ay_label = new QLabel(layoutWidget2);
        ay_label->setObjectName("ay_label");
        ay_label->setFont(font);

        verticalLayout->addWidget(ay_label);

        ay_data = new QLabel(layoutWidget2);
        ay_data->setObjectName("ay_data");
        ay_data->setFont(font1);

        verticalLayout->addWidget(ay_data);

        az_label = new QLabel(layoutWidget2);
        az_label->setObjectName("az_label");
        az_label->setFont(font);

        verticalLayout->addWidget(az_label);

        az_data = new QLabel(layoutWidget2);
        az_data->setObjectName("az_data");
        az_data->setFont(font1);

        verticalLayout->addWidget(az_data);

        gx_label = new QLabel(layoutWidget2);
        gx_label->setObjectName("gx_label");
        gx_label->setFont(font);

        verticalLayout->addWidget(gx_label);

        gx_data = new QLabel(layoutWidget2);
        gx_data->setObjectName("gx_data");
        gx_data->setFont(font1);

        verticalLayout->addWidget(gx_data);

        gy_label = new QLabel(layoutWidget2);
        gy_label->setObjectName("gy_label");
        gy_label->setFont(font);

        verticalLayout->addWidget(gy_label);

        gy_data = new QLabel(layoutWidget2);
        gy_data->setObjectName("gy_data");
        gy_data->setFont(font1);

        verticalLayout->addWidget(gy_data);

        gz_label = new QLabel(layoutWidget2);
        gz_label->setObjectName("gz_label");
        gz_label->setFont(font);

        verticalLayout->addWidget(gz_label);

        gz_data = new QLabel(layoutWidget2);
        gz_data->setObjectName("gz_data");
        gz_data->setFont(font1);

        verticalLayout->addWidget(gz_data);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(670, 40, 91, 483));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ir1_label = new QLabel(layoutWidget3);
        ir1_label->setObjectName("ir1_label");
        ir1_label->setFont(font);

        verticalLayout_2->addWidget(ir1_label);

        ir1_data = new QLabel(layoutWidget3);
        ir1_data->setObjectName("ir1_data");
        ir1_data->setFont(font1);

        verticalLayout_2->addWidget(ir1_data);

        ir2_label = new QLabel(layoutWidget3);
        ir2_label->setObjectName("ir2_label");
        ir2_label->setFont(font);

        verticalLayout_2->addWidget(ir2_label);

        ir2_data = new QLabel(layoutWidget3);
        ir2_data->setObjectName("ir2_data");
        ir2_data->setFont(font1);

        verticalLayout_2->addWidget(ir2_data);

        ir3_label = new QLabel(layoutWidget3);
        ir3_label->setObjectName("ir3_label");
        ir3_label->setFont(font);

        verticalLayout_2->addWidget(ir3_label);

        ir3_data = new QLabel(layoutWidget3);
        ir3_data->setObjectName("ir3_data");
        ir3_data->setFont(font1);

        verticalLayout_2->addWidget(ir3_data);

        ir4_label = new QLabel(layoutWidget3);
        ir4_label->setObjectName("ir4_label");
        ir4_label->setFont(font);

        verticalLayout_2->addWidget(ir4_label);

        ir4_data = new QLabel(layoutWidget3);
        ir4_data->setObjectName("ir4_data");
        ir4_data->setFont(font1);

        verticalLayout_2->addWidget(ir4_data);

        ir5_label = new QLabel(layoutWidget3);
        ir5_label->setObjectName("ir5_label");
        ir5_label->setFont(font);

        verticalLayout_2->addWidget(ir5_label);

        ir5_data = new QLabel(layoutWidget3);
        ir5_data->setObjectName("ir5_data");
        ir5_data->setFont(font1);

        verticalLayout_2->addWidget(ir5_data);

        ir6_label = new QLabel(layoutWidget3);
        ir6_label->setObjectName("ir6_label");
        ir6_label->setFont(font);

        verticalLayout_2->addWidget(ir6_label);

        ir6_data = new QLabel(layoutWidget3);
        ir6_data->setObjectName("ir6_data");
        ir6_data->setFont(font1);

        verticalLayout_2->addWidget(ir6_data);

        ir7_label = new QLabel(layoutWidget3);
        ir7_label->setObjectName("ir7_label");
        ir7_label->setFont(font);

        verticalLayout_2->addWidget(ir7_label);

        ir7_data = new QLabel(layoutWidget3);
        ir7_data->setObjectName("ir7_data");
        ir7_data->setFont(font1);

        verticalLayout_2->addWidget(ir7_data);

        ir8_label = new QLabel(layoutWidget3);
        ir8_label->setObjectName("ir8_label");
        ir8_label->setFont(font);

        verticalLayout_2->addWidget(ir8_label);

        ir8_data = new QLabel(layoutWidget3);
        ir8_data->setObjectName("ir8_data");
        ir8_data->setFont(font1);

        verticalLayout_2->addWidget(ir8_data);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(22, 204, 471, 109));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lineEdit_local_port = new QLineEdit(widget);
        lineEdit_local_port->setObjectName("lineEdit_local_port");

        horizontalLayout_7->addWidget(lineEdit_local_port);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_sendUdp = new QPushButton(widget);
        pushButton_sendUdp->setObjectName("pushButton_sendUdp");

        horizontalLayout_3->addWidget(pushButton_sendUdp);

        pushButton_connectUdp = new QPushButton(widget);
        pushButton_connectUdp->setObjectName("pushButton_connectUdp");

        horizontalLayout_3->addWidget(pushButton_connectUdp);


        horizontalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lineEdit_device_ip = new QLineEdit(widget);
        lineEdit_device_ip->setObjectName("lineEdit_device_ip");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_device_ip->sizePolicy().hasHeightForWidth());
        lineEdit_device_ip->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lineEdit_device_ip);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label_device_ip = new QLabel(widget);
        label_device_ip->setObjectName("label_device_ip");
        label_device_ip->setFont(font);

        horizontalLayout_5->addWidget(label_device_ip);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lineEdit_device_port = new QLineEdit(widget);
        lineEdit_device_port->setObjectName("lineEdit_device_port");

        horizontalLayout_6->addWidget(lineEdit_device_port);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        label_devide_port = new QLabel(widget);
        label_devide_port->setObjectName("label_devide_port");
        label_devide_port->setFont(font);

        horizontalLayout_6->addWidget(label_devide_port);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_4->addLayout(verticalLayout_3);

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
        label_udp->setText(QCoreApplication::translate("MainWindow", "WIFI - UDP", nullptr));
        label_serial->setText(QCoreApplication::translate("MainWindow", "SERIAL", nullptr));
        label_sensors->setText(QCoreApplication::translate("MainWindow", "SENSORS", nullptr));
        label_communications->setText(QCoreApplication::translate("MainWindow", "COMMUNICATIONS", nullptr));
        comboBox_PORT->setPlaceholderText(QCoreApplication::translate("MainWindow", "PORTS", nullptr));
        pushButton_connectSerial->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        pushButton_sendSerial->setText(QCoreApplication::translate("MainWindow", "SEND SERIAL", nullptr));
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
        ir1_label->setText(QCoreApplication::translate("MainWindow", "IR1", nullptr));
        ir1_data->setText(QCoreApplication::translate("MainWindow", "IR DATA", nullptr));
        ir2_label->setText(QCoreApplication::translate("MainWindow", "IR2", nullptr));
        ir2_data->setText(QCoreApplication::translate("MainWindow", "IR DATA", nullptr));
        ir3_label->setText(QCoreApplication::translate("MainWindow", "IR3", nullptr));
        ir3_data->setText(QCoreApplication::translate("MainWindow", "IR DATA", nullptr));
        ir4_label->setText(QCoreApplication::translate("MainWindow", "IR4", nullptr));
        ir4_data->setText(QCoreApplication::translate("MainWindow", "IR DATA", nullptr));
        ir5_label->setText(QCoreApplication::translate("MainWindow", "IR5", nullptr));
        ir5_data->setText(QCoreApplication::translate("MainWindow", "IR DATA", nullptr));
        ir6_label->setText(QCoreApplication::translate("MainWindow", "IR6", nullptr));
        ir6_data->setText(QCoreApplication::translate("MainWindow", "IR DATA", nullptr));
        ir7_label->setText(QCoreApplication::translate("MainWindow", "IR7", nullptr));
        ir7_data->setText(QCoreApplication::translate("MainWindow", "IR DATA", nullptr));
        ir8_label->setText(QCoreApplication::translate("MainWindow", "IR8", nullptr));
        ir8_data->setText(QCoreApplication::translate("MainWindow", "IR DATA", nullptr));
        lineEdit_local_port->setText(QCoreApplication::translate("MainWindow", "30010", nullptr));
        pushButton_sendUdp->setText(QCoreApplication::translate("MainWindow", "SEND UDP", nullptr));
        pushButton_connectUdp->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        lineEdit_device_ip->setText(QString());
        label_device_ip->setText(QCoreApplication::translate("MainWindow", "DEVICE IP", nullptr));
        lineEdit_device_port->setText(QString());
        label_devide_port->setText(QCoreApplication::translate("MainWindow", "DEVICE PORT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
