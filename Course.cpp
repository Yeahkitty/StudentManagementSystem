//Created by Behzod Berdiqulov U2410054

#include <iostream>
#include <string>
#include <stdexcept>

#include "Course.h"

using namespace std;

Course::Course(string& code, string& name, int& cred) : courseCode(code), courseName(name), credits(cred) {
    if (code.empty() || name.empty() || cred < 0) throw invalid_argument("Invalid parameters");
};
Course::getCourseCode() const {
    return courseCode;
};
Course::getCourseName() const {
    return courseName;
};
Course::getCredits() const {
    return credits;
};
Course::displayDetails() const {
    cout << "Code: " << courseCode << ", Name: " << courseName << ", Credits: " << credits;
}