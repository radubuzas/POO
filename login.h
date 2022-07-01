//
// Created by Radu Buzas on 01.07.2022.
//

#include <string>

#ifndef OOP_LOGIN_H
#define OOP_LOGIN_H


//login info
class Login{
private:
    std::string username;
    std::string password;
public:
    explicit Login(const std::string & username_="user", const  std::string & password_="1234");
    bool verify(const std::string &username_, const std::string & password_);
    void changePassword(const std::string & oldPassword_, const std::string & newPassword_);
    friend std::ostream & operator<<(std::ostream & os, const Login & obj);
};


#endif //OOP_LOGIN_H
