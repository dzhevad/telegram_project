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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_2_login
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page_2_login)
    {
        if (page_2_login->objectName().isEmpty())
            page_2_login->setObjectName(QString::fromUtf8("page_2_login"));
        page_2_login->resize(800, 600);
        menubar = new QMenuBar(page_2_login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        page_2_login->setMenuBar(menubar);
        centralwidget = new QWidget(page_2_login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
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
    } // retranslateUi

};

namespace Ui {
    class page_2_login: public Ui_page_2_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_2_LOGIN_H
