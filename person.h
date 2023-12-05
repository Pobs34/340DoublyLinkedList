#ifndef INC_340DOUBLYLINKEDLIST_TIMECYCLE_H
#define INC_340DOUBLYLINKEDLIST_TIMECYCLE_H

#include "destination.h"

class person {
private: 
    string name;
    int age;
    Destination destination;

public:
    Person(string name, int age , Destination destination);
    string getName() const;
    int getAge() const;
    Destination getDestination() const;


}:

#endif