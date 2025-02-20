//Teresa
#include "authy.h"
#include <iostream>
#include <fstream>
#include <string>
#include <openssl/sha.h> //hash passwords for security
#include <sstream>
#include <iomanip>

const std::string USER_LOG = "users.txt";

std::string hashPassword(const std::string& password){
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)password.c_str(), password.length(), hash);
    std::stringstream ss;

    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++){
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return ss.str();
}

bool checkCredentials( const std::string& username, const std::string& password){
    std::ifstream file(USER_LOG);
    std::string storedUser, storedPass;

    std::string hashedPassword = hashPassword(password);

    while(file >> storedUser >> storedPass){
        if(storedUser == username && storedPass == hashedPassword){
            return true;
        }   
    }
    return false;

}

bool login(){

    //entering usernames and passwords
std::string username, password;

std::cout << "Enter Username";
std::cin >> username;

std::cout << "Enter Password";
std::cin >> password;

    if(checkCredentials(username, password)){
        std::cout << "\nLogin successful~\n";

        return true;
    }
    else{
        std::cout << "Invalid credentials. Do you want to create an account? (Y/N): ";
        char choice;
        std::cin >> choice;

        if(choice == 'Y' || choice == 'y'){
            return registerUser();
        }
        return false;
    }
}

bool registerUser(){
    std::string username, password;

    std::cout << "Enter new username: ";
    std::cin >> username;

    std::cout << "Enter new password: ";
    std::cin >> password;

    std::ofstream file(USER_LOG, std::ios::app);
    file << username << " " << hashPassword(password) << "\n";

    std::cout << "\nRegistration Succesful.\n";

    return true;
}