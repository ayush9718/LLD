#ifndef PAYMENT_FACTORY_H
#define PAYMENT_FACTORY_H

#include <string>
#include "PaymentStrategy.h"

class PaymentFactory {
public:
    static PaymentStrategy* createPayment(std::string type);
};

#endif