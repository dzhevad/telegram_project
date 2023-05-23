#include "page1_start.h"
#include "ui_page1_start.h"

#include "page2_login.h"
#include "ui_page2_login.h"


page1_start::page1_start(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::page1_start)
{
    ui->setupUi(this);

    //set the maximum and minimum size for page
    setMaximumSize(1000,700);
    setMinimumSize(1000,700);

    setStyleSheet("background-image: url(:/images/page1_back.jpg);");

    ui->groupBox->setStyleSheet("background-image: url(:/images/no back for pag 1.png);");


    //load the logo picture
    ui->logo_label->setStyleSheet("background-image: url(:/images/1.test.png);");

    //load the next button picture

    ui->next_pushButton->setStyleSheet("background-image: url(:/images/next-button.png);");
    // <b> for bold
    ui->welcome_label->setStyleSheet("background-image: url(:/images/welcome _page4.png);");



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

