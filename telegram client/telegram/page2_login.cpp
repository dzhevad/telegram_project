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
#include <fstream>
#include <string>
#include <QString>

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

using namespace std;

//for hide or show the password line edit
QString vaziat = "hide";
//for Capcha
QString code = "0";


bool checkusername = true;

bool check_verification =  true;

//for compare between verification password line edit & password line edit
QString verification = "";

//check password line edit for using symbols and check for login to an exist account
QString password = "";

QString symbols = "*&^%#$";
// for getting len of password line edit for checking that for 7 character
int len ;

bool symbol = false;
bool pass = false;

string username;

string pasword;

string serch;





page2_login::page2_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page2_login)
{

    ui->setupUi(this);

    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\user&pass.db");
    database.open();

    //set the maximum and minimum size for page
    setMinimumSize(800,600);
    setMaximumSize(800,600);

    //<b> bold
    ui->username_label->setText("<i><b>Username:<b><i>");
    //this->setStyleSheet("background-image: url(:/images/page1_back.jpg);");

    //ui->groupBox->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->Password_label->setText("<i><b>Password:<b><i>");

    //groupbox color -> white


    //set back groud the ocean picture
   // this->setStyleSheet("background-image: url(:/images/page1_back.jpg);");
   // ui->groupBox->setStyleSheet("color: rgb(255, 255, 255);");
    ui->verificationpassword_label->setText("<i><b>Verificaton password:<b><i>");

    //Hide verification password for login
    ui->verificationpassword_label->hide();
    ui->Verification_Password_lineEdit->hide();
    ui->verification_label->hide();

    ui->check_username_label->hide();



    ui->signin_pushButton->setText("sign in");


    //set icon for show/hide button
    ui->showhide_pushButton->setStyleSheet("background-image: url(:/images/show-button-icon.png);");

    //set the password mode for hiding characters in line edit
    ui->Password_lineEdit->setEchoMode(QLineEdit::Password);
    ui->Verification_Password_lineEdit->setEchoMode(QLineEdit::Password);

    //load next button picture
    ui->next_pushButton->setStyleSheet("background-image: url(:/images/next-button.png);");

    //load back button picture
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
    // show the verification password box
        ui->Verification_Password_lineEdit->show();
        ui->verificationpassword_label->show();
        ui->verification_label->show();

        ui->signin_pushButton->setText("login");
        ui->Question_label->setText("Do you have account?");

    }
    else{
    // hide the verification password box
        ui->Verification_Password_lineEdit->hide();
        ui->verificationpassword_label->hide();
        ui->verification_label->hide();

        ui->signin_pushButton->setText("sign in");
        ui->Question_label->setText("Do not have account?");

    }
}

void page2_login::on_showhide_pushButton_clicked()
{
    // show/hide password
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
    // return to first page
    page1_start *p = new page1_start;
    p->show();
    this->close();
}


void page2_login::on_capcha_pushButton_clicked()
{
    //create CAPCHA
    srand(time(NULL));

    code = "";

    for(int i = 0; i < 6; i++) {
        int random_num = rand() % 62;
        if(random_num < 10) {
            code += (char)(random_num + '0');
        } else if (random_num <36){
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
    //check if all bets were ture go to next page
    if(ui->capcha_lineEdit->text()==code && check_verification  && checkusername && pass ){
        page3_verificationcode *w = new page3_verificationcode;
        w->show();

        // if the user want to sign in save his name and his password to savenames.txt file
        if(ui->signin_pushButton->text() == "login"){
            if(checkusername){

                username = ui->username_lineEdit->text().toStdString();
                pasword = ui->Password_lineEdit->text().toStdString();

                ofstream file("savenames.txt", ios_base::app);

                file << username << endl << pasword << endl;

                file.close();

                ofstream file1("user.txt");

                file1 << username << endl;

                file1.close();
            }
            // if user want to login save username in user.txt file
            else{
                username = ui->username_lineEdit->text().toStdString();

                ofstream file("user.txt");

                file << username << endl;

                file.close();
            }
        }

        this->close();
    }
    // if input text in capcha line edit was not match with CAPCHA show a warning Messagebox
    else if(!(ui->capcha_lineEdit->text()==code)){
        QMessageBox::warning(this,"capcha Eror","Enter the chapcha like a human","ok");
    }
    // if inpt text in verification password line edit not match with password show a warning Messagebox
    else if(!check_verification){
         QMessageBox::warning(this,"Verification password Eror","Enter the Verification password like a human ","ok");
    }
    // if the username has been exist in signin mode or username has not been exist in login mode show a Messagebox
    else if(!checkusername){
         QMessageBox::warning(this,"Username Eror","Enter the username like a human ","ok");
    }
    // in login mode if password was not match show a warning Messagebox
    else if(!pass){
         QMessageBox::warning(this,"Password Eror","Enter the Password like a human","ok");
    }


}


void page2_login::on_Password_lineEdit_textChanged(const QString &arg1)
{

    password = ui->Password_lineEdit->text() ;
    // getting length of passwor for check 7 character
    len = password.length();
    if(len>7){
        ui->character_label->setStyleSheet("color: rgb(0, 170, 0);");
        pass = true;
    }
    else{
         ui->character_label->setStyleSheet("color: rgb(170, 0, 0);");
         pass = false;
    }

    // check for have symbol
    for (QChar& c : symbols) {
        if (password.contains(c)) {
            symbol = true;
            break;
        }
        else{
            symbol = false;
            break;
        }
    }
    if(symbol){
        ui->symbol_label->setStyleSheet("color: rgb(0, 170, 0);");
    }
    else{
         ui->symbol_label->setStyleSheet("color: rgb(170, 0, 0);");
    }
    if(pass && symbol){
        pass = true;

    }


    if(ui->signin_pushButton->text() == "sign in"){
        ifstream file("savenames.txt");

        if(!file.is_open()){
            QMessageBox::warning(this,"file","Could not open file!");
        }

        string line = "";
        line = ui->Password_lineEdit->text().toStdString();

        pass = false;

        while(file >> serch)
            if (serch == line){
                pass = true;
                break;
            }
    }

}


void page2_login::on_Verification_Password_lineEdit_textChanged(const QString &arg1)
{
    verification = ui->Verification_Password_lineEdit->text();

    // compare between verification password and password
    if (verification ==ui->Password_lineEdit->text()){
        check_verification =  true;
        ui->verification_label->setStyleSheet("color: rgb(0, 170, 0);");
    }
    else{
        check_verification =  false;
        ui->verification_label->setStyleSheet("color: rgb(170, 0, 0);");
    }

}

void page2_login::on_username_lineEdit_textChanged(const QString &arg1)
{
    // in sign in mode check username for exist or not
    if(ui->signin_pushButton->text() == "login"){

        // use toStdString for change  Qstring to string
        username = ui->username_lineEdit->text().toStdString();


        ifstream file("savenames.txt");
        if(!file.is_open()){
            QMessageBox::warning(this,"File Error","Could not open the file!");
        }

        while (file >> serch)
            if (serch == username){
                ui->check_username_label->setText("Username has been exist");
                ui->check_username_label->show();
                ui->check_username_label->setStyleSheet("color: rgb(170, 0, 0);");
                checkusername = false;
                break;
            }
            else{
                ui->check_username_label->setText("Username has not been exist");
                ui->check_username_label->show();
                ui->check_username_label->setStyleSheet("color: rgb(0, 170, 0);");
                checkusername = true;
                break;
            }
        file.close();
}


    // in login mode check username for exist or not
    else{


        // use toStdString for change  Qstring to string
        username = ui->username_lineEdit->text().toStdString();


        ifstream file("savenames.txt");

        if(!file.is_open()){
            QMessageBox::warning(this,"File Error","Could not open the file!");
        }

        while(file >> serch)
            if (serch == username){
                ui->check_username_label->setText("Username has  been exist");
                ui->check_username_label->show();
                ui->check_username_label->setStyleSheet("color: rgb(0, 170, 0);");
                checkusername = true;
                break;
            }
            else{
                ui->check_username_label->setText("Username has not been exist");
                ui->check_username_label->show();
                ui->check_username_label->setStyleSheet("color: rgb(170, 0, 0);");
                checkusername = false;
                break;
            }

         file.close();
     }
}


