#include "page_2_login.h"
#include "ui_page_2_login.h"

<<<<<<< Updated upstream
=======
<<<<<<< HEAD
>>>>>>> Stashed changes
#include "page_1_start.h"
#include "ui_page_1_start.h"


QString vaziat = "hide";

<<<<<<< Updated upstream
=======
=======
>>>>>>> e9eeb98a75dfc24d28be4a017392bb768b878e7e
>>>>>>> Stashed changes
page_2_login::page_2_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page_2_login)
{
    ui->setupUi(this);

    setMaximumSize(1000,700);
    setMinimumSize(1000,700);

<<<<<<< Updated upstream
=======
<<<<<<< HEAD
>>>>>>> Stashed changes
    ui->label_username->setText("<b>Username:<b>");
    ui->label_password->setText("<b>Password:<b>");

    ui->lineEdit_password->setToolTip("Your password must have at least 7 characters and use (*&^%#$) symbols");

    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    //ui->pushButton_showhide->setText("hide");

    ui->pushButton_showhide->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->pushButton_showhide->setStyleSheet("background-image: url(:/new/prefix1/show-button-icon.png);");

    ui->label_Qaccont->setText("Do not have account?");

    ui->pushButton_back->setStyleSheet("background-image: url(:/new/prefix1/back.jpg);");
<<<<<<< Updated upstream
=======
=======

    ui->label->setText("<b>Username:<b>");
    ui->label_2->setText("<b>Password:<b>");

    ui->label_2->setToolTip("Your password must be at least 7 characters long and use (*&^%#$) symbols");
>>>>>>> e9eeb98a75dfc24d28be4a017392bb768b878e7e
>>>>>>> Stashed changes

}

page_2_login::~page_2_login()
{
    delete ui;
}
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
>>>>>>> Stashed changes


void page_2_login::on_pushButton_showhide_clicked(){

    if (vaziat == "hide") {
                ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
                vaziat = "normal";
                ui->pushButton_showhide->setStyleSheet("background-image: url(:/new/prefix1/hide-button-icon.png);");
            } else {
                ui->lineEdit_password->setEchoMode(QLineEdit::Password);
                vaziat = "hide";
                ui->pushButton_showhide->setStyleSheet("background-image: url(:/new/prefix1/show-button-icon.png);");
    }
}


void page_2_login::on_pushButton_signin_clicked(){
    if(ui->pushButton_signin->text() == "sign in"){
        ui->label_Qaccont->setText("Do you have account?");
        ui->pushButton_signin->setText("login");

    }
    else{
        ui->label_Qaccont->setText("Do not have account?");
        ui->pushButton_signin->setText("sign in");
    }


}


void page_2_login::on_pushButton_back_clicked()
{
    page_1_start *w = new page_1_start;
    w->show();
    this->close();
}

<<<<<<< Updated upstream
=======
=======
>>>>>>> e9eeb98a75dfc24d28be4a017392bb768b878e7e
>>>>>>> Stashed changes
