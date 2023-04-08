#include "page_1_start.h"
#include "ui_page_1_start.h"

page_1_start::page_1_start(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::page_1_start)
{
    ui->setupUi(this);

    ui->label->setStyleSheet("background-image: url(:/new/prefix1/1.test.png);");
    ui->pushButton->setStyleSheet("background-image: url(:/new/prefix1/next-button.png);");
}

page_1_start::~page_1_start()
{
    delete ui;
}

