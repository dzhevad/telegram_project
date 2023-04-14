#ifndef PAGE4_HOME_H
#define PAGE4_HOME_H

#include <QMainWindow>

namespace Ui {
class page4_home;
}

class page4_home : public QMainWindow
{
    Q_OBJECT

public:
    explicit page4_home(QWidget *parent = nullptr);
    ~page4_home();

private:
    Ui::page4_home *ui;
};

#endif // PAGE4_HOME_H
