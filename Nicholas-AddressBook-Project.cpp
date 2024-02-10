#include <iostream>
#include "extPersonType.h"
#include "addressBookType.h"
using namespace std;


void showMenu(addressBookType menuadd)
	{
		int choice;
		string lastName;
		string relation;
		int birthmonth;
		//addressBookType menuadd;
		do {
			cout << "~~~~~~~~~~~~~~~~~Main Menu~~~~~~~~~~~~~~~" << endl << "Please enter a choice:" << endl;
			cout << "Choice 1: Find Person" << endl;
			cout << "Choice 2: Find Birth Month" << endl;
			cout << "Choice 3: Find Relationship" << endl;
			cout << "Choice 4: exit" << endl;
			cin >> choice;

			switch (choice)
			{
			case 1:
				cout << " You've chosen Choice 1: Find Person " << endl;
				cout << "Please enter a last name: " << endl;
				cin >> lastName;
				cout << "This is the last name " << lastName << endl;
				menuadd.findPerson(lastName);
				break;
			case 2:
				cout << " You've chosen Choice 2: Find Birthday " << endl;
				cout << "Please enter a birth month: " << endl;
				cin >> birthmonth;
				cout << "These are the entries for " << birthmonth << endl;
				menuadd.findBirthday(birthmonth);
				break;
			case 3:
				cout << " You've chosen Choice 3: Find Relationship " << endl;
				cout << "Please enter a relationship type: " << endl;
				cin >> relation;
				cout << "These are the entries that have " << relation << endl;
				menuadd.findRelations(relation);
				break;
			case 4:
				cout << " You've chosen Choice 4: " << endl;
				break;
			default:
				cout << "Error: inpoper choice, please try again!" << endl;
			}
		} while (choice != 4);
	}
int main()
{
	addressBookType test;
	string file;
	cout << "Please enter a file to read: ";
	cin >> file;
	//cout << "Testing initalizer:" << endl;
	test.initEntry(file);

	/*
	cout << "Testing the Find Birthday function for December(12):" << endl << endl;
	test.findBirthday(12);

	cout << "Testing the Find Person function for Tomak:" << endl << endl;
	test.findPerson("Tomak");

	cout << "Testing the Find relations function for Friend:" << endl << endl;
	test.findRelations("Friend");

	cout << "Testing the Print function:" << endl << endl;
	test.print();

	cout << "Testing the sort function:" << endl << endl;
	test.sortEntries();
	test.print();
	*/

	showMenu(test);

};



