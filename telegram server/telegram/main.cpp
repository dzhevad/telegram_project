#include "page1_start.h"

#include "page4_home.h"
#include "page5_client.h"

#include <QListWidget>

#include <QApplication>

#include <fstream>
#include <iostream>


using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Open the main file

    ifstream file("user.txt");

    // Checks the file whether the file is empty or not

    if (file.peek() == std::ifstream::traits_type::eof()){

        // if file was empty open first page

        page1_start *w = new page1_start;
        w->show();
    }
    else{

        //if file was not empty open home page

        page4_home *p = new page4_home;
        p->show();

        page5_client *w = new page5_client;
        w->show();
    }


    return a.exec();
}
