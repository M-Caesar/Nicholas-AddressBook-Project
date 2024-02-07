#include <iostream>
#include "extPersonType.h"
#include "addressBookType.h"
using namespace std;


void showMenu()
	{
		int choice;
		do {
			cout << "~~~~~~~~~~~~~~~~~Main Menu~~~~~~~~~~~~~~~" << endl << "Please enter a choice:" << endl;
			cout << "Choice 1" << endl;
			cout << "Choice 2" << endl;
			cout << "Choice 3" << endl;
			cout << "Choice 4: exit" << endl;
			cin >> choice;

			switch (choice)
			{
			case 1:
				cout << " You've chosen Choice 1: " << endl;
				break;
			case 2:
				cout << " You've chosen Choice 2: " << endl;
				break;
			case 3:
				cout << " You've chosen Choice 3: " << endl;
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

	showMenu();

};



