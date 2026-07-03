#include "ElevatorDisplay.h"

#include <iostream>

void ElevatorDisplay::setDisplay(int floor, Direction direction) {
    this->floor = floor;
    this->direction = direction;
}

void ElevatorDisplay::showDisplay() {
    std::cout << floor << std::endl;

    if (direction == Direction::UP) {
        std::cout << "UP" << std::endl;
    } else {
        std::cout << "DOWN" << std::endl;
    }
}