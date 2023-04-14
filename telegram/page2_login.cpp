#include "page2_login.h"
#include "ui_page2_login.h"

#include "page1_start.h"
#include "ui_page1_start.h"
#include "page3_verificationcode.h"
#include "ui_page3_verificationcode.h"

#include <QMessageBox>
#include <QString>
#include <QApplication>
#include <QLineEdit>
#include <QPalette>
#include <QTextStream>
#include <QFile>


#include <iostream>
#include <cstdlib>
#include <ctime>

QString vaziat = "hide";
QString code = "0";

QString username = "";
bool checkusername = false;

bool check_verification =  true;
QString verification = "";


QString password = "";
QString symbols = "*&^%#$";
int len ;
bool symbol = false;
bool pass = false;
QString text = "";




page2_login::page2_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page2_login)
{

    ui->setupUi(this);

    setMinimumSize(1000,700);
    setMaximumSize(1000,700);

    ui->username_label->setText("<b>Username:<b>");


    ui->Password_label->setText("<b>Password:<b>");


    ui->verificationpassword_label->setText("<b>Verificaton password:<b>");
    ui->verificationpassword_label->hide();
    ui->Verification_Password_lineEdit->hide();
    ui->verification_label->hide();

    ui->check_username_label->hide();

    ui->signin_pushButton->setText("sign in");



    ui->showhide_pushButton->setStyleSheet("background-image: url(:/images/show-button-icon.png);");
    ui->Password_lineEdit->setEchoMode(QLineEdit::Password);
    ui->Verification_Password_lineEdit->setEchoMode(QLineEdit::Password);


    ui->next_pushButton->setStyleSheet("background-image: url(:/images/next-button.png);");

    ui->back_pushButton->setStyleSheet("background-image: url(:/images/back.jpg);");

    ui->symbol_label->setStyleSheet("color: rgb(170, 0, 0);");
    ui->character_label->setStyleSheet("color: rgb(170, 0, 0);");
    ui->verification_label->setStyleSheet("color: rgb(170, 0, 0);");



}

page2_login::~page2_login()
{
    delete ui;
}

void page2_login::on_signin_pushButton_clicked()
{
    if(ui->signin_pushButton->text() == "sign in"){

        ui->signin_pushButton->setText("login");
        ui->Question_label->setText("Do you have account?");

        ui->Verification_Password_lineEdit->show();
        ui->verificationpassword_label->show();
        ui->verification_label->show();
    }
    else{
        ui->signin_pushButton->setText("sign in");
        ui->Question_label->setText("Do not have account?");

        ui->Verification_Password_lineEdit->hide();
        ui->verificationpassword_label->hide();
    }
}

void page2_login::on_showhide_pushButton_clicked()
{
    if(vaziat == "hide"){
        ui->Password_lineEdit->setEchoMode(QLineEdit::Normal);
        ui->Verification_Password_lineEdit->setEchoMode(QLineEdit::Normal);
        vaziat = "show";
        ui->showhide_pushButton->setStyleSheet("background-image: url(:/images/hide-button-icon.png);");
    }
    else{
        ui->Password_lineEdit->setEchoMode(QLineEdit::Password);
        ui->Verification_Password_lineEdit->setEchoMode(QLineEdit::Password);
        vaziat = "hide";
        ui->showhide_pushButton->setStyleSheet("background-image: url(:/images/show-button-icon.png);");
    }
}


void page2_login::on_back_pushButton_clicked()
{
    page1_start *p = new page1_start;
    p->show();
    this->close();
}


void page2_login::on_capcha_pushButton_clicked()
{

    srand(time(NULL));

    code = "";

    for(int i = 0; i < 6; i++) {
        int random_num = rand() % 62;
        if(random_num < 10) {
            code += (char)(random_num + '0');
        } else if (random_num <37){
            code += (char)(random_num - 10 + 'A');
        }
        else {
            code += (char)(random_num - 36 + 'a');
        }
    }

    ui->capcha_label->setText(code);
}


void page2_login::on_next_pushButton_clicked()
{
    if(ui->capcha_lineEdit->text()==code && check_verification  /*&& checkusername*/ && pass ){
        page3_verificationcode *w = new page3_verificationcode;
        w->show();

        if(ui->signin_pushButton->text() == "login"){
            if(checkusername){
                QFile file("D:/text/savenames.txt");

                if (!file.open(QIODevice::Append | QIODevice::Text))
                       QMessageBox::information(this,"file","can not open file!!");

                    QTextStream out(&file);
                    out << "salam"  << endl;

                    file.close();
            }
        }
        this->close();
    }
    else if(!(ui->capcha_lineEdit->text()==code)){
        QMessageBox::warning(this,"capcha Eror","Enter the chapcha like a human","ok");
    }
    else if(!check_verification){
         QMessageBox::warning(this,"capcha Eror","verification","ok");
    }
    else if(!checkusername){
         QMessageBox::warning(this,"capcha Eror","username","ok");
    }
    else if(!pass){
         QMessageBox::warning(this,"capcha Eror","pass","ok");
    }


}


void page2_login::on_Password_lineEdit_textChanged(const QString &arg1)
{
   text = ui->Password_lineEdit->text();

    password = ui->Password_lineEdit->text() ;
    len = password.length();
    if(len>7){
        ui->character_label->setStyleSheet("color: rgb(0, 255, 0);");
        pass = true;
    }
    else{
         ui->character_label->setStyleSheet("color: rgb(170, 0, 0);");
         pass = false;
    }

    for (QChar& c : symbols) {
        if (text.contains(c)) {
            symbol = true;
            break;
        }
        else{
            symbol = false;
            break;
        }
    }
    if(symbol){
        ui->symbol_label->setStyleSheet("color: rgb(0, 255, 0);");
    }
    else{
         ui->symbol_label->setStyleSheet("color: rgb(170, 0, 0);");
    }
    if(pass && symbol){
        pass = true;

    }
}


void page2_login::on_Verification_Password_lineEdit_textChanged(const QString &arg1)
{
    verification = ui->Verification_Password_lineEdit->text();

    if (verification ==ui->Password_lineEdit->text()){
        check_verification =  true;
        ui->verification_label->setStyleSheet("color: rgb(0, 255, 0);");
    }
    else{
        check_verification =  false;
        ui->verification_label->setStyleSheet("color: rgb(170, 0, 0);");
    }

}


void page2_login::on_username_lineEdit_textChanged(const QString &arg1)
{
    if(ui->signin_pushButton->text() == "login"){
        username = ui->username_lineEdit->text();

        QFile file("D:/text/savenames.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
           QMessageBox::warning(this,"file","Could not oen the file");
        }
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (line.contains(username)) {
                ui->check_username_label->setText("Username has been exist");
                ui->check_username_label->show();
                ui->check_username_label->setStyleSheet("color: rgb(170, 0, 0);");
                checkusername = false;
                break;
            }
            else{
                ui->check_username_label->show();
                ui->check_username_label->setStyleSheet("color: rgb(0, 255, 0);");
                checkusername = true;
            }
        }
        file.close();


    }
    else{
        username = ui->username_lineEdit->text();

        QFile file("D:/text/savenames.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
           QMessageBox::warning(this,"file","Could not oen the file");
        }
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (line.contains(username)) {
                ui->check_username_label->setText("Username has  been exist");
                ui->check_username_label->show();
                ui->check_username_label->setStyleSheet("color: rgb(0, 255, 0);");
                checkusername = true;
                break;
            }
            else{
                ui->check_username_label->setText("Username has not been exist");
                ui->check_username_label->show();
                ui->check_username_label->setStyleSheet("color: rgb(170, 0, 0);");
                checkusername = false;
            }
        }
            file.close();
    }
}

