//
// Created by Radu Buzas on 01.07.2022.
//

#include "../headers/User.h"

User::User(const Login &obj, const std::string &email_, const std::string &firstName_, const std::string &lastName_,
           const std::string &phoneNumber_) : login{obj}, email{email_}, firstName{firstName_}, lastName{lastName_},
           phoneNumber{phoneNumber_} {
    std::cout << "User cstr init w/ Login!\n";
}

User::User(const std::string &username_, const std::string &password_, const std::string &email_,
           const std::string &firstName_, const std::string &lastName_, const std::string &phoneNumber_) : login{username_, password_},
              email{email_}, firstName{firstName_}, lastName{lastName_}, phoneNumber{phoneNumber_} {
    std::cout << "User cstr init w/o Login!\n";
}

User::User(){}

void User::changeEmail(const std::string &email_) {
    email = email_;
}

std::ostream &operator<<(std::ostream &os, const User &user) {
    os << user.login;
    os << "Email: " << user.email << '\n';
    os << "First name: " << user.firstName << '\n';
    os << "Last name: " << user.lastName << '\n';
    os << "Phone number: " << user.phoneNumber << '\n';
    return os;
}
