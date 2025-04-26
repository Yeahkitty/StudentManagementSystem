#include <iostream>
#include <string>

#include "Course.h"

using namespace std;

int main() {
	Course course("Gen2025", "AE2", 3);

	cout << "CourseCode: " << course.getCourseCode << endl
		<< "Course Name: " << course.getCourseName << endl
		<< "Course credits: " << course.getCredits << endl;

	course.displayDetails();
}