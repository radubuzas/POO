//
// Created by Radu Buzas on 02.07.2022.
//

#ifndef OOP_CHANNEL_H
#define OOP_CHANNEL_H

#include "User.h"
#include "Viewer.h"
#include "Videoclip.h"

class Channel {
private:
    User user;
    std::string chanelTitle;
    unsigned subscriberCount;
    std::vector <Videoclip *> videoclips;               // lista de videoclipuri incarcate
    std::vector <Viewer *> subscribers;                 // lista abonantilor canalului
public:
    Channel(const User & user, const std::string & chanelTitle, unsigned subscriberCount, const std::vector<Videoclip *> & videoclips, const std::vector<Viewer *> & subs_);
    Channel(const User & user, const std::string & chanelTitle, unsigned subscriberCount);
    void addVideoClip(Videoclip & videoclip);
    void addSubscriber(Viewer & viewer);
    friend std::ostream &operator << (std::ostream &os, const Channel &channel);
    std::string getName() {
        return chanelTitle;
    }
};

#endif //OOP_CHANNEL_H
