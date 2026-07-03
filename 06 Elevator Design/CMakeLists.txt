project(ElevatorSystem)

add_executable(
    ElevatorSystem

    main.cpp

    building/Building.cpp
    building/Floor.cpp

    elevator/ElevatorCar.cpp
    elevator/ElevatorController.cpp
    elevator/ElevatorDisplay.cpp
    elevator/ElevatorDoor.cpp

    dispatcher/ExternalDispatcher.cpp
    dispatcher/InternalDispatcher.cpp

    button/InternalButtons.cpp

    creator/ElevatorCreator.cpp
)