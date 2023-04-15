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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page4_home
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page4_home)
    {
        if (page4_home->objectName().isEmpty())
            page4_home->setObjectName(QString::fromUtf8("page4_home"));
        page4_home->resize(800, 600);
        centralwidget = new QWidget(page4_home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 230, 201, 81));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        page4_home->setCentralWidget(centralwidget);
        menubar = new QMenuBar(page4_home);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        label->setText(QApplication::translate("page4_home", "Welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page4_home: public Ui_page4_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE4_HOME_H
