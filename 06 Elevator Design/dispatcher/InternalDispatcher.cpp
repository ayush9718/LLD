#include "InternalDispatcher.h"

#include "../creator/ElevatorCreator.h"

InternalDispatcher::InternalDispatcher() {
    elevatorControllerList =
        ElevatorCreator::elevatorControllerList;
}

void InternalDispatcher::submitInternalRequest(
    int destinationFloor,
    ElevatorCar* elevatorCar
) {
}