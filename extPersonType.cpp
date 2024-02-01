#include "extPersonType.h"

void extPersonType::setPhoneNumber(string pnumber)
{
	phoneNumber = pnumber;
}
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

void extPersonType::print()
{
	//print in order of full name,birthday, address, phone number and then relationship
	personType::print(); // name
	birthdate.print();
	address.print(); //address full
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
