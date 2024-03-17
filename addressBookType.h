#pragma once
#include "personType.h"
#include "addressType.h"
#include "dateType.h"
#include "extPersonType.h"
#include "linkedList (1).h"
#include "orderedLinkedList.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class addressBookType : public orderedLinkedList<extPersonType>
{
private:

public:

	/* Reads the address book data from a file, creates an extPersonType object from this data.
	Calls the addEntry() function to add it to the 'addressList'.
	Precondition: Client program has a .txt file to read from that adheres to the readable format of the function.
	Additionally, an object array has already been created for this function to initalize the entries to. Also addEntry function works properly as it is called to add to array
	Postcondition: The generated object has had the array initalized will all data in .txt file
	*/
	void initEntry(string entry);

	/*A modifier function. Takes an input of extPersonType object. This function verifies that there is still
	room in the array and prevents additions if the array is fill, stores the extPersonType object in the array and increments the length variable.
	Because addressList is a partially filled array,the length variable can be used as the index for a new addition to the array before it is incremented
	Precondition: The initEntry function works properly. This is the function that reads the data from .txt and calls this function to add these entries to the array of objects.
	Postcondition: Entry is effectively added to the array and length variable is increased by 1*/
	void addEntry(extPersonType nentry);

	/*This function takes the last name of a person as an input and prints the entry for that person if found in the addressList array.
	Precondition: Array object has been created and initalized. Takes input string for last name of desired person
	Postcondition: Iterates through the array and if the provided string matches a last name, it returns the object*/
	void findPerson(string person) const;

	/*This function takes a month number as input and prints the names of all the persons in the addressList array who have birthdays in that month.
	Precondition: Array object has been created and initalized. Takes input integer for birth month of desired entries
	Postcondition: Itteraties through the array and if the provided int matches a birth month, it returns the object*/
	void findBirthday(int month) const;

	/*This function takes a relationship string  and prints the names of all the entries that are tagged with that relationship
	Precondition: Array object has been created and initalized. Takes input string for relationship of desired entries
	Postcondition: Itterates through the array and if the provided string matches a relationship, it returns the object*/
	void findRelations(string relationshiip) const;

	/*This function prints all the entries in the addressList. All this function needs to do is to iterate through the list and call the print
	function of each extPersonType object
	Precondition: Array has been itterated with desired entires
	Postcondition: Prints out entires from the array*/
	//template <class Type>
	void print() const;

	/*This Function takes input from the user in order to create a new entry in the address Book
	Precondition: extPersonType constructor works and addEntry function works
	Postcondition: A new entry is added to the address book*/
	void inputPerson();

	/*This function removes an extPersonType entry from the address book linked list using the patient first and last names
	Precondition:: There is an entry to be removed
	Postcondition: Entry is removed from the linked list*/
	void removePerson(string, string);

	/*This function saves the address book linked list to the .txt file used to intake information
	Precondition: The .txt file for entry is able to be accessed and read from and written to
	Postcondition: .txt file is successfully saved to */
	void saveFile(string);
};