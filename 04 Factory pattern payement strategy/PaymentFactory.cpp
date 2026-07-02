#include "PaymentFactory.h"
#include "CreditCardPayment.h"
#include "UpiPayment.h"

PaymentStrategy* PaymentFactory::createPayment(std::string type) {
    
    if (type == "UPI")
        return new UpiPayment();

    if (type == "CARD")
        return new CreditCardPayment();

    return nullptr;
}