#include "ElevatorCar.h"

#include "ElevatorDisplay.h"
#include "ElevatorDoor.h"

#include "../button/InternalButtons.h"

ElevatorCar::ElevatorCar()
    : display(new ElevatorDisplay()),
      internalButtons(new InternalButtons()),
      elevatorState(ElevatorState::IDLE),
      currentFloor(0),
      elevatorDirection(Direction::UP),
      elevatorDoor(new ElevatorDoor()) {
}

void ElevatorCar::showDisplay() {
    display->showDisplay();
}

void ElevatorCar::pressButton(int destinationFloor) {
    internalButtons->pressButton(
        destinationFloor,
        this
    );
}

void ElevatorCar::setDisplay() {
    display->setDisplay(
        currentFloor,
        elevatorDirection
    );
}

bool ElevatorCar::moveElevator(
    Direction direction,
    int destinationFloor
) {
    int startFloor = currentFloor;

    if (direction == Direction::UP) {
        for (int i = startFloor;i <= destinationFloor;i++) {
            currentFloor = startFloor;

            setDisplay();
            showDisplay();

            if(i == destinationFloor) {
                return true;
            }
        }
    }

    if (direction == Direction::DOWN) {
        for (int i = startFloor;i >= destinationFloor;i--) {
            currentFloor = startFloor;

            setDisplay();
            showDisplay();

            if (i == destinationFloor) {
                return true;
            }
        }
    }

    return false;
}