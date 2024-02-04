#include "addressBookType.h"

void initEntry(string entry)
{
	std::ifstream inputFile("AddressBookData.txt");	
}

void addEntry(extPersonType nentry);

void findPerson(string person);

void findBirthday(int month);

void findRelations(string relationshiip);

void print()
{
	
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
			if (addressList[i] < addressList[i - 1])
			{
				extPersonType temp = addressList[i];
				addressList[i] = addressList[i - 1];
				addressList[i - 1] = temp;
				i = i - 1;
			}

			else
				placefound = true;
			current = current++;
		}
	}
}