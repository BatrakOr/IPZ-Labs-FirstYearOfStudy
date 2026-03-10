#include <iostream>
#include<string>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {
    Teacher t1;

    Teacher t2("Diakonenko Bohdan Viktorovich", "OOP", 99, true);

    Teacher t3("Val Oleksandr Olekasandrovich", "C++ Lectures", 97, true);

    Student s1;

    Student s3("Oleh", "Mathematics", 3, true);

    Student s2("Andriy", "Mathematics", 1, true);

    cout << endl;

    s1.printInfo();
    cout << endl;

    s2.printInfo();
    cout << endl;

    s3.printInfo();

    t1.printInfo();
    cout << endl;

    t2.printInfo();
    cout << endl;

    t3.printInfo();



    return 0;
}