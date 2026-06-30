#include "Mushroom.h"

Mushroom::Mushroom(BasePizza* pizza)
    : ToppingDecorator(pizza) {}

int Mushroom::cost() {
    return basePizza->cost() + 15;
}