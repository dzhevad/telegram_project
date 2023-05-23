#include "pagr5_username.h"
#include "ui_pagr5_username.h"

pagr5_username::pagr5_username(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pagr5_username)
{
    ui->setupUi(this);
    setMinimumSize(1000,700);
    setMaximumSize(1000,700);

}

pagr5_username::~pagr5_username()
{
    delete ui;
}
