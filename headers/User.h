//
// Created by Radu Buzas on 01.07.2022.
//

#ifndef OOP_USER_H
#define OOP_USER_H

#include "Login.h"
#include <iostream>

class User {
private:
    Login login;
    std::string email;
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;
public:
    User(const std::string &username_, const std::string &password_, const std::string &email_, const std::string &firstName_, const std::string &lastName_, const std::string &phoneNumber_);
    User(const Login & obj, const std::string &email_="", const std::string &firstName_="", const std::string &lastName_="", const std::string &phoneNumber_="");
    User();
    User(const User & obj);
    User & operator=(const User & obj);
    ~User();
    //Login:: verify()
    //Login:: changePassword()
    void changeEmail(const std::string &email_);
    friend std::ostream & operator<<(std::ostream & os, const User & obj);
};

#endif //OOP_USER_H
