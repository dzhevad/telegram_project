#include "page_2_login.h"
#include "ui_page_2_login.h"

#include "page_1_start.h"
#include "ui_page_1_start.h"


QString vaziat = "hide";

page_2_login::page_2_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page_2_login)
{
    ui->setupUi(this);

    setMaximumSize(1000,700);
    setMinimumSize(1000,700);

    ui->label_username->setText("<b>Username:<b>");
    ui->label_password->setText("<b>Password:<b>");

    ui->lineEdit_password->setToolTip("Your password must have at least 7 characters and use (*&^%#$) symbols");

    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    //ui->pushButton_showhide->setText("hide");

    ui->pushButton_showhide->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->pushButton_showhide->setStyleSheet("background-image: url(:/new/prefix1/show-button-icon.png);");

    ui->label_Qaccont->setText("Do not have account?");

    ui->pushButton_back->setStyleSheet("background-image: url(:/new/prefix1/back.jpg);");

}

page_2_login::~page_2_login()
{
    delete ui;
}


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

