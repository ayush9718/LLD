#pragma once

#include <vector>

#include "Floor.h"

class Building {
public:
    std::vector<Floor*> floorList;

    Building(std::vector<Floor*> floorList);

    void addFloors(Floor* floor);

    void removeFloors(Floor* floor);

    std::vector<Floor*> getAllFloorList();
};