#pragma once

#include <vector>

class InternalDispatcher;
class ElevatorCar;

class InternalButtons {
private:
    InternalDispatcher* dispatcher;
    std::vector<int> availableButtons;
    int buttonSelected;

public:
    InternalButtons();

    void pressButton(
        int destinationFloor,
        ElevatorCar* elevatorCar
    );
};

