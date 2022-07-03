//
// Created by Radu Buzas on 02.07.2022.
//

#include "../headers/Channel.h"

Channel::Channel(const User & user_, const std::string & title_, unsigned subs): user{user_}, chanelTitle{title_}, subscriberCount{subs} {}

Channel::Channel(const User & user_, const std::string & title_, unsigned subs, const std::vector<Videoclip *> & vid, const std::vector<Viewer *> & subs_): user{user_}, chanelTitle{title_}, subscriberCount{subs}, videoclips{vid}, subscribers{subs_}{}

void Channel::addVideoClip(Videoclip & videoclip) {
    videoclips.push_back( & videoclip);
}

void Channel::addSubscriber(Viewer & viewer) {
    subscribers.push_back(&viewer);
}

std::ostream &operator<<(std::ostream &os, const Channel &channel) {
    os << "Channel: \"" << channel.chanelTitle << "\" with " << channel.subscriberCount << " subscribers\n";
    if(!channel.videoclips.empty())
        os << "Videoclips:\n";
    for (auto const videoclip : channel.videoclips) {
        os << * videoclip << '\n';
    }
    if(!channel.subscribers.empty())
        os << "Subscribers:\n";
    for (const auto subscriber : channel.subscribers) {
        os << * subscriber << '\n';
    }
    return os;
}