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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_2_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page_2_login)
    {
        if (page_2_login->objectName().isEmpty())
            page_2_login->setObjectName(QString::fromUtf8("page_2_login"));
        page_2_login->resize(1000, 700);
        page_2_login->setMinimumSize(QSize(1000, 700));
        page_2_login->setMaximumSize(QSize(1000, 700));
        page_2_login->setSizeIncrement(QSize(1000, 700));
        centralwidget = new QWidget(page_2_login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 130, 471, 311));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 280, 80, 25));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 80, 241, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 80, 101, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 150, 91, 31));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 150, 241, 31));
        page_2_login->setCentralWidget(centralwidget);
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
        pushButton->setText(QApplication::translate("page_2_login", "sign in ", nullptr));
        label->setText(QApplication::translate("page_2_login", "User name:", nullptr));
        label_2->setText(QApplication::translate("page_2_login", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_2_login: public Ui_page_2_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_2_LOGIN_H
