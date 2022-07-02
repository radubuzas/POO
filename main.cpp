#include <iostream>
#include <string>
#include <vector>
#include "headers/Viewer.h"
#include "headers/Channel.h"
#include "headers/Videoclip.h"

int main() {

    Login l;
    if (l.verify("user", "1234")) {
        std::cout << "Login successful!\n";
    } else {
        std::cout << "Login NOT successful!\n";
    }
    l.changePassword("1234", "12345");
    std :: cout << l;

    std::vector<Videoclip> vids;
    std::vector<Viewer> subs;
    std::vector<Channel> channels;



    return 0;
}
