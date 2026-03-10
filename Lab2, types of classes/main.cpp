#include <iostream>
#include<string>
#include "Student.h"

using namespace std;

int main() {

    Student s1;

    Student s3("Oleh", "Mathematics", 3, true);

    Student s2("Andriy", "Mathematics", 1, true);

    cout << endl;

    s1.printInfo();
    cout << endl;

    s2.printInfo();
    cout << endl;

    s3.printInfo();

    return 0;
}