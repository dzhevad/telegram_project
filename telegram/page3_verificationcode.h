#ifndef PAGE3_VERIFICATIONCODE_H
#define PAGE3_VERIFICATIONCODE_H

#include <QMainWindow>

namespace Ui {
class page3_verificationcode;
}

class page3_verificationcode : public QMainWindow
{
    Q_OBJECT

public:
    explicit page3_verificationcode(QWidget *parent = nullptr);
    ~page3_verificationcode();

private slots:
    void on_next_pushButton_clicked();

private:
    Ui::page3_verificationcode *ui;
};

#endif // PAGE3_VERIFICATIONCODE_H
