#pragma once
#include <iostream>
using namespace std;
class personType
{
private:
	string firstName = "";
	string lastName = "";

public:
	void setFirstName(string fname);
	void setLastName(string lname);
	string getFirstName() { return firstName; }
	string getLastName() { return lastName; }
	void print();

	personType(string = " ", string = " ");
	//add person type print funtion
};

