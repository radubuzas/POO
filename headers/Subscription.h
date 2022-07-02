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
    Subscription();
    Subscription(const Subscription & rff);
    Subscription& operator=(const Subscription & rff);
    SubscriptionType getSubscriptionType();
    void setSubscriptionType(const SubscriptionType & subscription);
    friend std::ostream &operator << (std::ostream &os, const Subscription &subscription);

    ~Subscription();
};
#endif //OOP_SUBSCRIPTION_H
