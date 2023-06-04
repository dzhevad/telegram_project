/********************************************************************************
** Form generated from reading UI file 'page4_home.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE4_HOME_H
#define UI_PAGE4_HOME_H

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

class Ui_page4_home
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_chatbox;
    QTextBrowser *textBrowser_receivedMessages;
    QLineEdit *lineEdit_message;
    QPushButton *pushButton_sendMessage;
    QPushButton *pushButton_sendAttachment;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page4_home)
    {
        if (page4_home->objectName().isEmpty())
            page4_home->setObjectName(QString::fromUtf8("page4_home"));
        page4_home->resize(800, 600);
        page4_home->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(page4_home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_chatbox = new QGroupBox(centralwidget);
        groupBox_chatbox->setObjectName(QString::fromUtf8("groupBox_chatbox"));
        groupBox_chatbox->setGeometry(QRect(370, 0, 421, 541));
        textBrowser_receivedMessages = new QTextBrowser(groupBox_chatbox);
        textBrowser_receivedMessages->setObjectName(QString::fromUtf8("textBrowser_receivedMessages"));
        textBrowser_receivedMessages->setGeometry(QRect(10, 20, 411, 441));
        lineEdit_message = new QLineEdit(groupBox_chatbox);
        lineEdit_message->setObjectName(QString::fromUtf8("lineEdit_message"));
        lineEdit_message->setGeometry(QRect(10, 460, 341, 81));
        pushButton_sendMessage = new QPushButton(groupBox_chatbox);
        pushButton_sendMessage->setObjectName(QString::fromUtf8("pushButton_sendMessage"));
        pushButton_sendMessage->setGeometry(QRect(350, 460, 71, 41));
        pushButton_sendAttachment = new QPushButton(groupBox_chatbox);
        pushButton_sendAttachment->setObjectName(QString::fromUtf8("pushButton_sendAttachment"));
        pushButton_sendAttachment->setGeometry(QRect(350, 500, 71, 41));
        page4_home->setCentralWidget(centralwidget);
        menubar = new QMenuBar(page4_home);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        page4_home->setMenuBar(menubar);
        statusbar = new QStatusBar(page4_home);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        page4_home->setStatusBar(statusbar);

        retranslateUi(page4_home);

        QMetaObject::connectSlotsByName(page4_home);
    } // setupUi

    void retranslateUi(QMainWindow *page4_home)
    {
        page4_home->setWindowTitle(QApplication::translate("page4_home", "MainWindow", nullptr));
        groupBox_chatbox->setTitle(QApplication::translate("page4_home", "GroupBox", nullptr));
        pushButton_sendMessage->setText(QApplication::translate("page4_home", "send", nullptr));
        pushButton_sendAttachment->setText(QApplication::translate("page4_home", "Attach", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page4_home: public Ui_page4_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE4_HOME_H
