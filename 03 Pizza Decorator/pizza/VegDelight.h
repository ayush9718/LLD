#ifndef VEGDELIGHT_H
#define VEGDELIGHT_H

#include "BasePizza.h"

class VegDelight : public BasePizza {
public:
    int cost() override;
};

#endif