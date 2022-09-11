//
// Created by Radu Buzas on 11.09.2022.
//

#ifndef OOP_EXCEPTIONS_H
#define OOP_EXCEPTIONS_H

#include <exception>
#include <string>

class CustomException : public std::exception {

private:
    std::string exceptionMessage;

public:
    [[maybe_unused]]explicit CustomException(std::string  = "Something went wrong.");
    [[maybe_unused]][[nodiscard]] const char * what() const noexcept override;

};

class FailedTextureLoad : public CustomException {

public:
    FailedTextureLoad();
    [[maybe_unused]]explicit FailedTextureLoad(const std::string&);
};

class BadID : public CustomException {

public:
    BadID();
    [[maybe_unused]]explicit BadID(const std::string &);
};

#endif //OOP_EXCEPTIONS_H
