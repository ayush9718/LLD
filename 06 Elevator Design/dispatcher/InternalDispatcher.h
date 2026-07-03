#pragma once

#include <vector>

class ElevatorController;
class ElevatorCar;

class InternalDispatcher {
private:
    std::vector<ElevatorController*> elevatorControllerList;

public:
    InternalDispatcher();

    void submitInternalRequest(
        int destinationFloor,
        ElevatorCar* elevatorCar
    );
};