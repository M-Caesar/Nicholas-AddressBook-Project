#include "addressType.h"
#include <iostream>
using namespace std;

void addressType::print() //must be defined in the .cpp file
{
	cout << address << endl;
	cout << city << ", " << state << " " << zipcode << endl;

}

//constructor

addressType::addressType(string newaddress, string newcity,string newstate,int newzipcode)
{
	address = newaddress;
	city = newcity;
	setState(newstate);
	setZipcode(newzipcode);
	//state = newstate;
	//zipcode = newzipcode;
}

	void addressType::setState(string newstate)
	{
		if (newstate.length() > 2)
		{
			state = "XX";
			cout << "State is invalid" << endl;
		}
		else
			state = newstate;
	}

	void addressType::setZipcode(int zip)
	{
		if (zip < 11111 || zip > 99999)
		{
			zipcode = 10000;
				cout << "Zipcode is invalid" << endl;
		}

		else
		zipcode = zip;
	}

	void addressType::setAddress(string newaddress)
	{
		address = newaddress;
	}

	void addressType::setCity(string newcity)
	{
		city = newcity;
	}


