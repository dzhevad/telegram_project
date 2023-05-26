/********************************************************************************
** Form generated from reading UI file 'page3_verificationcode.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE3_VERIFICATIONCODE_H
#define UI_PAGE3_VERIFICATIONCODE_H

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

class Ui_page3_verificationcode
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *verification_label;
    QLineEdit *verification_lineEdit;
    QPushButton *next_pushButton;
    QGroupBox *groupBox_get_name;
    QPushButton *pushButton_get_name;
    QLineEdit *lineEdit_get_name;
    QLabel *label_get_name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page3_verificationcode)
    {
        if (page3_verificationcode->objectName().isEmpty())
            page3_verificationcode->setObjectName(QString::fromUtf8("page3_verificationcode"));
        page3_verificationcode->resize(800, 600);
        centralwidget = new QWidget(page3_verificationcode);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(160, 130, 461, 291));
        verification_label = new QLabel(groupBox);
        verification_label->setObjectName(QString::fromUtf8("verification_label"));
        verification_label->setGeometry(QRect(10, 60, 171, 41));
        verification_lineEdit = new QLineEdit(groupBox);
        verification_lineEdit->setObjectName(QString::fromUtf8("verification_lineEdit"));
        verification_lineEdit->setGeometry(QRect(230, 70, 211, 31));
        next_pushButton = new QPushButton(groupBox);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        next_pushButton->setGeometry(QRect(150, 160, 171, 41));
        groupBox_get_name = new QGroupBox(groupBox);
        groupBox_get_name->setObjectName(QString::fromUtf8("groupBox_get_name"));
        groupBox_get_name->setGeometry(QRect(-20, 50, 491, 221));
        pushButton_get_name = new QPushButton(groupBox_get_name);
        pushButton_get_name->setObjectName(QString::fromUtf8("pushButton_get_name"));
        pushButton_get_name->setGeometry(QRect(190, 140, 151, 41));
        lineEdit_get_name = new QLineEdit(groupBox_get_name);
        lineEdit_get_name->setObjectName(QString::fromUtf8("lineEdit_get_name"));
        lineEdit_get_name->setGeometry(QRect(180, 50, 251, 31));
        label_get_name = new QLabel(groupBox_get_name);
        label_get_name->setObjectName(QString::fromUtf8("label_get_name"));
        label_get_name->setGeometry(QRect(50, 50, 171, 21));
        page3_verificationcode->setCentralWidget(centralwidget);
        menubar = new QMenuBar(page3_verificationcode);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        page3_verificationcode->setMenuBar(menubar);
        statusbar = new QStatusBar(page3_verificationcode);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        page3_verificationcode->setStatusBar(statusbar);

        retranslateUi(page3_verificationcode);

        QMetaObject::connectSlotsByName(page3_verificationcode);
    } // setupUi

    void retranslateUi(QMainWindow *page3_verificationcode)
    {
        page3_verificationcode->setWindowTitle(QApplication::translate("page3_verificationcode", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        verification_label->setText(QApplication::translate("page3_verificationcode", "Enter the verification code:", nullptr));
        next_pushButton->setText(QApplication::translate("page3_verificationcode", "next", nullptr));
        groupBox_get_name->setTitle(QString());
        pushButton_get_name->setText(QApplication::translate("page3_verificationcode", "next", nullptr));
        label_get_name->setText(QApplication::translate("page3_verificationcode", "Enter your name :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page3_verificationcode: public Ui_page3_verificationcode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE3_VERIFICATIONCODE_H
