//
// Created by Radu Buzas on 02.07.2022.
//

#ifndef OOP_CHANNEL_H
#define OOP_CHANNEL_H

#include "User.h"
#include "Viewer.h"
#include "Videoclip.h"

class Channel : public User {
private:
    std::string chanelTitle;
    std::vector <Videoclip *> videoclips;               // lista de videoclipuri incarcate
    std::vector <User *> subscribers;                 // lista abonantilor canalului
public:
    Channel(const User & user, const std::string & chanelTitle, const std::vector<Videoclip *> & videoclips, const std::vector<User *> & subs_);
    Channel(const User & user, const std::string & chanelTitle);
    void addVideoClip(Videoclip & videoclip);
    void addSubscriber(User & obj);
    void virtual getSubscribersCount() override;
    friend std::ostream &operator << (std::ostream &os, const Channel &channel);
    std::string getName() {
        return chanelTitle;
    }
};

#endif //OOP_CHANNEL_H
