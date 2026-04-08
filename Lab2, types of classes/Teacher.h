#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include "Faculty.h" // Тепер нам потрібен цей заголовок

class Teacher : public Person {
private:
    std::string subject;
    Faculty* faculty; // Вказівник на факультет, де працює викладач

public:
    Teacher(std::string n, std::string sub, Faculty* f);

    // Перевизначення віртуальних методів (Пункт 3)
    void showDetails() override;
    void work() override;

    // Реалізація чисто віртуальної функції (Пункт 7)
    void getDailyAllowance() override;

    ~Teacher();
};

#endif