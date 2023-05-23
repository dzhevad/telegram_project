#ifndef PAGR5_USERNAME_H
#define PAGR5_USERNAME_H

#include <QMainWindow>

namespace Ui {
class pagr5_username;
}

class pagr5_username : public QMainWindow
{
    Q_OBJECT

public:
    explicit pagr5_username(QWidget *parent = nullptr);
    ~pagr5_username();

private:
    Ui::pagr5_username *ui;
};

#endif // PAGR5_USERNAME_H
