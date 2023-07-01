#include "page_server.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    page_server w;
    w.show();
    return a.exec();
}
