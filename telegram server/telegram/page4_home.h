#ifndef PAGE4_HOME_H
#define PAGE4_HOME_H


#include <QMainWindow>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QMetaType>
#include <QSet>
#include <QStandardPaths>
#include <QTcpServer>
#include <QTcpSocket>
#include<QComboBox>

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
    void newConnection();
    void appendToSocketList(QTcpSocket* socket);

    void readSocket();
    void discardSocket();
    void displayError(QAbstractSocket::SocketError socketError);

    void displayMessage(const QString& str);
    void sendMessage(QTcpSocket* socket);
    void sendAttachment(QTcpSocket* socket, QString filePath);

    void on_pushButton_sendMessage_clicked();
    void on_pushButton_sendAttachment_clicked();


    void refreshComboBox();


private:
    Ui::page4_home *ui;

    QTcpServer* m_server;
    QSet<QTcpSocket*> connection_set;

};

#endif // PAGE4_HOME_H
