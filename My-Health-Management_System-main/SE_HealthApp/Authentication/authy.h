//Teresa
#ifndef AUTHY_H
#define AUTHY_H
#include <string>
bool login();
bool registerUser();
std::string hashPassword(const std::string& password);
#endif

