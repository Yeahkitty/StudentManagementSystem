//
// Created by Djafarov Akbar u2410067 on 23.04.2025.
//

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std; 

class Course {
public:
    Course(string& code, string& name, int& cred); //parametrized

    string getCourseCode() const {};
    string getCourseName() const {};
    int getCredits() const {};

    void displayDetails() const {};


private:
    string courseCode;
    string courseName;
    int credits;
};

#endif //COURSE_H
