#include <iostream>
#include<string>
#include "Teacher.h"

using namespace std;

Teacher::Teacher()
    : PIBOfTeacher("Unknown"), faculty("Unknown"), expirience(1) {
    cout << "Default constructor called" << endl;
}

Teacher::Teacher(string pib, string fac, int exp)
    : PIBOfTeacher(pib), faculty(fac), expirience(exp) {
    cout << "Constructor with parameters called" << endl;
}

Teacher::Teacher(string pib, string fac, int exp, bool message)
    :PIBOfTeacher(pib), faculty(fac), expirience(exp) {
    cout << "Overloaded constructor called" << endl;
}

Teacher::~Teacher() {
    cout << "Destructor called for " << PIBOfTeacher << endl;
}

void Teacher::printInfo() {
    cout << "Name of teacher: " << PIBOfTeacher << endl;
    cout << "Faculty: " << faculty << endl;
    cout << "Years of expirience: " << expirience<< endl;
}