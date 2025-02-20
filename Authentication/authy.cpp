//Teresa
#include "authy.h"
#include <iostream>
#include <string>

bool login(){

    //entering usernames and passwords
std::string username, password;

std::cout << "Enter Username";
std::cin >> username;

std::cout << "Enter Password";
std::cin >> password;

//autheticate
    if (username == "user" && password == "password"){
        std::cout << "\nLogin Successful.\n";

        return true;
    }
    else{
        std::cout << "\nInvalid Credentials\n";

        return false;
    }


}