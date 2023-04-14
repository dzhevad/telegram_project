#include "page_1_start.h"
#include "ui_page_1_start.h"

#include "page_2_login.h"
#include "ui_page_2_login.h"

<<<<<<< Updated upstream
=======
<<<<<<< HEAD
=======


>>>>>>> e9eeb98a75dfc24d28be4a017392bb768b878e7e
>>>>>>> Stashed changes
page_1_start::page_1_start(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::page_1_start)
{
    ui->setupUi(this);
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
>>>>>>> Stashed changes
    // fix the page size
    setMaximumSize(900,600);
    setMinimumSize(900,600);

    ui->label->setStyleSheet("background-image: url(:/new/prefix1/1.test.png);");   //load logo image
<<<<<<< Updated upstream

    ui->pushButton->setStyleSheet("background-image: url(:/new/prefix1/next-button.png);");     //load next button image
=======

    ui->pushButton->setStyleSheet("background-image: url(:/new/prefix1/next-button.png);");     //load next button image
=======
    // set fix page size
    setMaximumSize(900,600);
    setMinimumSize(900,600);

    ui->label_2->setText("<b>Welcome :)<b>");

    ui->label->setStyleSheet("background-image: url(:/new/prefix1/1.test.png);");           // load logo image

    ui->pushButton->setStyleSheet("background-image: url(:/new/prefix1/next-button.png);"); // load next button image

>>>>>>> e9eeb98a75dfc24d28be4a017392bb768b878e7e
>>>>>>> Stashed changes
}

page_1_start::~page_1_start()
{
    delete ui;
}

<<<<<<< Updated upstream
=======
<<<<<<< HEAD
=======

>>>>>>> e9eeb98a75dfc24d28be4a017392bb768b878e7e
>>>>>>> Stashed changes
void page_1_start::on_pushButton_clicked()
{
    page_2_login *w = new page_2_login;
    w->show();
    this->close();
}

