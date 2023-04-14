#include "page_2_login.h"
#include "ui_page_2_login.h"

page_2_login::page_2_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page_2_login)
{
    ui->setupUi(this);

    setMaximumSize(1000,700);
    setMinimumSize(1000,700);


    ui->label->setText("<b>Username:<b>");
    ui->label_2->setText("<b>Password:<b>");

    ui->label_2->setToolTip("Your password must be at least 7 characters long and use (*&^%#$) symbols");

}

page_2_login::~page_2_login()
{
    delete ui;
}
