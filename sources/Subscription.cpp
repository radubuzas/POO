//
// Created by Radu Buzas on 02.07.2022.
//

#include "../headers/Subscription.h"

//Subscription::Subscription() {
//    subscription = SubscriptionType::Basic;
//}


Subscription::Subscription(const SubscriptionType & subscription_) {
    subscription = subscription_;
}

void Subscription::setSubscriptionType(const SubscriptionType & subscription_) {
    subscription = subscription_;
}

std::ostream &operator<<(std::ostream &os, const Subscription &subscription_) {
    os << "Subscription type: " << (subscription_.subscription == SubscriptionType::Basic ? "Basic" : "Premium") << '\n';
    return os;
}
