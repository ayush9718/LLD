#ifndef FARMHOUSE_H
#define FARMHOUSE_H

#include "BasePizza.h"

class Farmhouse : public BasePizza {
public:
    int cost() override;
};

#endif