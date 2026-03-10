#ifndef TEACHER_H
#define TEACHER_H

#include <string>

class Teacher {

private:
    std::string PIBOfTeacher;
    std::string faculty;
    int expirience;

public:

    Teacher();
    Teacher(std::string pib, std::string fac, int exp);
    Teacher(std::string pib, std::string fac, int exp, bool message);

    ~Teacher();

    void printInfo();
};

#endif
