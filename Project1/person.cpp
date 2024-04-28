#include "person.h"
#include <QString>
#include <iostream>

void PERSON::setName(const QString& newName) {
    name = newName;
}

void PERSON::setLocation(const QString& newLocation) {
    location = newLocation;
}

void PERSON::setRelated(const QString& newRelated) {
    related = newRelated;
}

QString PERSON::getName() const {
    return name;
}

QString PERSON::getLocation() const {
    return location;
}

QString PERSON::getRelated() const {
    return related;
}

// void PERSON::print() const {
//     std::cout << "Name: " << name << "\nLocation: " << location << "\nRekated: " << related << std::endl;
// }
