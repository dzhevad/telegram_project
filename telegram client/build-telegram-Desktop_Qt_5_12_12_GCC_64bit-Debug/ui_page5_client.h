/********************************************************************************
** Form generated from reading UI file 'page5_client.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE5_CLIENT_H
#define UI_PAGE5_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page5_client
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page5_client)
    {
        if (page5_client->objectName().isEmpty())
            page5_client->setObjectName(QString::fromUtf8("page5_client"));
        page5_client->resize(800, 600);
        menubar = new QMenuBar(page5_client);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        page5_client->setMenuBar(menubar);
        centralwidget = new QWidget(page5_client);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        page5_client->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(page5_client);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        page5_client->setStatusBar(statusbar);

        retranslateUi(page5_client);

        QMetaObject::connectSlotsByName(page5_client);
    } // setupUi

    void retranslateUi(QMainWindow *page5_client)
    {
        page5_client->setWindowTitle(QApplication::translate("page5_client", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page5_client: public Ui_page5_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE5_CLIENT_H
