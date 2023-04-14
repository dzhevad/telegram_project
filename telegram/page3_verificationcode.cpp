#include "page3_verificationcode.h"
#include "ui_page3_verificationcode.h"

#include "page4_home.h"
#include "ui_page4_home.h"

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


    ui->verification_label->setText("<b>Enter the verification code:<b>");

}

page3_verificationcode::~page3_verificationcode()
{
    delete ui;
}

void page3_verificationcode::on_next_pushButton_clicked()
{
    if(ui->verification_lineEdit->text() == QString::number(random)){
        page4_home *w = new page4_home;
        w->show();
        this->close();
    }
    else{
        QMessageBox::warning(this,"verification code","Enter the verification code like a human");
    }
}

