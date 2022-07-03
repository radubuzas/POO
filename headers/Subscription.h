//
// Created by Radu Buzas on 02.07.2022.
//

#ifndef OOP_SUBSCRIPTION_H
#define OOP_SUBSCRIPTION_H

#include <string>
#include <iostream>

enum class SubscriptionType {
    Basic,
    Premium
};

class Subscription {
private:
    SubscriptionType subscription;
public:
    //Subscription();
    Subscription(const SubscriptionType & subscription_=SubscriptionType::Basic);
    void setSubscriptionType(const SubscriptionType & subscription);
    friend std::ostream &operator << (std::ostream &os, const Subscription &subscription);

};
#endif //OOP_SUBSCRIPTION_H