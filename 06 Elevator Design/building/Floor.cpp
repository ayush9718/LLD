#include "Floor.h"

#include "../dispatcher/ExternalDispatcher.h"

Floor::Floor(int floorNumber)
    : floorNumber(floorNumber),
      externalDispatcher(new ExternalDispatcher()) {
}

void Floor::pressButton(Direction direction) {
    externalDispatcher->submitExternalRequest(
        floorNumber,
        direction
    );
}