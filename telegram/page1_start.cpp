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
    setMaximumSize(900,600);
    setMinimumSize(900,600);

    setStyleSheet("background-color: rgb(255, 255, 255);");

    ui->groupBox->setStyleSheet("background-color: rgb(255, 255, 255);");

    //load the logo picture
    ui->logo_label->setStyleSheet("background-image: url(:/images/1.test.png);");

    //load the next button picture
    ui->next_pushButton->setStyleSheet("background-image: url(:/images/next-button.png);");

    // <b> for bold
    ui->welcome_label->setText("<i><b>Welcome :)<b><i>");



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

