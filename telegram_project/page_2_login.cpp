#include "page_2_login.h"
#include "ui_page_2_login.h"

page_2_login::page_2_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page_2_login)
{
    ui->setupUi(this);
}

page_2_login::~page_2_login()
{
    delete ui;
}
