#ifndef PAGE_2_LOGIN_H
#define PAGE_2_LOGIN_H

#include <QMainWindow>

namespace Ui {
class page_2_login;
}

class page_2_login : public QMainWindow
{
    Q_OBJECT

public:
    explicit page_2_login(QWidget *parent = nullptr);
    ~page_2_login();

private slots:


    void on_pushButton_showhide_clicked();

    void on_pushButton_signin_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::page_2_login *ui;
};

#endif // PAGE_2_LOGIN_H