#ifndef PAGE1_START_H
#define PAGE1_START_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class page1_start; }
QT_END_NAMESPACE

class page1_start : public QMainWindow
{
    Q_OBJECT

public:
    page1_start(QWidget *parent = nullptr);
    ~page1_start();

private slots:
    void on_next_pushButton_clicked();

private:
    Ui::page1_start *ui;
};
#endif // PAGE1_START_H
