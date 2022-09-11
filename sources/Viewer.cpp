//
// Created by Radu Buzas on 02.07.2022.
//

#include "../headers/Viewer.h"

Viewer::Viewer(const User & user_, const Subscription & subscriptionType_): User{user_}, subscriptionType{subscriptionType_} {}

Viewer::Viewer(const User & user_): User{user_} {}


Viewer::Viewer() {}

Viewer::~Viewer() {}

void Viewer::setSubscriptionType(const SubscriptionType & subscriptionType_) {
    subscriptionType.setSubscriptionType(subscriptionType_);
}

//void Viewer::subscribeToChannel(const Channel & channel) {
////    subscribedChannels.push_back(channel);                      // add address of channel to vector
//}

void Viewer::afisare(std::ostream & os) const {
    os << "Viewer: " << this->getUsername() << '\n';
    os << "Subscription type: " << subscriptionType << '\n';
}

int Viewer::getSubscribersCount() const {
    return 0;
}

std::string Viewer::getUsername() const {
    return User::getUsername();
}

Viewer::Viewer(const std::string &username_, const std::string &password_, const std::string &email_, const std::string &firstName_, const std::string &lastName_, const std::string &phoneNumber_, const Subscription & subscriptionType):
User{username_, password_, email_, firstName_, lastName_, phoneNumber_}, subscriptionType{subscriptionType} {}

Viewer::Viewer(const Login & obj, const std::string &email_, const std::string &firstName_, const std::string &lastName_, const std::string &phoneNumber_):
User{obj, email_, firstName_, lastName_, phoneNumber_} {}

std::ostream &operator<<(std::ostream &os, const Viewer &viewer) {
    viewer.afisare(os);
    return os;
}