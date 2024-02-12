#include "addressBookType.h"

void addressBookType::initEntry(string entry)
{
	//std::ifstream inputFile("AddressBookData.txt");
	//example code for input

	ifstream inFile;
	string firstName, lastName;
	int month, day, year;
	string address, city, state;
	int zip;
	string phone, relation;

	inFile.open(entry);
	if (!inFile.is_open())
	{
		cout << "Could not open file, exit the program and try again" << endl;

	}

	int recCount = 0;
	while (inFile >> firstName)
	{
		//intaking the data
		inFile >> lastName >> month >> day >> year;
		inFile.ignore();
		getline(inFile, address);
		getline(inFile, city);
		inFile >> state >> zip >> phone >> relation;

		//Testing: cout << "This is a test for zip:" << zip << "Test over" << endl;

		//assigning data to extPersonType object with temporary extPersonType object
		extPersonType tperson(firstName, lastName, month, day, year, address, city, state, zip, phone, relation);

		addEntry(tperson);

		//printing the data
		cout << firstName << " " << lastName << endl;
		cout << month << "/" << day << "/" << year << endl;
		cout << address << endl;
		cout << city << "," << state << " " << zip << endl;
		cout << phone << " " << relation << endl;
		cout << endl;

		recCount++;
	}

	cout << "Read " << recCount << " records" << endl;


}

void addressBookType::addEntry(extPersonType nentry)
{
	if (length < 500)
	{
		addressList[length] = nentry;
		length++;
	}
	//length++;
	else
	{
		cout << "Error: Array is full, addition failure" << endl;
	}
}

void addressBookType::findPerson(string person)
{
	for (int i = 0; i <= length; i++)
	{
		if (person == addressList[i].getLastName())
		{
			addressList[i].print();
			cout << endl;
		}
	}
}

void addressBookType::findBirthday(int month)
{
	for (int i = 0; i <= length; i++)
	{
		if (month == addressList[i].getBirthMonth())
		{
			addressList[i].print();
			cout << endl;
		}
	}
}

void addressBookType::findRelations(string relationship)
{
	for (int i = 0; i <= length; i++)
	{
		if (relationship == addressList[i].getRelationship())
		{
			addressList[i].print();
			cout << endl;
		}
	}
}

void addressBookType::print()
{
	for (int i = 0; i < length; i++)
	{
		addressList[i].print();
		cout << endl;
	}
}

void addressBookType::sortEntries() //used provided algorith, check with prof to see if it is correct
{ 
	int current = 1;
	while (current < length)
	{
		int i = current;
		bool placefound = false;
		//int list[1];

		while (i > 0 && !placefound)
		{
			if (addressList[i].getLastName() < addressList[i - 1].getLastName())
			{
				extPersonType temp = addressList[i];
				addressList[i] = addressList[i - 1];
				addressList[i - 1] = temp;
				i = i - 1;
				//addressList[i].print();
				//cout << length << endl;
				//cout << "This is current: " << current << endl;
			}

			else
				placefound = true;
		}
		current++;
	}
	
}