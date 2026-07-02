#include <iostream>
#include "PaymentFactory.h"

int main() {

    PaymentStrategy* payment;

    payment = PaymentFactory::createPayment("UPI");
    payment->pay(500);

    delete payment;

    payment = PaymentFactory::createPayment("CARD");
    payment->pay(1200);

    delete payment;

    return 0;
}