#ifndef PAGE5_CLIENT_H
#define PAGE5_CLIENT_H

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
class page5_client;
}

class page5_client : public QMainWindow
{
    Q_OBJECT

public:
    explicit page5_client(QWidget *parent = nullptr);
    ~page5_client();



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
    Ui::page5_client *ui;

    QTcpSocket* socket;

};

#endif // PAGE5_CLIENT_H
