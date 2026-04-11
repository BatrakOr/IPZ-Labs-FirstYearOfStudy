#include <iostream>
#include<string>
#include<vector>
#include"Person.h"
#include"Student.h"
#include"Dean.h"
#include"Teacher.h"
#include"Faculty.h"
#include"Course.h"

class UniversitySystem {
private:
	std::vector<Student> AllStudents;
	std::vector<Teacher> AllTeachers;
	std::vector<Course> AllCourses;
	std::vector<Faculty> Allfaculties;

	Dean headDean;
public:
	UniversitySystem();

	void run();
	void DeanMenu();



};
