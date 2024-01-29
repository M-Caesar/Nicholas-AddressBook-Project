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
		bool leap = isLeapYear(year);

		//checking month parameter
		if (month > 12 || month < 1)
		{
			dMonth = 1;
			cout << "Error: invalid month detected." << endl;
		}
		else
			dMonth = month;

		//checking if day is within proper perameters
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			if (day > 31 || day < 1)
			{
				dDay = 1;
				cout << "Error: invalid day detected." << endl;
			}
			else
				dDay = day;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			if (day > 30 || day < 1)
			{
				dDay = 1;
				cout << "Error: invalid day detected." << endl;
			}
			else
				dDay = day;
		}
		else if (month == 2 && leap == true)
		{
			if (day > 29 || day < 1)
			{
				dDay = 1;
				cout << "Error: invalid day detected." << endl;
			}
			else
				dDay = day;
		}
		else if (day > 28 && leap == false)
		{
			if (day > 28 || day < 1)
			{
				dDay = 1;
				cout << "Error invalid day detected." << endl;
			}
			else
				dDay = day;
		}

		if (year < 1900)
		{
			dYear = 1900;
			cout << "Error: invalid year detected." << endl;
		}
		else
			dYear = year;
	}


	void dateType::print()
	{
		cout << dMonth << "-" << dDay << "-" << dYear << endl;
	}
