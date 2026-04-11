#ifndef DEAN_H
#define DEAN_H

#include<iostream>
#include<string>
#include "Person.h"

class Dean: public Person {
private:
	std::string password;
public:
	Dean();
	Dean(std::string n, int i, std::string p);

	std::string getPassword() const;


};

#endif