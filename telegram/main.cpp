#include "page1_start.h"

#include "page4_home.h"
#include "ui_page4_home.h"

#include <QApplication>

#include <fstream>
#include <iostream>


using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ifstream file("user.txt");

    if (file.peek() == std::ifstream::traits_type::eof()){
        page1_start *w = new page1_start;
        w->show();
    }
    else{
        page4_home *p = new page4_home;
        p->show();
    }


    return a.exec();
}
