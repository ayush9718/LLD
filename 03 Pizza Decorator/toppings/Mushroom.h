#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "ToppingDecorator.h"

class Mushroom : public ToppingDecorator {
public:
    Mushroom(BasePizza* pizza);

    int cost() override;
};

#endif