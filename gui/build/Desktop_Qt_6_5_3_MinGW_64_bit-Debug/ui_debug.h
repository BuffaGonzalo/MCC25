/********************************************************************************
** Form generated from reading UI file 'debug.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUG_H
#define UI_DEBUG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Debug
{
public:
    QTextBrowser *textBrowserUnProcessed;
    QLabel *label_data;
    QTextBrowser *textBrowserProcessed;

    void setupUi(QDialog *Debug)
    {
        if (Debug->objectName().isEmpty())
            Debug->setObjectName("Debug");
        Debug->resize(500, 400);
        Debug->setMinimumSize(QSize(500, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Im\303\241genes/Icons/bug-report.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Debug->setWindowIcon(icon);
        textBrowserUnProcessed = new QTextBrowser(Debug);
        textBrowserUnProcessed->setObjectName("textBrowserUnProcessed");
        textBrowserUnProcessed->setGeometry(QRect(20, 30, 225, 360));
        label_data = new QLabel(Debug);
        label_data->setObjectName("label_data");
        label_data->setGeometry(QRect(10, 10, 211, 16));
        QFont font;
        font.setBold(true);
        label_data->setFont(font);
        textBrowserProcessed = new QTextBrowser(Debug);
        textBrowserProcessed->setObjectName("textBrowserProcessed");
        textBrowserProcessed->setGeometry(QRect(260, 30, 225, 360));

        retranslateUi(Debug);

        QMetaObject::connectSlotsByName(Debug);
    } // setupUi

    void retranslateUi(QDialog *Debug)
    {
        Debug->setWindowTitle(QCoreApplication::translate("Debug", "PROTOCOL DATA", nullptr));
        label_data->setText(QCoreApplication::translate("Debug", "DATA TRANSMITTED AND RECEIVED", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Debug: public Ui_Debug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUG_H
