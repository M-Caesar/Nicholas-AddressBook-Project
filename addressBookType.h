#pragma once
#include "personType.h"
#include "addressType.h"
#include "dateType.h"
#include "extPersonType.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class addressBookType
{
private:
	extPersonType addressList[500];
	int length = 0;
	int maxLength = 500;

public:
	/* Reads the address book data from a file, creates an extPersonType object from this data.
	Calls the addEntry() function to add it to the 'addressList'.
	Precondition:
	Postcondition:
	*/
	void initEntry(string entry);

	/*A modifier function. Takes an input of extPersonType object. This function verifies that there is still
	room in the array and prevents additions if the array is fill, stores the extPersonType object in the array and increments the length variable.
	Because addressList is a partially filled array,the length variable can be used as the index for a new addition to the array before it is incremented*/
	void addEntry(extPersonType nentry);

	/*This function takes the last name of a person as an input and prints the entry for that person if found in the addressList array.*/
	void findPerson(string person);

	/*This function takes a month number as input and prints the names of all the persons in the addressList array who have birthdays in that month.*/
	void findBirthday(int month);

	/*This function takes a relationship string  and prints the names of all the entries that are tagged with that relationship*/
	void findRelations(string relationshiip);

	/*This function prints all the entries in the addressList. All this function needs to do is to iterate through the list and call the print
	function of each extPersonType object*/
	void print();

	/*This function sorts the list using lastName field as the sort key so that the list will be printed in alphabetical order by last name.*/
	void sortEntries();
};