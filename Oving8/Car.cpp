#include "Car.h"

#include <cassert>

// BEGIN 1b
Car::Car(int freeSeats) : freeSeats{freeSeats} {};
// END 1b

// BEGIN 1c
bool Car::hasFreeSeats() const {
    if (Car::freeSeats > 0) {
        return true;
    }
    else {
        return false;
    }
}
void Car::reserveFreeSeat() {
    Car::freeSeats -= 1;
}
// END 1c