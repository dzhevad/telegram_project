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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
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
    QGroupBox *groupBox;
    QPushButton *next_pushButton;
    QLabel *welcome_label;
    QLabel *logo_label;
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
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 80, 430, 450));
        groupBox->setCursor(QCursor(Qt::PointingHandCursor));
        next_pushButton = new QPushButton(groupBox);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        next_pushButton->setGeometry(QRect(140, 340, 155, 53));
        next_pushButton->setBaseSize(QSize(0, 0));
        welcome_label = new QLabel(groupBox);
        welcome_label->setObjectName(QString::fromUtf8("welcome_label"));
        welcome_label->setGeometry(QRect(40, 180, 345, 141));
        welcome_label->setBaseSize(QSize(100, 70));
        QFont font;
        font.setPointSize(20);
        welcome_label->setFont(font);
        logo_label = new QLabel(groupBox);
        logo_label->setObjectName(QString::fromUtf8("logo_label"));
        logo_label->setGeometry(QRect(60, 30, 300, 132));
        logo_label->setBaseSize(QSize(300, 132));
        logo_label->setStyleSheet(QString::fromUtf8("background-image: url(:/images/1.test.png);"));
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
        groupBox->setTitle(QString());
        next_pushButton->setText(QString());
        welcome_label->setText(QString());
        logo_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class page1_start: public Ui_page1_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE1_START_H
