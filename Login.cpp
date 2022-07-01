//
// Created by Radu Buzas on 01.07.2022.
//

#include "Login.h"
#include <iostream>

Login::Login(const std::string & username_, const  std::string & password_) : username{username_}, password{password_}{
    std::cout << "Login cstr init\n";
}

bool Login::verify(const std::string &username_, const std::string & password_){
    if (username == username_ && password == password_)
        return true;
    return false;
}

void Login::changePassword(const std::string & oldPassword_, const std::string & newPassword_){
    if (verify(username, oldPassword_))
        password = newPassword_;
}

std::ostream & operator<<(std::ostream & os, const Login & obj){
    os << "Username: " << obj.username << '\n';
    os << "Password: " << obj.password << '\n';
    return os;
}




