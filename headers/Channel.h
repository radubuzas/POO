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
    static Videoclip * pointerToLastVideocip;
    std::string chanelTitle;
    std::vector <Videoclip *> videoclips;               // lista de videoclipuri incarcate
    std::vector <User *> subscribers;                 // lista abonantilor canalului
public:
    Channel(const User & user, const std::string & chanelTitle, const std::vector<Videoclip *> & videoclips, const std::vector<User *> & subs_);
    Channel(const User & user, const std::string & chanelTitle);
    void addVideoClip(Videoclip & videoclip);
    void addSubscriber(User & obj);
    [[nodiscard]] int getSubscribersCount() const override;
    [[nodiscard]]std::string getUsername() const override;
    void afisare(std::ostream & os) const override;
    friend std::ostream &operator << (std::ostream &os, const Channel &channel);
    std::string getName() {
        return chanelTitle;
    }
    static void lastVideoclipUploaded();
};

#endif //OOP_CHANNEL_H
