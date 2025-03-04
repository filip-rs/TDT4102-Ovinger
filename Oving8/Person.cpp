#include "Person.h"

// BEGIN 2b
Person::Person(std::string name, std::string email, std::unique_ptr<Car> car) : name{name}, email{email}, car{std::move(car)} {};

std::string Person::getEmail() const {
    return email;
}
std::string Person::getName() const {
    return name;
}

void Person::setEmail(const std::string& email) {
    Person::email = email;
}
// END 2b

// BEGIN 2c
bool Person::hasAvailableSeats() const {
    if (Person::car != nullptr && Person::car->hasFreeSeats()) {
        return true;
    }
    return false;
}
// END 2c

// BEGIN 2d
std::ostream& operator<<(std::ostream& os, const Person &pers) {
    os << "Navn: " << pers.getName() << "\n";
    os << "Email: " << pers.getEmail() << "\n";
    os << "Har ledige seter?: " << std::to_string(pers.hasAvailableSeats()) << std::endl;

    return os;
}
// END 2d
