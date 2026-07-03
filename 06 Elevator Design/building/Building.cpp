#include "Building.h"

#include <algorithm>
using namespace std;

Building::Building(vector<Floor*> floorList) : floorList(floorList) {
}

void Building::addFloors(Floor* floor) {
    floorList.push_back(floor);
}

void Building::removeFloors(Floor* floor) {
    auto it = find(floorList.begin(),floorList.end(),floor);

    if (it != floorList.end()) {
        floorList.erase(it);
    }
}

vector<Floor*> Building::getAllFloorList() {
    return floorList;
}