#include "extPersonType.h"

void extPersonType::setPhoneNumber(string pnumber)
{
	phoneNumber = pnumber;
}
void extPersonType::setRelationship(string rship)
{
	relationship = rship;
}

void extPersonType::print()
{
	//personType print();
	cout << getFirstName() << " " << getLastName() << endl;
	//addressType print();
	cout << "Birthday: " << endl;
	birthdate.print();//not sure why << is not working
	cout << "Relationship: " << relationship;
}

extPersonType::extPersonType(string fname, string lname, int nmonth, int nday, int nyear, string naddress, string ncity, string nstate, int nzipcode, string pnumber, string rship)
{
	personType firstName = fname;
	personType lastName = lname;
	dateType Month = nmonth;
	dateType Day = nday;
	dateType Year = nyear;
	addressType address = naddress;
	addressType city = ncity;
	addressType state = nstate;
	addressType zipCode = nzipcode; //cant change from addressType to int?
	phoneNumber = pnumber;
	relationship = rship;
}
