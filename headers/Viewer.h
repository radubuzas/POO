//
// Created by Radu Buzas on 02.07.2022.
//

#ifndef OOP_VIEWER_H
#define OOP_VIEWER_H

#include "Subscription.h"
#include "User.h"
#include <vector>


class Viewer {
private:
    User user;
    Subscription subscriptionType;
public:
    Viewer( const User & user, const Subscription & subscriptionType);
    explicit Viewer( const User & user);
    Viewer();
    void setSubscriptionType(const SubscriptionType & subscriptionType_);
    friend std::ostream &operator << (std::ostream &os, const Viewer &viewer);
};

#endif //OOP_VIEWER_H