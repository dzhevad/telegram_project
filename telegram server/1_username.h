#ifndef USERNAME_H
#define USERNAME_H

#include "iostream"
#include <fstream>
#include <QFile>
#include "string"


using namespace std;

class user {

private:
    string username;



public:
    user(){

        ifstream file("user.txt");

        file >> username;

        file.close();
    }

    string get_name(){
        return username;
    }


};


#endif // USERNAME_H
