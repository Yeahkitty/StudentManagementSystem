//
// Created by Behzod Berdikulov u2410054 on 23.04.2025.
//

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
public:
    Person(int id, string name);
    virtual ~Person();

    int getId() const;
    string getName() const;

    void setId(int id);
    void setName(string name);

    virtual void Display() const = 0;

protected:
    int id;
    string name;



    friend ostream& operator<<(ostream& os, const Person& person) {
        os << "ID: " << person.getId() << endl
        << "Name: " << person.getName();
        return os;
    };
    friend istream& operator>>(istream& is, Person& person) {
        is >> person.id;
        is >> person.name;
        return is;
    };
};

#endif //PERSON_H
