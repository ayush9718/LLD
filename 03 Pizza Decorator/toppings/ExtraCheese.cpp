#include "ExtraCheese.h"

ExtraCheese::ExtraCheese(BasePizza* pizza)
    : ToppingDecorator(pizza) {}

int ExtraCheese::cost() {
    return basePizza->cost() + 10;
}