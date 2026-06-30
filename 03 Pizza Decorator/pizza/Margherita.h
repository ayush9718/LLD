#ifndef MARGHERITA_H
#define MARGHERITA_H

#include "BasePizza.h"

class Margherita : public BasePizza {
public:
    int cost() override;
};

#endif