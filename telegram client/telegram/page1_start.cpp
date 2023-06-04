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
    setMaximumSize(800,580);
    setMinimumSize(800,600);

    setStyleSheet("background-image: url(:/images/Background_page1_plane.jpg);");

    ui->next_pushButton->setStyleSheet("background-color: rgb(0, 91, 127);");



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

