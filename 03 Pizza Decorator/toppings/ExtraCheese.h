#ifndef EXTRA_CHEESE_H
#define EXTRA_CHEESE_H

#include "ToppingDecorator.h"

class ExtraCheese : public ToppingDecorator {
public:
    ExtraCheese(BasePizza* pizza);

    int cost() override;
};

#endif