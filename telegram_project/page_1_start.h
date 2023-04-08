#ifndef PAGE_1_START_H
#define PAGE_1_START_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class page_1_start; }
QT_END_NAMESPACE

class page_1_start : public QMainWindow
{
    Q_OBJECT

public:
    page_1_start(QWidget *parent = nullptr);
    ~page_1_start();

private:
    Ui::page_1_start *ui;
};
#endif // PAGE_1_START_H
