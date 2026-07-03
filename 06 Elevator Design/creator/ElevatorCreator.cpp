#include "ElevatorCreator.h"

#include "../elevator/ElevatorCar.h"
#include "../elevator/ElevatorController.h"

std::vector<ElevatorController*>
ElevatorCreator::elevatorControllerList = []() {

    std::vector<ElevatorController*> controllers;

    ElevatorCar* elevatorCar1 = new ElevatorCar();
    elevatorCar1->id = 1;

    ElevatorController* elevatorController1 =
        new ElevatorController(elevatorCar1);

    ElevatorCar* elevatorCar2 = new ElevatorCar();

    elevatorCar1->id = 2;

    ElevatorController* elevatorController2 =
        new ElevatorController(elevatorCar2);

    controllers.push_back(elevatorController1);
    controllers.push_back(elevatorController2);

    return controllers;
}();