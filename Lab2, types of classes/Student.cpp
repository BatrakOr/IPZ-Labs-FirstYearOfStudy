#include <iostream>
#include<string>
#include "Student.h"

using namespace std;

Student::Student()
    : NameOfStudent("Unknown"), faculty("Unknown"), yearOfStudy(1) {
    cout << "Default constructor called" << endl;
}

Student::Student(string name, string fac, int year)
    : NameOfStudent(name), faculty(fac), yearOfStudy(year) {
    cout << "Constructor with parameters called" << endl;
}

Student::Student(string name, string fac, int year, bool message)
    : NameOfStudent(name), faculty(fac), yearOfStudy(year) {
    cout << "Overloaded constructor called" << endl;
}

Student::~Student() {
    cout << "Destructor called for " << NameOfStudent << endl;
}

void Student::printInfo() {
    cout << "Name: " << NameOfStudent << endl;
    cout << "Faculty: " << faculty << endl;
    cout << "Year: " << yearOfStudy << endl;
}