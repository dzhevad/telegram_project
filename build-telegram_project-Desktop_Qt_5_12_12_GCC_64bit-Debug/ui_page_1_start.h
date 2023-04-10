/********************************************************************************
** Form generated from reading UI file 'page_1_start.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_1_START_H
#define UI_PAGE_1_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_1_start
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page_1_start)
    {
        if (page_1_start->objectName().isEmpty())
            page_1_start->setObjectName(QString::fromUtf8("page_1_start"));
        page_1_start->resize(900, 600);
        page_1_start->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(page_1_start);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 110, 351, 144));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 280, 281, 81));
        QFont font;
        font.setPointSize(32);
        label_2->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 390, 221, 88));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MV Boli"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/next-button.jpg);\n"
"background-color: rgb(255, 255, 255);"));
        page_1_start->setCentralWidget(centralwidget);
        menubar = new QMenuBar(page_1_start);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 25));
        page_1_start->setMenuBar(menubar);
        statusbar = new QStatusBar(page_1_start);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        page_1_start->setStatusBar(statusbar);

        retranslateUi(page_1_start);

        QMetaObject::connectSlotsByName(page_1_start);
    } // setupUi

    void retranslateUi(QMainWindow *page_1_start)
    {
        page_1_start->setWindowTitle(QApplication::translate("page_1_start", "page_1_start", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("page_1_start", "Welcome :)", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class page_1_start: public Ui_page_1_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_1_START_H
