#pragma once

#include "../common/Direction.h"
#include "../common/ElevatorState.h"

class ElevatorDisplay;
class InternalButtons;
class ElevatorDoor;

class ElevatorCar {
public:
    int id;

    ElevatorDisplay* display;
    InternalButtons* internalButtons;

    ElevatorState elevatorState;

    int currentFloor;

    Direction elevatorDirection;

    ElevatorDoor* elevatorDoor;

    ElevatorCar();

    void showDisplay();

    void pressButton(int destinationFloor);

    void setDisplay();

    bool moveElevator(
        Direction direction,
        int destinationFloor
    );
};