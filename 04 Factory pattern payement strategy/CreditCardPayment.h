#ifndef CREDIT_CARD_PAYMENT_H
#define CREDIT_CARD_PAYMENT_H

#include "PaymentStrategy.h"

class CreditCardPayment : public PaymentStrategy {
public:
    void pay(int amount) override;
};

#endif