#include <iostream>
#include "extPersonType.h"
#include "addressBookType.h"
using namespace std;
int main()
{
	/*
	ifstream inFile;
	string firstName, lastName;
	int month, day, year;
	string address, city, state;
	int zip;
	string phone, relation;

	inFile.open("AddressBookData.txt");
	if (!inFile.is_open())
	{
		cout << "Could not open file" << endl;
	}

	int recCount = 0;
	while (inFile >> firstName)
	{
		inFile >> lastName >> month >> day >> year;
		inFile.ignore();
		getline(inFile, address);
		getline(inFile, city);
		inFile >> state >> zip >> phone >> relation;

		cout << firstName << " " << lastName << endl;
		cout << month << "/" << day << "/" << year << endl;
		cout << address << endl;
		cout << city << "," << state << " " << zip << endl;
		cout << phone << " " << relation << endl;
		cout << endl;

		recCount++;
	}

	cout << "Read " << recCount << "records" << endl;
	*/

	addressBookType test;
	cout << "Testing initalizer:" << endl;
	test.initEntry("love");

	cout << "Testing the Find Birthday function for December(12):" << endl << endl;
	test.findBirthday(12);

	cout << "Testing the Find Person function for Tomak:" << endl << endl;
	test.findPerson("Tomak");

	cout << "Testing the Find relations function for Friend:" << endl << endl;
	test.findRelations("Friend");

	cout << "Testing the Print function:" << endl << endl;
	test.print();

}



