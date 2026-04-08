#include "Student.h"
#include "Person.h"

Student::Student(std::string n) : Person(n) {}

void Student::printRole() {
    std::cout << "Student" << std::endl;
}

void Student::showDetails() {
    std::cout << "[Student Info] Name: " << name << std::endl;
}

void Student::work() {
    std::cout << "Student " << name << " is studying for exams." << std::endl;
}

void Student::getDailyAllowance() {
    std::cout << "Student Daily Allowance: 50 UAH" << std::endl;
}

Student::~Student() {
    std::cout << "~Student destroyed" << std::endl;
}