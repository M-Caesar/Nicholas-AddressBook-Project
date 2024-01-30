#include "dateType.h"

dateType::dateType(int month, int day, int year)
{
	dMonth = month;
	dDay = day;
	dYear = year;
}
bool dateType::isLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return true;
	}
	else {
		return false;
	}
}
void dateType::setDate(int month, int day, int year)
{
	bool leap = isLeapYear(year); //Variable to track if input year is a leap year or not
	bool valid = true; //Variable to track if invalid data has been input. If this is switched to false, all values are switched to default at the end of function.

	//checking month parameter
	if (month > 12 || month < 1)
	{
		cout << "Error: invalid month detected. Setting to default values" << endl;
		valid = false;

	}
	else
		dMonth = month;

	//checking if day is within proper parameters for months with 31 days.
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day > 31 || day < 1)
		{
			cout << "Error: invalid day detected. Setting to default values" << endl;
			valid = false;
		}
		else
			dDay = day;
	}
	//checking if day is within proper parameters for months with 30 days
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 30 || day < 1)
		{
			cout << "Error: invalid day detected. Setting to default values" << endl;
			valid = false;
		}
		else
			dDay = day;
	}
	//checking if day is within proper parameters if it is a leap year and the month is February
	else if (month == 2 && leap == true)
	{
		if (day > 29 || day < 1)
		{
			cout << "Error: invalid day detected. Setting to default values" << endl;
			valid = false;
		}
		else
			dDay = day;
	}
	//checking if day is within proper parameters if it is not a leap year and the month is February
	else if (month == 2 && leap == false)
	{
		if (day > 28 || day < 1)
		{
			cout << "Error: invalid day detected. Setting to default values" << endl;
			valid = false;
		}
		else
			dDay = day;
	}
	//checking if year is within proper parameters 
	if (year < 1900)
	{
		cout << "Error: invalid year detected. Setting to default values" << endl;
		valid = false;
	}
	else
		dYear = year;
	//conditional statement if any of the parameters did not pass the check, default values are set
	if (valid == false)
	{
		setDate(1, 1, 1900);
	}
}


void dateType::print()
{
	cout << dMonth << "-" << dDay << "-" << dYear << endl;
}