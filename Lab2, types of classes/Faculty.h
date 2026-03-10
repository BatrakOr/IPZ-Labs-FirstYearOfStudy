#ifndef FACULTY_H
#define FACULTY_H

#include <string>

class Faculty {

private:
    int NumberOfStudents;
    int AcademicGroupNumber;
    std::string SenseiOfTheGroup;

public:

    Faculty();
    Faculty(int numofs, int nomofgr, std::string sensei);
    Faculty(int numofs, int nomofgr, std::string sensei, bool message);

    ~Faculty();

    void printInfo();
};

#endif