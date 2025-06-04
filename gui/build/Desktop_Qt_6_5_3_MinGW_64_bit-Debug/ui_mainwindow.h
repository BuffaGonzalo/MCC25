/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
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
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_car;
    QSpacerItem *horizontalSpacer_11;
    QWidget *carWidget;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_communications;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *comboBox_CMD;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_serial;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *comboBox_PORT;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_connectSerial;
    QPushButton *pushButton_sendSerial;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_udp;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_local_port;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_connectUdp;
    QPushButton *pushButton_sendUdp;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_device_ip;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_device_ip;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_device_port;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_devide_port;
    QFrame *line;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_radar;
    QSpacerItem *horizontalSpacer_10;
    QWidget *radarWidget;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_actRadar;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_sensors;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_right_ir;
    QLabel *label_right_ir_data;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_center_ir;
    QLabel *label_center_ir_data;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_left_ir;
    QLabel *label_left_ir_data;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_left_encoder;
    QLabel *label_left_encoder_data;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_right_encoder;
    QLabel *label_right_encoder_data;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_distance;
    QLabel *label_distance_data;
    QFrame *line_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_pathInfo;
    QLabel *label_pathFst;
    QLabel *label_pathFstData;
    QLabel *label_pathSnd;
    QLabel *label_pathSndData;
    QLabel *label_pathTrd;
    QLabel *label_pathTrdData;
    QLabel *label_pathFth;
    QLabel *label_pathFthData;
    QLabel *label_pathLevel;
    QLabel *label_pathLevelData;
    QMenuBar *menubar;
    QMenu *menuDEBUG;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 650);
        MainWindow->setMinimumSize(QSize(800, 650));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Im\303\241genes/Icons/mazeIcon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
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
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_car = new QLabel(centralwidget);
        label_car->setObjectName("label_car");
        QFont font;
        font.setBold(true);
        label_car->setFont(font);

        horizontalLayout_12->addWidget(label_car);

        horizontalSpacer_11 = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);


        verticalLayout_9->addLayout(horizontalLayout_12);

        carWidget = new QWidget(centralwidget);
        carWidget->setObjectName("carWidget");

        verticalLayout_9->addWidget(carWidget);

        verticalLayout_9->setStretch(1, 1);

        verticalLayout_13->addLayout(verticalLayout_9);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_13->addWidget(line_3);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_communications = new QLabel(centralwidget);
        label_communications->setObjectName("label_communications");
        label_communications->setFont(font);

        horizontalLayout_9->addWidget(label_communications);

        horizontalSpacer_7 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);


        verticalLayout_8->addLayout(horizontalLayout_9);

        comboBox_CMD = new QComboBox(centralwidget);
        comboBox_CMD->setObjectName("comboBox_CMD");

        verticalLayout_8->addWidget(comboBox_CMD);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_serial = new QLabel(centralwidget);
        label_serial->setObjectName("label_serial");
        label_serial->setFont(font);

        horizontalLayout_8->addWidget(label_serial);

        horizontalSpacer_9 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);


        verticalLayout_8->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        comboBox_PORT = new QComboBox(centralwidget);
        comboBox_PORT->setObjectName("comboBox_PORT");

        horizontalLayout_7->addWidget(comboBox_PORT);

        horizontalSpacer_5 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButton_connectSerial = new QPushButton(centralwidget);
        pushButton_connectSerial->setObjectName("pushButton_connectSerial");

        horizontalLayout_7->addWidget(pushButton_connectSerial);

        pushButton_sendSerial = new QPushButton(centralwidget);
        pushButton_sendSerial->setObjectName("pushButton_sendSerial");

        horizontalLayout_7->addWidget(pushButton_sendSerial);

        horizontalLayout_7->setStretch(0, 1);

        verticalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_udp = new QLabel(centralwidget);
        label_udp->setObjectName("label_udp");
        label_udp->setFont(font);

        horizontalLayout_6->addWidget(label_udp);

        horizontalSpacer_6 = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lineEdit_local_port = new QLineEdit(centralwidget);
        lineEdit_local_port->setObjectName("lineEdit_local_port");

        horizontalLayout_5->addWidget(lineEdit_local_port);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_connectUdp = new QPushButton(centralwidget);
        pushButton_connectUdp->setObjectName("pushButton_connectUdp");

        horizontalLayout_5->addWidget(pushButton_connectUdp);

        pushButton_sendUdp = new QPushButton(centralwidget);
        pushButton_sendUdp->setObjectName("pushButton_sendUdp");

        horizontalLayout_5->addWidget(pushButton_sendUdp);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lineEdit_device_ip = new QLineEdit(centralwidget);
        lineEdit_device_ip->setObjectName("lineEdit_device_ip");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_device_ip->sizePolicy().hasHeightForWidth());
        lineEdit_device_ip->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lineEdit_device_ip);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_device_ip = new QLabel(centralwidget);
        label_device_ip->setObjectName("label_device_ip");
        label_device_ip->setFont(font);

        horizontalLayout_4->addWidget(label_device_ip);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_8->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEdit_device_port = new QLineEdit(centralwidget);
        lineEdit_device_port->setObjectName("lineEdit_device_port");

        horizontalLayout_3->addWidget(lineEdit_device_port);

        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_devide_port = new QLabel(centralwidget);
        label_devide_port->setObjectName("label_devide_port");
        label_devide_port->setFont(font);

        horizontalLayout_3->addWidget(label_devide_port);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_8->addLayout(horizontalLayout_3);


        verticalLayout_13->addLayout(verticalLayout_8);

        verticalLayout_13->setStretch(0, 1);

        gridLayout->addLayout(verticalLayout_13, 0, 0, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_radar = new QLabel(centralwidget);
        label_radar->setObjectName("label_radar");
        QFont font1;
        font1.setBold(true);
        font1.setStrikeOut(false);
        label_radar->setFont(font1);

        horizontalLayout_11->addWidget(label_radar);

        horizontalSpacer_10 = new QSpacerItem(388, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        verticalLayout_10->addLayout(horizontalLayout_11);

        radarWidget = new QWidget(centralwidget);
        radarWidget->setObjectName("radarWidget");

        verticalLayout_10->addWidget(radarWidget);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_4 = new QSpacerItem(358, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        pushButton_actRadar = new QPushButton(centralwidget);
        pushButton_actRadar->setObjectName("pushButton_actRadar");

        horizontalLayout_10->addWidget(pushButton_actRadar);


        verticalLayout_10->addLayout(horizontalLayout_10);

        verticalLayout_10->setStretch(1, 1);

        verticalLayout_12->addLayout(verticalLayout_10);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line_2);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_sensors = new QLabel(centralwidget);
        label_sensors->setObjectName("label_sensors");
        label_sensors->setFont(font);

        horizontalLayout_2->addWidget(label_sensors);

        horizontalSpacer_8 = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout_11->addLayout(horizontalLayout_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_right_ir = new QLabel(centralwidget);
        label_right_ir->setObjectName("label_right_ir");
        label_right_ir->setFont(font);

        verticalLayout_4->addWidget(label_right_ir);

        label_right_ir_data = new QLabel(centralwidget);
        label_right_ir_data->setObjectName("label_right_ir_data");
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_right_ir_data->setFont(font2);

        verticalLayout_4->addWidget(label_right_ir_data);


        horizontalLayout_13->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_center_ir = new QLabel(centralwidget);
        label_center_ir->setObjectName("label_center_ir");
        label_center_ir->setFont(font);

        verticalLayout_5->addWidget(label_center_ir);

        label_center_ir_data = new QLabel(centralwidget);
        label_center_ir_data->setObjectName("label_center_ir_data");
        label_center_ir_data->setFont(font2);

        verticalLayout_5->addWidget(label_center_ir_data);


        horizontalLayout_13->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_left_ir = new QLabel(centralwidget);
        label_left_ir->setObjectName("label_left_ir");
        label_left_ir->setFont(font);

        verticalLayout_6->addWidget(label_left_ir);

        label_left_ir_data = new QLabel(centralwidget);
        label_left_ir_data->setObjectName("label_left_ir_data");
        label_left_ir_data->setFont(font2);

        verticalLayout_6->addWidget(label_left_ir_data);


        horizontalLayout_13->addLayout(verticalLayout_6);


        verticalLayout_11->addLayout(horizontalLayout_13);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_left_encoder = new QLabel(centralwidget);
        label_left_encoder->setObjectName("label_left_encoder");
        label_left_encoder->setFont(font);

        verticalLayout_3->addWidget(label_left_encoder);

        label_left_encoder_data = new QLabel(centralwidget);
        label_left_encoder_data->setObjectName("label_left_encoder_data");
        label_left_encoder_data->setFont(font2);

        verticalLayout_3->addWidget(label_left_encoder_data);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_right_encoder = new QLabel(centralwidget);
        label_right_encoder->setObjectName("label_right_encoder");
        label_right_encoder->setFont(font);

        verticalLayout_2->addWidget(label_right_encoder);

        label_right_encoder_data = new QLabel(centralwidget);
        label_right_encoder_data->setObjectName("label_right_encoder_data");
        label_right_encoder_data->setFont(font2);

        verticalLayout_2->addWidget(label_right_encoder_data);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_11->addLayout(horizontalLayout);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_distance = new QLabel(centralwidget);
        label_distance->setObjectName("label_distance");
        label_distance->setFont(font);

        verticalLayout_7->addWidget(label_distance);

        label_distance_data = new QLabel(centralwidget);
        label_distance_data->setObjectName("label_distance_data");
        label_distance_data->setFont(font2);

        verticalLayout_7->addWidget(label_distance_data);


        verticalLayout_11->addLayout(verticalLayout_7);

        verticalLayout_11->setStretch(1, 1);
        verticalLayout_11->setStretch(2, 1);
        verticalLayout_11->setStretch(3, 1);

        horizontalLayout_14->addLayout(verticalLayout_11);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_14->addWidget(line_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_pathInfo = new QLabel(centralwidget);
        label_pathInfo->setObjectName("label_pathInfo");
        label_pathInfo->setFont(font);

        verticalLayout->addWidget(label_pathInfo);

        label_pathFst = new QLabel(centralwidget);
        label_pathFst->setObjectName("label_pathFst");
        label_pathFst->setFont(font);

        verticalLayout->addWidget(label_pathFst);

        label_pathFstData = new QLabel(centralwidget);
        label_pathFstData->setObjectName("label_pathFstData");
        label_pathFstData->setFont(font2);

        verticalLayout->addWidget(label_pathFstData);

        label_pathSnd = new QLabel(centralwidget);
        label_pathSnd->setObjectName("label_pathSnd");
        label_pathSnd->setFont(font);

        verticalLayout->addWidget(label_pathSnd);

        label_pathSndData = new QLabel(centralwidget);
        label_pathSndData->setObjectName("label_pathSndData");
        label_pathSndData->setFont(font2);

        verticalLayout->addWidget(label_pathSndData);

        label_pathTrd = new QLabel(centralwidget);
        label_pathTrd->setObjectName("label_pathTrd");
        label_pathTrd->setFont(font);

        verticalLayout->addWidget(label_pathTrd);

        label_pathTrdData = new QLabel(centralwidget);
        label_pathTrdData->setObjectName("label_pathTrdData");
        label_pathTrdData->setFont(font2);

        verticalLayout->addWidget(label_pathTrdData);

        label_pathFth = new QLabel(centralwidget);
        label_pathFth->setObjectName("label_pathFth");
        label_pathFth->setFont(font);

        verticalLayout->addWidget(label_pathFth);

        label_pathFthData = new QLabel(centralwidget);
        label_pathFthData->setObjectName("label_pathFthData");
        label_pathFthData->setFont(font2);

        verticalLayout->addWidget(label_pathFthData);

        label_pathLevel = new QLabel(centralwidget);
        label_pathLevel->setObjectName("label_pathLevel");
        label_pathLevel->setFont(font);

        verticalLayout->addWidget(label_pathLevel);

        label_pathLevelData = new QLabel(centralwidget);
        label_pathLevelData->setObjectName("label_pathLevelData");
        label_pathLevelData->setFont(font2);

        verticalLayout->addWidget(label_pathLevelData);

        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);
        verticalLayout->setStretch(6, 1);
        verticalLayout->setStretch(7, 1);
        verticalLayout->setStretch(8, 1);
        verticalLayout->setStretch(9, 1);
        verticalLayout->setStretch(10, 1);

        horizontalLayout_14->addLayout(verticalLayout);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(2, 1);

        verticalLayout_12->addLayout(horizontalLayout_14);

        verticalLayout_12->setStretch(0, 1);

        gridLayout->addLayout(verticalLayout_12, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuDEBUG = new QMenu(menubar);
        menuDEBUG->setObjectName("menuDEBUG");
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuDEBUG->menuAction());
        menuDEBUG->addAction(actionPROTOCOL_DATA);

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
        label_car->setText(QCoreApplication::translate("MainWindow", "CAR", nullptr));
        label_communications->setText(QCoreApplication::translate("MainWindow", "COMMUNICATIONS", nullptr));
        label_serial->setText(QCoreApplication::translate("MainWindow", "SERIAL", nullptr));
        comboBox_PORT->setPlaceholderText(QCoreApplication::translate("MainWindow", "PORTS", nullptr));
        pushButton_connectSerial->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        pushButton_sendSerial->setText(QCoreApplication::translate("MainWindow", "SEND SERIAL", nullptr));
        label_udp->setText(QCoreApplication::translate("MainWindow", "WIFI - UDP", nullptr));
        lineEdit_local_port->setText(QCoreApplication::translate("MainWindow", "30010", nullptr));
        pushButton_connectUdp->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        pushButton_sendUdp->setText(QCoreApplication::translate("MainWindow", "SEND UDP", nullptr));
        lineEdit_device_ip->setText(QString());
        label_device_ip->setText(QCoreApplication::translate("MainWindow", "DEVICE IP", nullptr));
        lineEdit_device_port->setText(QString());
        label_devide_port->setText(QCoreApplication::translate("MainWindow", "DEVICE PORT", nullptr));
        label_radar->setText(QCoreApplication::translate("MainWindow", "RADAR", nullptr));
        pushButton_actRadar->setText(QCoreApplication::translate("MainWindow", "ACTIVATE", nullptr));
        label_sensors->setText(QCoreApplication::translate("MainWindow", "SENSORS", nullptr));
        label_right_ir->setText(QCoreApplication::translate("MainWindow", "RIGHT IR", nullptr));
        label_right_ir_data->setText(QCoreApplication::translate("MainWindow", "IR DATA", nullptr));
        label_center_ir->setText(QCoreApplication::translate("MainWindow", "CENTER IR", nullptr));
        label_center_ir_data->setText(QCoreApplication::translate("MainWindow", "IR DATA", nullptr));
        label_left_ir->setText(QCoreApplication::translate("MainWindow", "LEFT IR", nullptr));
        label_left_ir_data->setText(QCoreApplication::translate("MainWindow", "IR DATA", nullptr));
        label_left_encoder->setText(QCoreApplication::translate("MainWindow", "LEFT ENCODER", nullptr));
        label_left_encoder_data->setText(QCoreApplication::translate("MainWindow", "ENCODER DATA", nullptr));
        label_right_encoder->setText(QCoreApplication::translate("MainWindow", "RIGHT ENCODER", nullptr));
        label_right_encoder_data->setText(QCoreApplication::translate("MainWindow", "ENCODER DATA", nullptr));
        label_distance->setText(QCoreApplication::translate("MainWindow", "DISTANCE", nullptr));
        label_distance_data->setText(QCoreApplication::translate("MainWindow", "DISTANCE DATA", nullptr));
        label_pathInfo->setText(QCoreApplication::translate("MainWindow", "PATH INFO", nullptr));
        label_pathFst->setText(QCoreApplication::translate("MainWindow", "PATH 1", nullptr));
        label_pathFstData->setText(QCoreApplication::translate("MainWindow", "PATH DATA", nullptr));
        label_pathSnd->setText(QCoreApplication::translate("MainWindow", "PATH 2", nullptr));
        label_pathSndData->setText(QCoreApplication::translate("MainWindow", "PATH DATA", nullptr));
        label_pathTrd->setText(QCoreApplication::translate("MainWindow", "PATH 3", nullptr));
        label_pathTrdData->setText(QCoreApplication::translate("MainWindow", "PATH DATA", nullptr));
        label_pathFth->setText(QCoreApplication::translate("MainWindow", "PATH 4", nullptr));
        label_pathFthData->setText(QCoreApplication::translate("MainWindow", "PATH DATA", nullptr));
        label_pathLevel->setText(QCoreApplication::translate("MainWindow", "PATH LEVEL", nullptr));
        label_pathLevelData->setText(QCoreApplication::translate("MainWindow", "PATH DATA", nullptr));
        menuDEBUG->setTitle(QCoreApplication::translate("MainWindow", "DEBUG", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
