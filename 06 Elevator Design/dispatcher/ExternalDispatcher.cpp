#include "ExternalDispatcher.h"

#include "../creator/ElevatorCreator.h"
#include "../elevator/ElevatorController.h"
#include "../elevator/ElevatorCar.h"

ExternalDispatcher::ExternalDispatcher() {
    elevatorControllerList =
        ElevatorCreator::elevatorControllerList;
}

void ExternalDispatcher::submitExternalRequest(
    int floor,
    Direction direction
) {
    for (ElevatorController* elevatorController
         : elevatorControllerList) {

        int elevatorId =
            elevatorController->elevatorCar->id;

        if (elevatorId % 2 == 1 &&
            floor % 2 == 1) {

            elevatorController->submitExternalRequest(
                floor,
                direction
            );
        }
        else if (elevatorId % 2 == 0 &&
                 floor % 2 == 0) {

            elevatorController->submitExternalRequest(
                floor,
                direction
            );
        }
    }
}