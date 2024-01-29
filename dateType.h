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
	//constructor
	dateType(int month = 1, int day = 1, int year = 1900);
	//function for verifying if given year is leap year
	bool isLeapYear(int Year);
	//setter function for month, day and year. in this function you will define logic for perameters outside of specifications
	void setDate(int month, int day, int year);
	//getter functions for variables
	int getDay() { return dDay; }
	int getMonth() { return dMonth; }
	int getYear() { return dYear; }
	//print function
	void print();

};


