//
// Created by Radu Buzas on 02.07.2022.
//

#include "../headers/Viewer.h"

Viewer::Viewer(const User & user_, const Subscription & subscriptionType_): user{user_}, subscriptionType{subscriptionType_} {}

Viewer::Viewer(const User & user_) : user{user_} {
}

Viewer::Viewer() {}

//void Viewer::subscribeToChannel(const Channel & channel) {
////    subscribedChannels.push_back(channel);                      // add address of channel to vector
//}

std::ostream &operator<<(std::ostream &os, const Viewer &viewer) {
    os << viewer.user;
    os << "Subscription Type: " << viewer.subscriptionType << '\n';
    return os;
}
