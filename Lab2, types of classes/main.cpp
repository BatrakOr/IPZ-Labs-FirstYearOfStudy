#include <iostream>
#include<string>
#include "Student.h"
#include "Teacher.h"
#include "Faculty.h"

using namespace std;

int main() {
    Teacher t1;

    Teacher t2("Diakonenko Bohdan Viktorovich", "IFTKN", 1, true);

    Teacher t3("Val Oleksandr Olekasandrovich", "IFTKN", 99, true);

    Student s1;

    Student s3("Mariana", "IPZ", 3, true);

    Student s2("Andriy", "Mathematics", 1, true);

    Faculty f1();

    Faculty f2(83, 143, "Kohut Oleh");

    Faculty f3(67, 999, "Bruce Wayne");

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
    cout << endl;

    f3.printInfo();
    cout << endl;

    f2.printInfo();
    cout << endl;

 return 0;
}