#ifndef TOPPING_DECORATOR_H
#define TOPPING_DECORATOR_H

#include "../pizza/BasePizza.h"

class ToppingDecorator : public BasePizza {
protected:
    BasePizza* basePizza;

public:
    ToppingDecorator(BasePizza* pizza)
        : basePizza(pizza) {}

    virtual ~ToppingDecorator() {}
};

#endif