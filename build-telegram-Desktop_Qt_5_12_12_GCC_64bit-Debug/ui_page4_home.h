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
#include <QtWidgets/QComboBox>
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
    QComboBox *comboBox_receiver;
    QPushButton *pushButton_sendAttachment;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page4_home)
    {
        if (page4_home->objectName().isEmpty())
            page4_home->setObjectName(QString::fromUtf8("page4_home"));
        page4_home->resize(426, 595);
        page4_home->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(page4_home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_chatbox = new QGroupBox(centralwidget);
        groupBox_chatbox->setObjectName(QString::fromUtf8("groupBox_chatbox"));
        groupBox_chatbox->setGeometry(QRect(0, 10, 421, 541));
        textBrowser_receivedMessages = new QTextBrowser(groupBox_chatbox);
        textBrowser_receivedMessages->setObjectName(QString::fromUtf8("textBrowser_receivedMessages"));
        textBrowser_receivedMessages->setGeometry(QRect(10, 20, 411, 441));
        lineEdit_message = new QLineEdit(groupBox_chatbox);
        lineEdit_message->setObjectName(QString::fromUtf8("lineEdit_message"));
        lineEdit_message->setGeometry(QRect(80, 460, 271, 71));
        pushButton_sendMessage = new QPushButton(groupBox_chatbox);
        pushButton_sendMessage->setObjectName(QString::fromUtf8("pushButton_sendMessage"));
        pushButton_sendMessage->setGeometry(QRect(350, 470, 71, 51));
        comboBox_receiver = new QComboBox(groupBox_chatbox);
        comboBox_receiver->setObjectName(QString::fromUtf8("comboBox_receiver"));
        comboBox_receiver->setGeometry(QRect(0, 501, 81, 31));
        pushButton_sendAttachment = new QPushButton(groupBox_chatbox);
        pushButton_sendAttachment->setObjectName(QString::fromUtf8("pushButton_sendAttachment"));
        pushButton_sendAttachment->setGeometry(QRect(0, 460, 81, 41));
        page4_home->setCentralWidget(centralwidget);
        menubar = new QMenuBar(page4_home);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 426, 22));
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
        groupBox_chatbox->setTitle(QApplication::translate("page4_home", "server", nullptr));
        pushButton_sendMessage->setText(QApplication::translate("page4_home", "send", nullptr));
        pushButton_sendAttachment->setText(QApplication::translate("page4_home", "Attach", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page4_home: public Ui_page4_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE4_HOME_H
