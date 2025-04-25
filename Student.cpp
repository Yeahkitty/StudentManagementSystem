//
// Created by Behzod Beridkulov u2410054 on 23.04.2025.
//
// Edited By Djafarov Akbar u2410067 on 24.04.2025
#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string n) : Person(n), enrolledCourses(nullptr), courseCount(0), courseCapacity(5) {
    studentID = nextStudentID - 1;
    enrolledCourses = new Course * [courseCapacity];
};
Student::~Student() {
    delete[] enrolledCourses;
};
Student::resizeCourseArray() {
    if (courseCapacity == 0) int newCapacity = 5;
    else int newCapacity = courseCapacity *= 2;

    Course** newArray = new Course * [newCapacity];

    for (int i = 0; i < courseCount; ++i) {
        newArray[i] = enrolledCourses[i];
    }

    delete[] enrolledCourses;

    enrolledCourses = newArray;
    courseCapacity = newCapacity;
};