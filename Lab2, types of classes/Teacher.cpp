#include "Teacher.h"
#include <iostream>

// Конструктор: передаємо ім'я в базовий клас Person, а решту ініціалізуємо тут
Teacher::Teacher(std::string n, std::string sub, Faculty* f)
    : Person(n), subject(sub), faculty(f) {
    std::cout << "[Teacher] Created: " << name << std::endl;
}

void Teacher::showDetails() {
    std::cout << "Teacher: " << name << " | Subject: " << subject << std::endl;
    if (faculty) {
        std::cout << "Works at: ";
        faculty->printToConsole(); // Використовуємо поліморфний метод факультету
    }
}

void Teacher::work() {
    std::cout << "Teacher " << name << " is preparing a lecture on " << subject << "." << std::endl;
}

void Teacher::getDailyAllowance() {
    // Реалізація чисто віртуальної функції (для викладача сума більша)
    std::cout << "Teacher allowance: 200 UAH" << std::endl;
}

Teacher::~Teacher() {
    std::cout << "~Teacher deleted" << std::endl;
    // Faculty ми тут НЕ видаляємо (delete faculty), 
    // бо один факультет існує для багатьох викладачів.
}