#ifndef PAGE_SERVER_H
#define PAGE_SERVER_H

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

QT_BEGIN_NAMESPACE
namespace Ui { class page_server; }
QT_END_NAMESPACE

class page_server : public QMainWindow
{
    Q_OBJECT

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

public:
    page_server(QWidget *parent = nullptr);
    ~page_server();

private:
    Ui::page_server *ui;

    QTcpServer* m_server;
    QSet<QTcpSocket*> connection_set;

};
#endif // PAGE_SERVER_H
