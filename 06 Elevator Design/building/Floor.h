#pragma once

#include "../common/Direction.h"

class ExternalDispatcher;

class Floor {
public:
    int floorNumber;
    ExternalDispatcher* externalDispatcher;

    Floor(int floorNumber);

    void pressButton(Direction direction);
};