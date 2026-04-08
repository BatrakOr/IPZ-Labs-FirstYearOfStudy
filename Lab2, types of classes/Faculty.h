#ifndef FACULTY_H
#define FACULTY_H

#include "IPrintable.h"
#include <string>
#include <vector>

class Faculty : public IPrintable {
private:
    std::string title;
    int studentCount;

public:
    Faculty(std::string t, int count);

    // Реалізація методу інтерфейсу
    void printToConsole() override;

    // Деструктор
    ~Faculty();
};

#endif