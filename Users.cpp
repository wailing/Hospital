//
// Created by Anaïs Ha on 24/05/2016.
//

#include "Users.h"
#include <iostream>
#include <fstream>

using namespace std;


void Users::userRegister() {
    ofstream usersFile ("userData.txt");
    if (!usersFile.is_open()) {
        usersFile.open("userData.txt");
    }
    usersFile << username << " " << password << endl;
    usersFile.close();
}