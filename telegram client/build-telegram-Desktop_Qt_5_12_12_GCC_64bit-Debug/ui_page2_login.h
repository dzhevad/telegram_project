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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page2_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *username_lineEdit;
    QLineEdit *Password_lineEdit;
    QLineEdit *Verification_Password_lineEdit;
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
    QLabel *label;
    QPushButton *back_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *page2_login)
    {
        if (page2_login->objectName().isEmpty())
            page2_login->setObjectName(QString::fromUtf8("page2_login"));
        page2_login->resize(800, 600);
        page2_login->setBaseSize(QSize(800, 600));
        centralwidget = new QWidget(page2_login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(130, 80, 541, 401));
        username_lineEdit = new QLineEdit(groupBox);
        username_lineEdit->setObjectName(QString::fromUtf8("username_lineEdit"));
        username_lineEdit->setGeometry(QRect(140, 40, 351, 31));
        Password_lineEdit = new QLineEdit(groupBox);
        Password_lineEdit->setObjectName(QString::fromUtf8("Password_lineEdit"));
        Password_lineEdit->setGeometry(QRect(140, 110, 351, 31));
        Verification_Password_lineEdit = new QLineEdit(groupBox);
        Verification_Password_lineEdit->setObjectName(QString::fromUtf8("Verification_Password_lineEdit"));
        Verification_Password_lineEdit->setGeometry(QRect(140, 190, 351, 31));
        signin_pushButton = new QPushButton(groupBox);
        signin_pushButton->setObjectName(QString::fromUtf8("signin_pushButton"));
        signin_pushButton->setGeometry(QRect(430, 360, 101, 31));
        Question_label = new QLabel(groupBox);
        Question_label->setObjectName(QString::fromUtf8("Question_label"));
        Question_label->setGeometry(QRect(430, 320, 131, 31));
        capcha_label = new QLabel(groupBox);
        capcha_label->setObjectName(QString::fromUtf8("capcha_label"));
        capcha_label->setGeometry(QRect(20, 260, 131, 51));
        QFont font;
        font.setPointSize(20);
        capcha_label->setFont(font);
        capcha_pushButton = new QPushButton(groupBox);
        capcha_pushButton->setObjectName(QString::fromUtf8("capcha_pushButton"));
        capcha_pushButton->setGeometry(QRect(50, 320, 81, 31));
        capcha_lineEdit = new QLineEdit(groupBox);
        capcha_lineEdit->setObjectName(QString::fromUtf8("capcha_lineEdit"));
        capcha_lineEdit->setGeometry(QRect(170, 260, 201, 51));
        next_pushButton = new QPushButton(groupBox);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        next_pushButton->setGeometry(QRect(200, 320, 155, 54));
        next_pushButton->setBaseSize(QSize(150, 50));
        showhide_pushButton = new QPushButton(groupBox);
        showhide_pushButton->setObjectName(QString::fromUtf8("showhide_pushButton"));
        showhide_pushButton->setGeometry(QRect(450, 110, 40, 31));
        symbol_label = new QLabel(groupBox);
        symbol_label->setObjectName(QString::fromUtf8("symbol_label"));
        symbol_label->setGeometry(QRect(140, 150, 121, 21));
        symbol_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        character_label = new QLabel(groupBox);
        character_label->setObjectName(QString::fromUtf8("character_label"));
        character_label->setGeometry(QRect(230, 150, 90, 21));
        verification_label = new QLabel(groupBox);
        verification_label->setObjectName(QString::fromUtf8("verification_label"));
        verification_label->setGeometry(QRect(140, 230, 141, 16));
        check_username_label = new QLabel(groupBox);
        check_username_label->setObjectName(QString::fromUtf8("check_username_label"));
        check_username_label->setGeometry(QRect(140, 80, 171, 16));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, -80, 800, 600));
        label->setBaseSize(QSize(800, 600));
        label->raise();
        username_lineEdit->raise();
        Password_lineEdit->raise();
        Verification_Password_lineEdit->raise();
        signin_pushButton->raise();
        Question_label->raise();
        capcha_label->raise();
        capcha_pushButton->raise();
        capcha_lineEdit->raise();
        next_pushButton->raise();
        showhide_pushButton->raise();
        symbol_label->raise();
        character_label->raise();
        verification_label->raise();
        check_username_label->raise();
        back_pushButton = new QPushButton(centralwidget);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(0, 0, 60, 36));
        page2_login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(page2_login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        page2_login->setMenuBar(menubar);
        statusbar = new QStatusBar(page2_login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        page2_login->setStatusBar(statusbar);
        toolBar = new QToolBar(page2_login);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        page2_login->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(page2_login);

        QMetaObject::connectSlotsByName(page2_login);
    } // setupUi

    void retranslateUi(QMainWindow *page2_login)
    {
        page2_login->setWindowTitle(QApplication::translate("page2_login", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        username_lineEdit->setPlaceholderText(QApplication::translate("page2_login", "User Name here...", nullptr));
        Password_lineEdit->setPlaceholderText(QApplication::translate("page2_login", "Password here...", nullptr));
        Verification_Password_lineEdit->setPlaceholderText(QApplication::translate("page2_login", "Verification Password", nullptr));
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
        label->setText(QString());
        back_pushButton->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("page2_login", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page2_login: public Ui_page2_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE2_LOGIN_H
