#include "page4_home.h"
#include "ui_page4_home.h"

page4_home::page4_home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page4_home)
{
    ui->setupUi(this);

    //set minimum and maximum size
    setMinimumSize(1000,700);
    setMaximumSize(1000,700);

    ui->label->setStyleSheet("background-image: url(:/images/welcome _page4.png);");
}

page4_home::~page4_home()
{
    delete ui;
}
