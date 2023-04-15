/********************************************************************************
** Form generated from reading UI file 'page2_login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE2_LOGIN_H
#define UI_PAGE2_LOGIN_H

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

class Ui_page2_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *username_label;
    QLineEdit *username_lineEdit;
    QLabel *Password_label;
    QLineEdit *Password_lineEdit;
    QLineEdit *Verification_Password_lineEdit;
    QLabel *verificationpassword_label;
    QPushButton *signin_pushButton;
    QLabel *Question_label;
    QLabel *capcha_label;
    QPushButton *capcha_pushButton;
    QLineEdit *capcha_lineEdit;
    QPushButton *next_pushButton;
    QPushButton *showhide_pushButton;
    QLabel *symbol_label;
    QLabel *character_label;
    QLabel *verification_label;
    QLabel *check_username_label;
    QPushButton *back_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page2_login)
    {
        if (page2_login->objectName().isEmpty())
            page2_login->setObjectName(QString::fromUtf8("page2_login"));
        page2_login->resize(1000, 700);
        centralwidget = new QWidget(page2_login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(150, 120, 721, 431));
        username_label = new QLabel(groupBox);
        username_label->setObjectName(QString::fromUtf8("username_label"));
        username_label->setGeometry(QRect(20, 80, 101, 31));
        username_lineEdit = new QLineEdit(groupBox);
        username_lineEdit->setObjectName(QString::fromUtf8("username_lineEdit"));
        username_lineEdit->setGeometry(QRect(170, 80, 351, 31));
        Password_label = new QLabel(groupBox);
        Password_label->setObjectName(QString::fromUtf8("Password_label"));
        Password_label->setGeometry(QRect(20, 150, 101, 31));
        Password_lineEdit = new QLineEdit(groupBox);
        Password_lineEdit->setObjectName(QString::fromUtf8("Password_lineEdit"));
        Password_lineEdit->setGeometry(QRect(170, 150, 351, 31));
        Verification_Password_lineEdit = new QLineEdit(groupBox);
        Verification_Password_lineEdit->setObjectName(QString::fromUtf8("Verification_Password_lineEdit"));
        Verification_Password_lineEdit->setGeometry(QRect(170, 210, 351, 31));
        verificationpassword_label = new QLabel(groupBox);
        verificationpassword_label->setObjectName(QString::fromUtf8("verificationpassword_label"));
        verificationpassword_label->setGeometry(QRect(20, 210, 141, 31));
        signin_pushButton = new QPushButton(groupBox);
        signin_pushButton->setObjectName(QString::fromUtf8("signin_pushButton"));
        signin_pushButton->setGeometry(QRect(620, 400, 101, 31));
        Question_label = new QLabel(groupBox);
        Question_label->setObjectName(QString::fromUtf8("Question_label"));
        Question_label->setGeometry(QRect(470, 400, 151, 31));
        capcha_label = new QLabel(groupBox);
        capcha_label->setObjectName(QString::fromUtf8("capcha_label"));
        capcha_label->setGeometry(QRect(50, 270, 131, 51));
        QFont font;
        font.setPointSize(20);
        capcha_label->setFont(font);
        capcha_pushButton = new QPushButton(groupBox);
        capcha_pushButton->setObjectName(QString::fromUtf8("capcha_pushButton"));
        capcha_pushButton->setGeometry(QRect(80, 340, 81, 31));
        capcha_lineEdit = new QLineEdit(groupBox);
        capcha_lineEdit->setObjectName(QString::fromUtf8("capcha_lineEdit"));
        capcha_lineEdit->setGeometry(QRect(240, 270, 201, 51));
        next_pushButton = new QPushButton(groupBox);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        next_pushButton->setGeometry(QRect(230, 330, 221, 86));
        showhide_pushButton = new QPushButton(groupBox);
        showhide_pushButton->setObjectName(QString::fromUtf8("showhide_pushButton"));
        showhide_pushButton->setGeometry(QRect(480, 150, 40, 25));
        symbol_label = new QLabel(groupBox);
        symbol_label->setObjectName(QString::fromUtf8("symbol_label"));
        symbol_label->setGeometry(QRect(180, 185, 121, 21));
        symbol_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        character_label = new QLabel(groupBox);
        character_label->setObjectName(QString::fromUtf8("character_label"));
        character_label->setGeometry(QRect(350, 190, 101, 16));
        verification_label = new QLabel(groupBox);
        verification_label->setObjectName(QString::fromUtf8("verification_label"));
        verification_label->setGeometry(QRect(180, 250, 141, 16));
        check_username_label = new QLabel(groupBox);
        check_username_label->setObjectName(QString::fromUtf8("check_username_label"));
        check_username_label->setGeometry(QRect(230, 120, 171, 16));
        back_pushButton = new QPushButton(centralwidget);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(0, 0, 60, 36));
        page2_login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(page2_login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 25));
        page2_login->setMenuBar(menubar);
        statusbar = new QStatusBar(page2_login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        page2_login->setStatusBar(statusbar);

        retranslateUi(page2_login);

        QMetaObject::connectSlotsByName(page2_login);
    } // setupUi

    void retranslateUi(QMainWindow *page2_login)
    {
        page2_login->setWindowTitle(QApplication::translate("page2_login", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        username_label->setText(QApplication::translate("page2_login", "user name", nullptr));
        Password_label->setText(QApplication::translate("page2_login", "Password", nullptr));
        verificationpassword_label->setText(QApplication::translate("page2_login", "Verification Password", nullptr));
        signin_pushButton->setText(QApplication::translate("page2_login", "sign in", nullptr));
        Question_label->setText(QApplication::translate("page2_login", "Do not have account?", nullptr));
        capcha_label->setText(QString());
        capcha_pushButton->setText(QApplication::translate("page2_login", "capcha", nullptr));
        next_pushButton->setText(QString());
        showhide_pushButton->setText(QString());
        symbol_label->setText(QApplication::translate("page2_login", "symbol", nullptr));
        character_label->setText(QApplication::translate("page2_login", "7 character", nullptr));
        verification_label->setText(QApplication::translate("page2_login", "verification password", nullptr));
        check_username_label->setText(QApplication::translate("page2_login", "username has been exist", nullptr));
        back_pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class page2_login: public Ui_page2_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE2_LOGIN_H
