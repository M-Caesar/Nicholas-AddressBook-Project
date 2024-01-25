#include "addressType.h"
#include <iostream>
using namespace std;

//precondition - all variables are input and stored correctly, if not default values will be print
//postcondition - correct address, city, state and zip code is printed.
void addressType::print() //must be defined in the .cpp file
{
	cout << address << endl;
	cout << city << " " << state << ", " << zipcode << endl;

}

//constructor
//precondition - constructor for addressType. Accepts client arguments if valid, if not valid or not input, will produce default values for variable corresponding to argument
//postcondition - variables are correctly assigned in accordance with provided arguments
addressType::addressType(string newaddress, string newcity,string newstate,int newzipcode)
{
	address = newaddress;
	city = newcity;
	setState(newstate); //calling setter function for user input for a state
	setZipcode(newzipcode); //calling setter function for user input for a zipcode
	//state = newstate;
	//zipcode = newzipcode;
}

//setter function for setting state. Client provides 2 letter abbreviation for state
//if client provides string with more than 2 characters, the function will not accept input and return default value XX and error message
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

	//setter function for setting zipcode. Client provides valid 5 diget zipcode in the range of 11111 and 99999
	//if provided zipcode is outside of that range, function will not accept input and return default value of 10000 and error message
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

	//setter function for setting client input address

	void addressType::setAddress(string newaddress)
	{
		address = newaddress;
	}

	//setter function for setting client input city
	void addressType::setCity(string newcity)
	{
		city = newcity;
	}


