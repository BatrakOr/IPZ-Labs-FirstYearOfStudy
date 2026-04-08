#include "Faculty.h"
#include <iostream>

// Конструктор
Faculty::Faculty(std::string t, int count) : title(t), studentCount(count) {
    std::cout << "[Faculty] Created: " << title << std::endl;
}

// Реалізація чисто віртуальної функції з інтерфейсу IPrintable
// Це виконує пункт №8 завдання
void Faculty::printToConsole() {
    std::cout << "\n================================" << std::endl;
    std::cout << " FACULTY REPORT" << std::endl;
    std::cout << " Title: " << title << std::endl;
    std::cout << " Number of students: " << studentCount << std::endl;
    std::cout << "================================" << std::endl;
}

// Деструктор
Faculty::~Faculty() {
    std::cout << "[Faculty] " << title << " object destroyed" << std::endl;
}