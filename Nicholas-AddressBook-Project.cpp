#include <iostream>
#include "extPersonType.h"
#include "addressBookType.h"
using namespace std;

// ShowMenu needs to return client choice
int showMenu(addressBookType menuadd)
	{
		int choice;
		//string lastName;
		//string relation;
		//int birthmonth;
		cout << "~~~~~~~~~~~~~~~~~Main Menu~~~~~~~~~~~~~~~" << endl << "Please enter a choice:" << endl;
		cout << "Choice 1: Find Person" << endl;
		cout << "Choice 2: Find Birth Month" << endl;
		cout << "Choice 3: Find Relationship" << endl;
		cout << "Choice 4: Print" << endl;
		cout << "Choice 5: Exit" << endl;
		cin >> choice;

		return choice;
	}

int main()
{
	addressBookType test;
	string file;
	cout << "Please enter a file to read: ";
	cin >> file;
	test.initEntry(file);
	test.sortEntries();
	cout << "Entries printed in alphabetical order: " << endl;
	test.print();
	string lastName;
	string relation;
	int birthmonth;
	int chosen;

	do {
		chosen = showMenu(test);
		switch (chosen)
		{
		case 1:
			cout << " You've chosen Choice 1: Find Person " << endl;
			cout << "Please enter a last name: " << endl;
			cin >> lastName;
			cout << "These are entries for the " << lastName << " last name" << endl;
			test.findPerson(lastName);
			break;
		case 2:
			cout << " You've chosen Choice 2: Find Birthday " << endl;
			cout << "Please enter a birth month: " << endl;
			cin >> birthmonth;
			cout << "These are the entries for " << birthmonth << endl;
			test.findBirthday(birthmonth);
			break;
		case 3:
			cout << " You've chosen Choice 3: Find Relationship " << endl;
			cout << "Please enter a relationship type: " << endl;
			cin >> relation;
			cout << "These are the entries that have " << relation << endl;
			test.findRelations(relation);
			break;
		case 4:
			cout << " You've chosen Choice 4: Print " << endl;
			cout << "Entries have been Printed: " << endl;
			test.print();
			break;
		case 5:
			cout << " You've chosen Choice 5: " << endl;
			break;

		default:
			cout << "Error: inpoper choice, please try again!" << endl;
		}
	} while (chosen != 5);
};



