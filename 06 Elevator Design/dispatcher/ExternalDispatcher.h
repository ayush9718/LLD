#pragma once

#include <vector>

#include "../common/Direction.h"

class ElevatorController;

class ExternalDispatcher {
private:
    std::vector<ElevatorController*> elevatorControllerList;

public:
    ExternalDispatcher();

    void submitExternalRequest(
        int floor,
        Direction direction
    );
};