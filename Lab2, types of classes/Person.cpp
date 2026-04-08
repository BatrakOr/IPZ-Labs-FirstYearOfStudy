#include "Person.h"

// Конструктор: ініціалізуємо ім'я
Person::Person(std::string n) : name(n) {
}

// 1. Реалізація методу зі статичною прив'язкою
void Person::printRole() {
    std::cout << "General Person" << std::endl;
}

// 2. Базова реалізація віртуальних функцій
void Person::showDetails() {
    std::cout << "Name: " << name << std::endl;
}

void Person::work() {
    std::cout << "Person is doing something general." << std::endl;
}

// 4. Деструктор
// Навіть якщо він порожній, його важливо визначити, 
// бо ми оголосили його віртуальним у .h файлі
Person::~Person() {
    std::cout << "~Person deleted" << std::endl;
}