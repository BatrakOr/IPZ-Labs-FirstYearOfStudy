#include "Student.h"
#include "Faculty.h"
#include <vector>

int main() {
    // Створюємо об'єкт через вказівник на базовий клас
    Person* personPtr = new Student("Ivan");

    // 1. Демонстрація проблеми статичної прив'язки
    // Викличеться метод Person, хоча об'єкт - Student
    std::cout << "--- Static Binding ---" << std::endl;
    personPtr->printRole();

    // 3. Динамічний поліморфізм (Base class pointer)
    std::cout << "\n--- Dynamic Binding (Pointer) ---" << std::endl;
    personPtr->showDetails(); // Викличе Student::showDetails
    personPtr->work();        // Викличе Student::work

    // 6. Динамічний поліморфізм (Base class reference)
    std::cout << "\n--- Dynamic Binding (Reference) ---" << std::endl;
    Person& ref = *personPtr;
    ref.getDailyAllowance(); // Викличе Student::getDailyAllowance

    // 8. Демонстрація інтерфейсу на різних класах
    std::cout << "\n--- Interface Demo ---" << std::endl;
    Faculty itFaculty("ComputerScience", 100);
    itFaculty.printToConsole();

    // 4. Віртуальний деструктор в дії
    std::cout << "\n--- Virtual Destructor ---" << std::endl;
    delete personPtr; // Викличе спочатку ~Student, потім ~Person

    // У main.cpp
    Faculty* myFaculty = new Faculty("Computer Science", 150);

    // Виклик методу інтерфейсу
    myFaculty->printToConsole();

    delete myFaculty;

    return 0;
}