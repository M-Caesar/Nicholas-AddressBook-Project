#pragma once
#include <iostream>
using namespace std;
class dateType
{
private:
	int dMonth = 1;
	int dDay = 1;
	int dYear = 1900;

public:
	//Constructor:
	//precondition: Function is default constroctor for default values. Also takes input for desired month, day and year
	//postcondition: Uses supplied values for day, month and year to modify private variables
	dateType(int month = 1, int day = 1, int year = 1900);

	//function for verifying if given year is leap year
	//precondition: Function is provided with valid year to be determined if it is a leap year
	//postcondition: Valid year has been determined if it is or is not a leap year and that boolean value is returned
	bool isLeapYear(int Year);

	//setter function for month, day and year. in this function you will define logic for perameters outside of specifications
	//precondition: Function is provided with valid month, day and year values to be assigned to private variables. If values are not valid, function will determine that and return error along with default value
	//postcondition: Function has sucessfully assigned values if valid, and returned error message and default value if input is not valid
	void setDate(int month, int day, int year);

	//getter functions for variables
	int getDay() { return dDay; }
	int getMonth() { return dMonth; }
	int getYear() { return dYear; }

	//print function
	//precondition: all variables have been stored correctly. If not, default values will be print
	//postcondition: correect day, month and year are print in correct format
	void print();

};


