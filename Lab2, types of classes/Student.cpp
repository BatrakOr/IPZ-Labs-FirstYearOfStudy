#include <iostream>
#include<string>
#include "Student.h"

using namespace std;


Student::Student()
    : NameOfStudent("Unknown"), faculty("Unknown"), yearOfStudy(1) {
    cout << "Default constructor called" << endl;
}

Student::Student(string name, string fac, int year)
    : NameOfStudent(name), faculty(fac), yearOfStudy(year) {
    cout << "Constructor with parameters called" << endl;
}

// Конструктор копирования
Student::Student(const Student& Ref) :
    NameOfStudent(Ref.NameOfStudent), faculty(Ref.faculty), yearOfStudy(Ref.yearOfStudy)
    // Примечание: Мы имеем прямой доступ к членам объекта drob, поскольку мы сейчас находимся внутри класса Drob
{
    // Нет необходимости выполнять проверку denominator здесь, так как эта проверка уже осуществляется в конструкторе класса Drob
    std::cout << "Copy constructor worked here!\n"; // просто, чтобы показать, что это работает
}

Student::Student(string name, string fac, int year, bool message)
    : NameOfStudent(name), faculty(fac), yearOfStudy(year) {
    cout << "Overloaded constructor called" << endl;
}

Student::~Student() {
    cout << "Destructor called for " << NameOfStudent << endl;
}

void Student::printInfo() {
    cout << "Name: " << NameOfStudent << endl;
    cout << "Faculty: " << faculty << endl;
    cout << "Year: " << yearOfStudy << endl;
}