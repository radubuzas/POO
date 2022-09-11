//
// Created by Radu Buzas on 01.07.2022.
//

#ifndef OOP_LOGIN_H
#define OOP_LOGIN_H

#include <string>
#include <unordered_map>
#include <iostream>

//login info
class Login{
private:
    std::string username;
    std::string password;
public:
    explicit Login(const std::string & username_="user", const  std::string & password_="1234");        // Cstr init
    bool verify(const std::string &username_, const std::string & password_);                           // verif date
    void changePassword(const std::string & oldPassword_, const std::string & newPassword_);            // schimbare parola
    [[nodiscard]]std::string getUsername() const;                                                       // afisare username
    friend std::ostream & operator<<(std::ostream & os, const Login & obj);                             // afisare date, op <<
};

#endif //OOP_LOGIN_H
