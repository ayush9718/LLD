#include "InternalButtons.h"

#include "../dispatcher/InternalDispatcher.h"
#include "../elevator/ElevatorCar.h"

InternalButtons::InternalButtons()
    : dispatcher(new InternalDispatcher()),
      availableButtons{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
      buttonSelected(-1) {
}

void InternalButtons::pressButton(
    int destinationFloor,
    ElevatorCar* elevatorCar
) {
    buttonSelected = destinationFloor;

    dispatcher->submitInternalRequest(
        destinationFloor,
        elevatorCar
    );
}