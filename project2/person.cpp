#include "person.h"

Person::Person(const QString& name, const QString& location, const QString& time, const QString& relation)
    : name(name), location(location), time(time), relation(relation) {}

Person::~Person() {}

QString Person::getName() const {
    return name;
}

QString Person::getLocation() const {
    return location;
}

QString Person::getTime() const {
    return time;
}

QString Person::getRelation() const {
    return relation;
}


void Person::setName(const QString& name) {
    this->name = name;
}


void Person::setLocation(const QString& location) {
    this->location = location;
}

void Person::setTime(const QString& time) {
    this->time = time;
}

void Person::setRelation(const QString& relation) {
    this->relation = relation;
}
