//
// Created by Radu Buzas on 01.07.2022.
//

#include "../headers/User.h"

unsigned User::user_count = 0;

User::User(const Login &obj, const std::string &email_, const std::string &firstName_, const std::string &lastName_,
           const std::string &phoneNumber_) : login{obj}, email{email_}, firstName{firstName_}, lastName{lastName_},
           phoneNumber{phoneNumber_} {
    ++user_count;
    std::cout << "User cstr init w/ Login!\n";
}

User::User(const std::string &username_, const std::string &password_, const std::string &email_,
           const std::string &firstName_, const std::string &lastName_, const std::string &phoneNumber_) : login{username_, password_},
              email{email_}, firstName{firstName_}, lastName{lastName_}, phoneNumber{phoneNumber_} {
    ++user_count;
    std::cout << "User cstr init w/o Login!\n";
}

User::User(){}

User::User(const User & obj) : login{obj.login}, email{obj.email}, firstName{obj.firstName}, lastName{obj.lastName},
                               phoneNumber{obj.phoneNumber} {
    std::cout << "User copy cstr!\n";
}

User & User::operator=(const User & obj) {
    login = obj.login;
    email = obj.email;
    firstName = obj.firstName;
    lastName = obj.lastName;
    phoneNumber = obj.phoneNumber;
    std::cout << "User operator =!\n";
    return *this;
}

User::~User() {
    std::cout << "User dstr!\n";
    --user_count;
}

unsigned User::getTotalUsers(){
    return User::user_count;
}

void User::changeEmail(const std::string &email_) {
    email = email_;
}

std::string User::getUsername() const {
    return login.getUsername();
}

std::ostream &operator<<(std::ostream &os, const User &user) {
    user.afisare(os);
    return os;
}
