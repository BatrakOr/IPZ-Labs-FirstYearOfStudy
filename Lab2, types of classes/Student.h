#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#include <iostream>

class Student : public Person {
public:
    Student(std::string n);

    // 1. Демонстрація проблеми статичної прив'язки
    void printRole();

    // 3. Перевизначення (Override)
    void showDetails() override;
    void work() override;

    // 5. Використання final (цей метод не можна буде перевизначити далі)
    void getDailyAllowance() override final;

    ~Student();
};

#endif