#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
public:
    Person(std::string n);

    // 1. Статична прив'язка (без virtual)
    void printRole();

    // 2. Віртуальні функції (динамічна прив'язка)
    virtual void showDetails();
    virtual void work();

    // 7. Чисто віртуальна функція
    virtual void getDailyAllowance() = 0;

    // 4. Віртуальний деструктор (обов'язково для поліморфізму!)
    virtual ~Person();
};

#endif