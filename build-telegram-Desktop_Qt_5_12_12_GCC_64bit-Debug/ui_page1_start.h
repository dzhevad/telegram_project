/********************************************************************************
** Form generated from reading UI file 'page1_start.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE1_START_H
#define UI_PAGE1_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page1_start
{
public:
    QWidget *centralwidget;
    QPushButton *next_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page1_start)
    {
        if (page1_start->objectName().isEmpty())
            page1_start->setObjectName(QString::fromUtf8("page1_start"));
        page1_start->resize(800, 600);
        page1_start->setBaseSize(QSize(0, 0));
        page1_start->setStyleSheet(QString::fromUtf8("background-image: url(:/images/page1_back.jpg);"));
        centralwidget = new QWidget(page1_start);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        next_pushButton = new QPushButton(centralwidget);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        next_pushButton->setGeometry(QRect(310, 370, 201, 53));
        next_pushButton->setBaseSize(QSize(0, 0));
        page1_start->setCentralWidget(centralwidget);
        menubar = new QMenuBar(page1_start);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        page1_start->setMenuBar(menubar);
        statusbar = new QStatusBar(page1_start);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        page1_start->setStatusBar(statusbar);

        retranslateUi(page1_start);

        QMetaObject::connectSlotsByName(page1_start);
    } // setupUi

    void retranslateUi(QMainWindow *page1_start)
    {
        page1_start->setWindowTitle(QApplication::translate("page1_start", "page1_start", nullptr));
        next_pushButton->setText(QApplication::translate("page1_start", "Send Messages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page1_start: public Ui_page1_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE1_START_H
