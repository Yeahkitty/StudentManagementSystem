//Created by Djafarov Akbar u2410067

#include <iostream>
#include <string>

#include "Person.h"

using namespace std;

Person::Person(int id, string name) : id(id), name(name) {};

Person::getId() const {
    return id;
}
Person::getName() const {
    return name;
}
Person::setId(int id) {
    this->id = id;
}
Person::setName(string name) {
    this->name = name;
}