#include <iostream>
#include<string>
#include "Faculty.h"

using namespace std;

Faculty::Faculty()
    : NumberOfStudents(1), AcademicGroupNumber(1), SenseiOfTheGroup("Unknown") {
    cout << "Default constructor called" << endl;
}

Faculty::Faculty(int numofs, int nomofgr, string sensei)
    : NumberOfStudents(numofs), AcademicGroupNumber(nomofgr), SenseiOfTheGroup(sensei) {
    cout << "Constructor with parameters called" << endl;
}

Faculty::Faculty(int numofs, int nomofgr, string sensei, bool message)
    : NumberOfStudents(numofs), AcademicGroupNumber(nomofgr), SenseiOfTheGroup(sensei) {
    cout << "Overloaded constructor called" << endl;
}

Faculty::~Faculty() {
}

void Faculty::printInfo() {
    cout << "Number of students in academic group: " << NumberOfStudents << endl;
    cout << "Number of academic group: " << AcademicGroupNumber << endl;
    cout << "Sensei of thr academic group: " << SenseiOfTheGroup << endl;
}