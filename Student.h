//
// Created by Behzod Beridkulov u2410054 on 23.04.2025.
//
// Edited By Djafarov Akbar u2410067 on 24.04.2025

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Course.h"
#include <iostream>
using namespace std;

class Student : public Person{
public:
    Student(string n);
    ~Student();

private:
    int studentID;
    Course** enrolledCourses;
    int courseCount;
    int courseCapacity;

    static int nextStudentID = 1;

    void resizeCourseArray();
};



#endif //STUDENT_H
