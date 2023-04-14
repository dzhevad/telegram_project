#include "page3_verificationcode.h"
#include "ui_page3_verificationcode.h"

#include<QMessageBox>

#include <iostream>
#include <cstdlib>
#include <ctime>

int random  ;

page3_verificationcode::page3_verificationcode(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page3_verificationcode)
{
    ui->setupUi(this);

    srand(time(NULL));
    random = rand() % 9000+1000;

    QMessageBox::information(this,"Verification code",QString::number(random));
}

page3_verificationcode::~page3_verificationcode()
{
    delete ui;
}
