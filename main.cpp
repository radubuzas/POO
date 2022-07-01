#include <iostream>
#include <string>
#include <vector>
#include "Login.h"

int main() {

    Login l;
    if (l.verify("user", "1234")) {
        std::cout << "Login successful!\n";
    } else {
        std::cout << "Login NOT successful!\n";
    }
    l.changePassword("1234", "12345");
    std :: cout << l;
    return 0;
}
