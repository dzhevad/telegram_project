#include "page3_verificationcode.h"
#include "ui_page3_verificationcode.h"

#include "page4_home.h"
#include "ui_page4_home.h"

#include<QMessageBox>

#include <iostream>
#include <cstdlib>
#include <ctime>

// for create a random number
int rando ;

page3_verificationcode::page3_verificationcode(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page3_verificationcode)
{
    ui->setupUi(this);

    //set minimum and muximum size
    setMinimumSize(800,600);
    setMaximumSize(800,600);

    //create a random number
    srand(time(NULL));
    rando = rand() % 9000+1000;

    // use QString::number for change int to Qstring
    QMessageBox::information(this,"Verification code",QString::number(rando));


    ui->verification_label->setText("<i><b>Enter the verification code:<b><i>");

    ui->groupBox_get_name->hide();

}

page3_verificationcode::~page3_verificationcode()
{
    delete ui;
}

void page3_verificationcode::on_next_pushButton_clicked()
{
    //check the verification code
    if(ui->verification_lineEdit->text() == QString::number(rando)){
       ui->groupBox_get_name->show();
    }
    else{
        QMessageBox::warning(this,"verification code","Enter the verification code like a human!");
    }
}


void page3_verificationcode::on_pushButton_get_name_clicked()
{
    page4_home *w = new page4_home;
    w->show();
    this->close();
}

