#pragma once
#include <iostream>
using namespace std;
class personType
{
private:
	string firstName = "";
	string lastName = "";

public:
	//Setters
	//Precondition: Function is provided with first name to be entered into memory
	//Postcondition: Function assigns first name to firstname variable
	void setFirstName(string fname);
	//Precondition: Function is provided with last name to be entered into memory
	//Postcondition: Function assigns last name to firstname variable
	void setLastName(string lname);

	//Getters
	string getFirstName() { return firstName; }
	string getLastName() { return lastName; }

	//Print function
	//Precondition: First name and last name variables have been stored correctly
	//Postcondition: First name and last name variables are displayed in proper format
	void print();

	//Constructor
	//Precondition: Accepts client arguments for first name and last name strings. Will assign them to memory
	//Postcondition: Variables have been accepted and stored. If no values are supplied, default values are used instead.
	personType(string = " ", string = " ");
};

