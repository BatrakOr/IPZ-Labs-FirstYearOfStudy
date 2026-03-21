#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {

private:
    std::string NameOfStudent;
    std::string faculty;
    int yearOfStudy;

public:


    Student();
    Student(std::string name, std::string fac, int year);
    Student(const Student& Ref);
    Student(std::string name, std::string fac, int year, bool message);

    ~Student();

    void printInfo();
};

#endif