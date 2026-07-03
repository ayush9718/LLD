#pragma once

#include <vector>

class ElevatorController;

class ElevatorCreator {
public:
    static std::vector<ElevatorController*> elevatorControllerList;
};