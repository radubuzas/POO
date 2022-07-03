#include <iostream>
#include "headers/Viewer.h"
#include "headers/Channel.h"
#include "headers/Videoclip.h"

int main() {

    // test login
    Login l, l1("Ana", "qwerty");
    if (l.verify("user", "1234")) {
        std::cout << "Login successful!\n";
    } else {
        std::cout << "Login NOT successful!\n";
    }

    if (l1.verify("Ana", "12345")) {
        std::cout << "Login successful!\n";
    } else {
        std::cout << "Login NOT successful!\n";
    }

    std::cout << "\n-----------------------\n\n";

    std :: cout << l << l1;
    l1.changePassword("12345", "123456");
    l.changePassword("1234", "abc");
    std :: cout << l << l1;

    std::cout << "\n-----------------------\n\n";

    User u{"anamere", "parola_mea", "ana.mere@gmail.com", "Ana", "Mere", "0712345678"};
    User u1{l1};

    std::cout << u << u1;

    std::cout << "\n-----------------------\n\n";

    u.changeEmail("new.email@mail.ro");
    u1.changeEmail("hahaha@production.ro");
    std::cout << u << u1;


    std::cout << "\n-----------------------\n\n";

    Videoclip v{"Capra cu 3 iezi", "Poveste scurta de Ion Creanga", 231};
    Videoclip v1{"Share this video with your friends", "https://www.youtube.com/watch?v=dQw4w9WgXcQ", 212};
    Videoclip v2{"How to make a sandwich", "Today I am going to be showing you how to make a simple sandwich!", 32};

    std::cout << v << v1 << v2;

    std::cout << "\n-----------------------\n\n";

    // testing addView method;

    for (int i = 0; i < 10; i++) {
        v.addView();
    }
    for (int i = 0; i < 23; i++) {
        v1.addView();
    }
    for (int i = 0; i < 32; i++) {
        v2.addView();
    }
    std::cout << v << v1 << v2;

    std::cout << "\n-----------------------\n\n";

    User uu{Login {"hiperion", "ds27*&dsNSdw?2_11jiDw*22200,,3123bq"}, "pink.floyd@pinkfloyd.com", "Pink", "Floyd", "0711111111"};
    User uu1{"CrazyDiamond", "YouTube", "redlobster89@fakemail.hu", "Red", "Lobster", "0736281293"};

    std::cout << "\n-----------------------\n\n";

    Viewer w{uu, SubscriptionType::Premium}, w1{}, w2{uu1, SubscriptionType::Basic};

    std::cout << w << w1 << w2;

    std::cout << "\n-----------------------\n\n";

    Channel c{u, "Ana are mere", 10};
    Channel c1{u1, "Portretul Anei", 127, {&v1}, {}};
    Channel c2{{"capra", "varza", "capra.varza@yahoo.com", "Capra", "Varza", "0799345678"}, "Capra, Lupul & Varza", 1080234, {&v}, {}};

    std::cout << c << c1 << c2;

    c.addSubscriber(w);
    c1.addSubscriber(w1);
    c2.addVideoClip(v2);

    std::cout << "\n-----------------------\n\n";
    std::cout << c << c1 << c2;




    return 0;
}
