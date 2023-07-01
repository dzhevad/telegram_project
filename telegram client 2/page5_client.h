#ifndef PAGE5_CLIENT_H
#define PAGE5_CLIENT_H


namespace Ui {
class page5_client;
}

class page5_client : public QMainWindow
{
    Q_OBJECT

public:
    explicit page5_client(QWidget *parent = nullptr);
    ~page5_client();



private:
    Ui::page5_client *ui;



};

#endif // PAGE5_CLIENT_H
