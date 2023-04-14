#include "page1_start.h"
#include "ui_page1_start.h"

#include "page2_login.h"
#include "ui_page2_login.h"


page1_start::page1_start(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::page1_start)
{
    ui->setupUi(this);
    setMaximumSize(900,600);
    setMinimumSize(900,600);

    setStyleSheet("background-color: rgb(255, 255, 255);");

    ui->groupBox->setStyleSheet("background-color: rgb(255, 255, 255);");

    ui->logo_label->setStyleSheet("background-image: url(:/images/1.test.png);");

    ui->next_pushButton->setStyleSheet("background-image: url(:/images/next-button.png);");

    ui->welcome_label->setText("<b>Welcome :)<b>");



}

page1_start::~page1_start()
{
    delete ui;
}


void page1_start::on_next_pushButton_clicked()
{
    page2_login *p = new page2_login;
    p->show();
    this->close();
}

