#pragma once

#include <queue>
#include <vector>
#include <functional>

#include "../common/Direction.h"

class ElevatorCar;

class ElevatorController {
public:
    std::priority_queue<int,std::vector<int>,std::greater<int>> upMinPQ;
    std::priority_queue<int> downMaxPQ;

    ElevatorCar* elevatorCar;

    ElevatorController(ElevatorCar* elevatorCar);

    void submitExternalRequest(
        int floor,
        Direction direction
    );

    void submitInternalRequest(int floor);

    void controlElevator();
};