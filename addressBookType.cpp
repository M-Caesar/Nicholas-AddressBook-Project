#include "addressBookType.h"
#include "linkedList (1).h"
using namespace std;

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

		recCount++;
	}

	cout << "Read " << recCount << " records" << endl;


}

//modify to use the 
void addressBookType::addEntry(extPersonType nentry)
{
	addressLList.insertFirst(nentry);
}

void addressBookType::findPerson(string person)
{
	/*
	for (int i = 0; i <= length; i++)
	{
		if (person == addressList[i].getLastName())
		{
			addressList[i].print();
			cout << endl;
		}
	}
	*/
	nodeType<extPersonType>* current = first;
	bool found = false;
	while (current != nullptr && !found)
	{
		if (current->info.getLastName() == person || current->info.getFirstName() == person)
		{
			found = true;
			current->info.print();
		}
		else
		{
			current = current->link;
		}
	}
}

void addressBookType::findBirthday(int month)
{
	nodeType<extPersonType>* current = first;
	bool found = false;
	while (current != nullptr && !found)
	{
		if (current->info.getBirthMonth() == month)
		{
			found = true;
			current->info.print();
		}
		else
		{
			current = current->link;
		}
	}

	/*-------------------Old Code---------------------------------
	for (int i = 0; i <= length; i++)
	{
		if (month == addressList[i].getBirthMonth())
		{
			addressList[i].print();
			cout << endl;
		}
	}
		---------------------------------------------------------*/
}

void addressBookType::findRelations(string relationship)
{
	nodeType<extPersonType>* current = first;
	//bool found = false;
	while (current != nullptr)
	{
		if (current->info.getRelationship() == relationship)
		{
			//found = true;
			current->info.print();
		}
		else
		{
			current = current->link;
		}
	}

	/*------------------------ - Old Code----------------------------
	for (int i = 0; i <= length; i++)
	{
		if (relationship == addressList[i].getRelationship())
		{
			addressList[i].print();
			cout << endl;
		}
	}
	--------------------------------------------------------------*/
}

//template <class Type>
void addressBookType::print() const
{
	nodeType<extPersonType>* current = first;
	//bool found = false;
	while (current != nullptr)
	{
		current->info.print();
		addressLList.print();
		//cout << current->info << endl;
		//addressLList.print();
		current = current->link;
	}
	//cout << endl;
	/*--------------------------Old Code----------------------------
	for (int i = 0; i < length; i++)
	{
		addressList[i].print();
		cout << endl;
	}
	---------------------------------------------------------------*/
}

void addressBookType::inputPerson(extPersonType inEntry)
{
	string firstName, lastName;
	int month, day, year;
	string address, city, state;
	int zip;
	string phone, relation;

	cout << "Taking input for new contact:" << endl;
	cout << "Please input first name" << endl;
	cin >> firstName;
	cout << "Please input last name" << endl;
	cin >> lastName;
	cout << "Please input their birth month, day and year" << endl;
	cin >> month >> day >> year;
	cout << "Please input address, then city, then state, then zip code" << endl;
	cin >> address >> city >> state >> zip;
	cout << "Please input phone number in form XXX-XXX-XXXX" << endl;
	cin >> phone;
	cout << "Please input relation to contact" << endl;
	cin >> relation;
	cout << "Creating new contact..." << endl;
	extPersonType tperson(firstName, lastName, month, day, year, address, city, state, zip, phone, relation);
	addEntry(tperson);
}

void addressBookType::removePerson(extPersonType remEntry)
{
	addressLList.deleteNode(remEntry);
}

template <class Type>
ostream& operator<<(ostream& osObject, const orderedLinkedList<Type>& list)
{
	nodeType<Type>* current = list.first;
	while (current != nullptr)
	{
		osObject << current->info << " ";
		current = current->link;
	}
	//osObject << extPerson << endl;
	return osObject;
}

/*
template <class Type>
ostream& operator<<(ostream& os, const extPersonType& person)
{
	os << person.getFirstName() << person.getLastName() << endl;
	os << "Birthdate: " << person.getBirthMonth() << "/" << person.getBirthDay() << "/" << person.getBirthYear() << endl;
	os << "Address: " << person.getAddress() << endl;
	os << "Phone Number: " << person.getPhoneNumber() << endl;
	os << "Relationship: " << person.getRelationship() << endl;
	return os;
}
*/