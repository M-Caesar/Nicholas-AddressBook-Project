#include "extPersonType.h"

//setter for phone number
void extPersonType::setPhoneNumber(string pnumber)
{
	phoneNumber = pnumber;
}

//setter for relationship with verification
void extPersonType::setRelationship(string rship)
{
	if (rship == "Family" || rship == "Friend" || rship == "Business")
	{
		relationship = rship;
	}
	else
		relationship = "";
	//there are only three types of relationship, you need to insert verification if statements to determine if it the wrong one
}

//print function for extPersonType
void extPersonType::print()
{
	//print in order of full name,birthday, address, phone number and then relationship
	personType::print(); // name referencing personType print function
	birthdate.print(); // Birthdate referencing dateType print function
	address.print(); //address referencing addressType print function
	cout << phoneNumber << endl;
	cout << relationship << endl;

}

extPersonType::extPersonType(string fname, string lname, int nmonth, int nday, int nyear, string naddress, 
	string ncity, string nstate, int nzipcode, string pnumber, string rship):
	personType(fname, lname), address(naddress, ncity, nstate, nzipcode), birthdate(nmonth, nday, nyear)
{
	// we need to invoke the constructors of the the other classes, do not use these
	//how to invoke with no objects?
	// we are going to attach :personType(first, last), address(add,cty,st,zip), birthdate(mon,day,year)	
	// 
	phoneNumber = pnumber;
	relationship = rship;
}

//need to look up how to implement a key

bool extPersonType::operator==(extPersonType othereq)
{
	return (this->getLastName() == othereq.getLastName() && this->getFirstName() == othereq.getFirstName());
}

bool extPersonType::operator!=(extPersonType othernot)
{
	return !(*this == othernot);
}

bool extPersonType::operator>=(extPersonType otherless)
{
	return ((this->getLastName() > otherless.getLastName()) ||
		(this->getLastName() == otherless.getLastName() && 
			this->getFirstName() >= otherless.getFirstName()));
}

/*
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
*/
