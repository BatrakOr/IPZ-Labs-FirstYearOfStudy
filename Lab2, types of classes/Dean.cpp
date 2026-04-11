#include "Dean.h"

Dean::Dean() : Person(), password("avrora777"){}

Dean::Dean(std::string n, int i, std::string p):
	Person(n,i), password(p){ }

std::string Dean::getPassword() const {
	return password;
}
