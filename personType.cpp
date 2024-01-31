#include "personType.h"

void personType::setFirstName(string fname)
{
	firstName = fname;
}
void personType::setLastName(string lname)
{
	lastName = lname;
}
personType::personType(string fname, string lname)
{
	firstName = fname;
	lastName = lname;
}
void personType::print()
{
	cout << firstName << " " << lastName << endl;
}