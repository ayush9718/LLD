#include <iostream>
#include <vector>

#include "building/Building.h"
#include "building/Floor.h"

#include "creator/ElevatorCreator.h"

#include "elevator/ElevatorCar.h"
#include "elevator/ElevatorController.h"

#include "common/Direction.h"

int main() {

    std::cout << "====================================\n";
    std::cout << "       ELEVATOR SYSTEM DEMO\n";
    std::cout << "====================================\n\n";


    // =========================================================
    // STEP 1: CREATE FLOORS
    // =========================================================
    //
    // We create 5 floors:
    //
    // Floor 1
    // Floor 2
    // Floor 3
    // Floor 4
    // Floor 5
    //
    // Each Floor object contains an ExternalDispatcher.
    // The ExternalDispatcher handles UP/DOWN button requests.
    //

    std::vector<Floor*> floorList;

    Floor* floor1 = new Floor(1);
    Floor* floor2 = new Floor(2);
    Floor* floor3 = new Floor(3);
    Floor* floor4 = new Floor(4);
    Floor* floor5 = new Floor(5);

    floorList.push_back(floor1);
    floorList.push_back(floor2);
    floorList.push_back(floor3);
    floorList.push_back(floor4);
    floorList.push_back(floor5);


    // =========================================================
    // STEP 2: CREATE THE BUILDING
    // =========================================================
    //
    // The Building object stores all floors.
    //

    Building* building = new Building(floorList);

    std::cout << "Building created successfully.\n";

    std::cout << "Total floors: "
              << building->getAllFloorList().size()
              << "\n\n";


    // =========================================================
    // STEP 3: DISPLAY ALL FLOORS
    // =========================================================

    std::cout << "Floors available in the building:\n";

    for (Floor* floor : building->getAllFloorList()) {
        std::cout << "Floor "
                  << floor->floorNumber
                  << '\n';
    }

    std::cout << '\n';


    // =========================================================
    // STEP 4: ACCESS THE ELEVATORS
    // =========================================================
    //
    // ElevatorCreator automatically creates the elevators.
    //
    // Each elevator has:
    //
    // 1. ElevatorCar
    // 2. ElevatorController
    // 3. ElevatorDisplay
    // 4. ElevatorDoor
    // 5. InternalButtons
    //
    // ElevatorCreator stores all ElevatorController objects.
    //

    std::cout << "Available elevators:\n";

    for (
        ElevatorController* controller
        : ElevatorCreator::elevatorControllerList
    ) {
        ElevatorCar* elevator =
            controller->elevatorCar;

        std::cout << "Elevator ID: "
                  << elevator->id
                  << '\n';

        std::cout << "Current Floor: "
                  << elevator->currentFloor
                  << "\n\n";
    }


    // =========================================================
    // STEP 5: EXTERNAL ELEVATOR REQUEST
    // =========================================================
    //
    // Imagine a person is standing on Floor 3.
    //
    // The person presses the UP button.
    //
    // Flow:
    //
    // Floor
    //   ↓
    // ExternalDispatcher
    //   ↓
    // ElevatorController
    //   ↓
    // Request added to priority queue
    //

    std::cout << "------------------------------------\n";
    std::cout << "EXTERNAL REQUEST\n";
    std::cout << "------------------------------------\n";

    std::cout << "Person on Floor 3 presses UP.\n\n";

    floor3->pressButton(Direction::UP);


    // =========================================================
    // STEP 6: CHECK ELEVATOR REQUEST QUEUES
    // =========================================================
    //
    // The ExternalDispatcher uses this strategy:
    //
    // Odd elevator ID  -> handles odd floors
    // Even elevator ID -> handles even floors
    //
    // So the Floor 3 request should be assigned according
    // to that rule.
    //

    for (
        ElevatorController* controller
        : ElevatorCreator::elevatorControllerList
    ) {
        std::cout << "Elevator "
                  << controller->elevatorCar->id
                  << '\n';

        std::cout << "UP requests: "
                  << controller->upMinPQ.size()
                  << '\n';

        std::cout << "DOWN requests: "
                  << controller->downMaxPQ.size()
                  << "\n\n";
    }


    // =========================================================
    // STEP 7: INTERNAL ELEVATOR REQUEST
    // =========================================================
    //
    // Imagine the person enters an elevator and presses Floor 5.
    //
    // Flow:
    //
    // ElevatorCar
    //   ↓
    // InternalButtons
    //   ↓
    // InternalDispatcher
    //
    // IMPORTANT:
    //
    // In the original Java code,
    // InternalDispatcher::submitInternalRequest()
    // is EMPTY.
    //
    // Therefore this request currently does not move
    // the elevator.
    //

    if (
        !ElevatorCreator::elevatorControllerList.empty()
    ) {
        ElevatorController* controller =
            ElevatorCreator::elevatorControllerList[0];

        ElevatorCar* elevator =
            controller->elevatorCar;

        std::cout << "------------------------------------\n";
        std::cout << "INTERNAL REQUEST\n";
        std::cout << "------------------------------------\n";

        std::cout << "Person enters Elevator "
                  << elevator->id
                  << '\n';

        std::cout << "Person presses Floor 5.\n\n";

        elevator->pressButton(5);
    }


    // =========================================================
    // STEP 8: END OF DEMONSTRATION
    // =========================================================

    std::cout << "====================================\n";
    std::cout << "       DEMONSTRATION COMPLETE\n";
    std::cout << "====================================\n";


    // =========================================================
    // MEMORY MANAGEMENT NOTE
    // =========================================================
    //
    // The current translation uses raw pointers because the
    // original Java design creates objects using 'new'.
    //
    // Java has automatic garbage collection.
    // C++ does not.
    //
    // We will handle proper memory management separately
    // when we improve the C++ version.
    //

    return 0;
}