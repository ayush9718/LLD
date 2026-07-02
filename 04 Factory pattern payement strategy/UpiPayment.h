#ifndef UPI_PAYMENT_H
#define UPI_PAYMENT_H

#include "PaymentStrategy.h"

class UpiPayment : public PaymentStrategy {
public:
    void pay(int amount) override;
};

#endif