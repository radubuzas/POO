//
// Created by Radu Buzas on 02.07.2022.
//

#include "../headers/Channel.h"

Videoclip * Channel::pointerToLastVideocip = nullptr;

Channel::Channel(const User & user_, const std::string & title_): User{user_}, chanelTitle{title_}{}

Channel::Channel(const User & user_, const std::string & title_, const std::vector<std::shared_ptr<Videoclip>> & vid, const std::vector<User *> & subs_): User{user_}, chanelTitle{title_}, videoclips{vid}, subscribers{subs_}{}

void Channel::addVideoClip(Videoclip & videoclip) {
    delete pointerToLastVideocip;
    pointerToLastVideocip = & videoclip;
    std::shared_ptr<Videoclip> temp(new Videoclip(videoclip));
    videoclips.push_back( temp);
}

void Channel::addSubscriber(User & obj) {
    subscribers.push_back(&obj);
}

int Channel::getSubscribersCount() const {
    return (int)subscribers.size();
}

std::string Channel::getUsername() const {
    return User::getUsername();
}


void Channel::afisare(std::ostream & os) const {
    os << "Channel title: " << chanelTitle << '\n';
    os << "Channel owner: " << this->getUsername() << '\n';
    os << "Channel subscribers: " << subscribers.size() << '\n';
    os << "Channel videos: " << videoclips.size() << '\n';
}

void Channel::lastVideoclipUploaded() {
    std::cout << *pointerToLastVideocip;
}

std::ostream &operator<<(std::ostream &os, const Channel &channel) {
    os << "Channel: \"" << channel.chanelTitle << "\" with " << channel.subscribers.size() << " subscribers\n";
    if(!channel.videoclips.empty())
        os << "Videoclips:\n";
    for (int i =0 ; i < (int)channel.videoclips.size(); ++i) {
        os << * channel.videoclips[i] << '\n';
    }
    if(!channel.subscribers.empty())
        os << "Subscribers:\n";
    for (int i = 0; i < (int)channel.subscribers.size(); ++i) {
        os << * channel.subscribers[i] << '\n';
    }
    return os;
}