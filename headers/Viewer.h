//
// Created by Radu Buzas on 02.07.2022.
//

#ifndef OOP_VIEWER_H
#define OOP_VIEWER_H

#include "Subscription.h"
#include "User.h"
#include <vector>


class Viewer : public User {
private:
    Subscription subscriptionType;
public:
    Viewer( const User & user, const Subscription & subscriptionType);
    Viewer(const std::string &username_, const std::string &password_, const std::string &email_, const std::string &firstName_, const std::string &lastName_, const std::string &phoneNumber_, const Subscription &subscription =SubscriptionType::Basic);
    explicit Viewer(const Login & obj, const std::string &email_="", const std::string &firstName_="", const std::string &lastName_="", const std::string &phoneNumber_="");
    explicit Viewer( const User & user);
    Viewer();
    void setSubscriptionType(const SubscriptionType & subscriptionType_);
    void afisare(std::ostream & os) const override;
    [[nodiscard]]int getSubscribersCount() const override;
    [[nodiscard]]std::string getUsername() const override;
    friend std::ostream &operator << (std::ostream &os, const Viewer &viewer);
};

#endif //OOP_VIEWER_H