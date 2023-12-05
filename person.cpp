#include "person.h"

Person::Person (string name, int age, Destination destination): name(name), age(age), destination(destination) {}

string Person::getName() const {
    return name;
}

int Person:: getAge() const {
    return age;
}

Destination Person::getDestination() const{
    return destination; 
}