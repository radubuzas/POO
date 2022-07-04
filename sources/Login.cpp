//
// Created by Radu Buzas on 01.07.2022.
//

#include "../headers/Login.h"

Login::Login(const std::string & username_, const  std::string & password_) : username{username_}, password{password_}{
    std::cout << "Login cstr init\n";
}

bool Login::verify(const std::string &username_, const std::string & password_){
    if (username == username_ && password == password_)
        return true;
    return false;
}

void Login::changePassword(const std::string & oldPassword_, const std::string & newPassword_){
    if (verify(username, oldPassword_)) {
        password = newPassword_;
        std::cout << "Password for " << username << " changed!\n";
    }
    else
        std::cout << "Old password for " << username<< " is wrong! Can not change password!\n";
}

std::string Login::getUsername() const{
    return username;
}

std::ostream & operator<<(std::ostream & os, const Login & obj){
    os << "Username: " << obj.username << '\n';
    os << "Password: " << obj.password << '\n';
    return os;
}




