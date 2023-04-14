#ifndef PAGE2_LOGIN_H
#define PAGE2_LOGIN_H

#include <QMainWindow>

namespace Ui {
class page2_login;
}

class page2_login : public QMainWindow
{
    Q_OBJECT

public:
    explicit page2_login(QWidget *parent = nullptr);
    ~page2_login();

private slots:
    void on_signin_pushButton_clicked();

    void on_showhide_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_capcha_pushButton_clicked();

    void on_next_pushButton_clicked();

    void on_Password_lineEdit_textChanged(const QString &arg1);

    void on_Verification_Password_lineEdit_textChanged(const QString &arg1);

    void on_username_lineEdit_textChanged(const QString &arg1);

private:
    Ui::page2_login *ui;
};

#endif // PAGE2_LOGIN_H
