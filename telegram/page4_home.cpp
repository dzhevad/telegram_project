#include "page4_home.h"
#include "ui_page4_home.h"

page4_home::page4_home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page4_home)
{
    ui->setupUi(this);
}

page4_home::~page4_home()
{
    delete ui;
}
