#pragma once

#include "../common/Direction.h"

class ElevatorDisplay {
private:
    int floor;
    Direction direction;

public:
    void setDisplay(int floor, Direction direction);
    void showDisplay();
};