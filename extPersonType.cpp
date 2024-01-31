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
	/*
	//personType print();
	cout << getFirstName() << " " << getLastName() << endl; //make this into the person type print function and then invoke that function here
	//addressType print();
	address.print(); //address is the object of addressType and that is how we are invoking the addressType print function
	cout << "Birthday: " << endl;
	birthdate.print();//not sure why << is not working
	cout << "Relationship: " << relationship;
	*/
	personType::print(); // name
	birthdate.print();
	address.print(); //address full
	cout << phoneNumber << endl;
	cout << relationship << endl;

}

extPersonType::extPersonType(string fname, string lname, int nmonth, int nday, int nyear, string naddress, string ncity, string nstate, int nzipcode, string pnumber, string rship):personType(fname, lname), address(naddress, ncity, nstate, nzipcode), birthdate(nmonth, nday, nyear)
{
	// we need to invoke the constructors of the the other classes, do not use these
	//how to invoke with no objects?
	// we are going to attach :personType(first, last), address(add,cty,st,zip), birthdate(mon,day,year)	
	// 
	phoneNumber = pnumber;
	relationship = rship;
	//------------------------------------------
	/*
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
	*/
}
