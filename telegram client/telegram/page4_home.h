#ifndef PAGE4_HOME_H
#define PAGE4_HOME_H

#include <QMainWindow>
#include <QAbstractSocket>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QHostAddress>
#include <QMessageBox>
#include <QMetaType>
#include <QString>
#include <QStandardPaths>
#include <QTcpSocket>

namespace Ui {
class page4_home;
}

class page4_home : public QMainWindow
{
    Q_OBJECT

public:
    explicit page4_home(QWidget *parent = nullptr);
    ~page4_home();


signals:
    void newMessage(QString);
private slots:
    void readSocket();
    void discardSocket();
    void displayError(QAbstractSocket::SocketError socketError);

    void displayMessage(const QString& str);
    void on_pushButton_sendMessage_clicked();
    void on_pushButton_sendAttachment_clicked();

private:
    Ui::page4_home *ui;

    QTcpSocket* socket;


};

#endif // PAGE4_HOME_H
