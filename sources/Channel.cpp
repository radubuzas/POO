//
// Created by Radu Buzas on 02.07.2022.
//

#include "../headers/Channel.h"

Channel::Channel(const User & user_, const std::string & title_): User{user_}, chanelTitle{title_}{}

Channel::Channel(const User & user_, const std::string & title_, const std::vector<Videoclip *> & vid, const std::vector<User *> & subs_): User{user_}, chanelTitle{title_}, videoclips{vid}, subscribers{subs_}{}

void Channel::addVideoClip(Videoclip & videoclip) {
    videoclips.push_back( & videoclip);
}

void Channel::addSubscriber(User & obj) {
    subscribers.push_back(&obj);
}

void Channel::getSubscribersCount() {
    std::cout << "Subscribers count: " << subscribers.size() << '\n';
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