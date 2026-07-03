#include "ElevatorController.h"

#include "ElevatorCar.h"

ElevatorController::ElevatorController(
    ElevatorCar* elevatorCar
) : elevatorCar(elevatorCar) {
}

void ElevatorController::submitExternalRequest(
    int floor,
    Direction direction
) {
    if (direction == Direction::DOWN) {
        downMaxPQ.push(floor);
    }
    else {
        upMinPQ.push(floor);
    }
}

void ElevatorController::submitInternalRequest(
    int floor
) {
}

void ElevatorController::controlElevator() {
    while (true) {
        while (
            elevatorCar->elevatorDirection
            == Direction::UP
        ) {
        }
    }
}