/********************************************************************************
** Form generated from reading UI file 'page_2_login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_2_LOGIN_H
#define UI_PAGE_2_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_2_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_signin;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_showhide;
    QLabel *label_Qaccont;
    QPushButton *pushButton;
    QPushButton *pushButton_back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page_2_login)
    {
        if (page_2_login->objectName().isEmpty())
            page_2_login->setObjectName(QString::fromUtf8("page_2_login"));
        page_2_login->resize(1000, 700);
        centralwidget = new QWidget(page_2_login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(180, 100, 601, 441));
        pushButton_signin = new QPushButton(groupBox);
        pushButton_signin->setObjectName(QString::fromUtf8("pushButton_signin"));
        pushButton_signin->setGeometry(QRect(510, 410, 81, 28));
        label_username = new QLabel(groupBox);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(30, 60, 91, 41));
        QFont font;
        font.setPointSize(10);
        label_username->setFont(font);
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(130, 70, 211, 21));
        label_password = new QLabel(groupBox);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(30, 170, 91, 41));
        label_password->setFont(font);
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(130, 180, 251, 31));
        pushButton_showhide = new QPushButton(groupBox);
        pushButton_showhide->setObjectName(QString::fromUtf8("pushButton_showhide"));
        pushButton_showhide->setGeometry(QRect(340, 180, 40, 25));
        label_Qaccont = new QLabel(groupBox);
        label_Qaccont->setObjectName(QString::fromUtf8("label_Qaccont"));
        label_Qaccont->setGeometry(QRect(360, 410, 141, 21));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 360, 181, 41));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(0, 0, 60, 36));
        page_2_login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(page_2_login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        page_2_login->setMenuBar(menubar);
        statusbar = new QStatusBar(page_2_login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        page_2_login->setStatusBar(statusbar);

        retranslateUi(page_2_login);

        QMetaObject::connectSlotsByName(page_2_login);
    } // setupUi

    void retranslateUi(QMainWindow *page_2_login)
    {
        page_2_login->setWindowTitle(QApplication::translate("page_2_login", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        pushButton_signin->setText(QApplication::translate("page_2_login", "sign in", nullptr));
        label_username->setText(QApplication::translate("page_2_login", "user name ", nullptr));
        label_password->setText(QApplication::translate("page_2_login", "pass word", nullptr));
        pushButton_showhide->setText(QString());
        label_Qaccont->setText(QApplication::translate("page_2_login", "Do not have accont?", nullptr));
        pushButton->setText(QApplication::translate("page_2_login", "PushButton", nullptr));
        pushButton_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class page_2_login: public Ui_page_2_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_2_LOGIN_H
