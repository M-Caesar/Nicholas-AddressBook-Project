// header files are the public face of your code, provide the user with what input that they are able to give you
#pragma once
#include <iostream>
using namespace std;

class addressType
{
private:
	string address = "";  // Inlining
	string city = "";
	string state = "XX";
	int zipcode = 10000;
public:

	//precondition - all variables are input and stored correctly, if not default values will be print
	//postcondition - correct address, city, state and zip code is printed.
	void print(); //prototype declaration of print

	//preconditions - address and city are supplied, supply state as a valiid postal abbreviation
	//					supply zipcode as a 5-digit integer > 10000
	// postcondition - use supplied values for address and city, validate state and zipcode
	addressType(string= "(Your address)", string ="(Your city)", string ="XX", int = 10000);

	//precondition - supplied value is a valid postal (2 character) state abbreeviation
	//postcondition - use the value supplied if valid, otherwise use the default ("XX")
	void setState(string newcity);

	//precondition - supplied value is a 5 digit integer > 11111 and <99999
	//postcondition - use the supplied value if valid, otherwise use the default (10000)
	void setZipcode(int newzipcode);

	//precondition - supplied value is a string for a new address
	//postcondition - use the supplied value and address string is updated 
	void setAddress(string newaddress);

	//precondition - supplied value is a string for a new city
	//postcondition - use the supplied value and city string is updated
	void setCity(string newcity);

	//getters
	string getState() { return state; }
	int getZipcode() { return zipcode; }
	string getAddress() { return address; }
	string getCity() { return city; }


	
};

