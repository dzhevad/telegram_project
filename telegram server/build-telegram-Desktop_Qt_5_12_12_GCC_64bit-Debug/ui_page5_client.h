/********************************************************************************
** Form generated from reading UI file 'page5_client.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE5_CLIENT_H
#define UI_PAGE5_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page5_client
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser_receivedMessages;
    QLineEdit *lineEdit_message;
    QPushButton *pushButton_sendAttachment;
    QPushButton *pushButton_sendMessage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page5_client)
    {
        if (page5_client->objectName().isEmpty())
            page5_client->setObjectName(QString::fromUtf8("page5_client"));
        page5_client->resize(800, 600);
        page5_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(page5_client);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(320, -20, 471, 581));
        textBrowser_receivedMessages = new QTextBrowser(groupBox);
        textBrowser_receivedMessages->setObjectName(QString::fromUtf8("textBrowser_receivedMessages"));
        textBrowser_receivedMessages->setGeometry(QRect(0, 20, 461, 481));
        lineEdit_message = new QLineEdit(groupBox);
        lineEdit_message->setObjectName(QString::fromUtf8("lineEdit_message"));
        lineEdit_message->setGeometry(QRect(0, 500, 371, 71));
        pushButton_sendAttachment = new QPushButton(groupBox);
        pushButton_sendAttachment->setObjectName(QString::fromUtf8("pushButton_sendAttachment"));
        pushButton_sendAttachment->setGeometry(QRect(370, 500, 81, 31));
        pushButton_sendMessage = new QPushButton(groupBox);
        pushButton_sendMessage->setObjectName(QString::fromUtf8("pushButton_sendMessage"));
        pushButton_sendMessage->setGeometry(QRect(370, 530, 81, 31));
        page5_client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(page5_client);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        page5_client->setMenuBar(menubar);
        statusbar = new QStatusBar(page5_client);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        page5_client->setStatusBar(statusbar);

        retranslateUi(page5_client);

        QMetaObject::connectSlotsByName(page5_client);
    } // setupUi

    void retranslateUi(QMainWindow *page5_client)
    {
        page5_client->setWindowTitle(QApplication::translate("page5_client", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("page5_client", "GroupBox", nullptr));
        pushButton_sendAttachment->setText(QApplication::translate("page5_client", "send", nullptr));
        pushButton_sendMessage->setText(QApplication::translate("page5_client", "Attach", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page5_client: public Ui_page5_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE5_CLIENT_H
