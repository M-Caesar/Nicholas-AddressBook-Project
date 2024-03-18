#pragma once
#include "personType.h"
#include "addressType.h"
#include "dateType.h"
#include "linkedList (1).h"
#include "orderedLinkedList.h"
#include <iostream>
//using namespace std;
class extPersonType :
    public personType
{
    //template<class Type>
    //friend ostream& operator<<(ostream&, const extPersonType&);
private:
    addressType address;
    dateType birthdate;
    string phoneNumber;
    string relationship;
public:
    //friend ostream& operator<<(ostream&, const extPersonType&);
    //friend ostream& operator<<(ostream&, const extPersonType&);
    //Setters
    //Precondition: Function is provided with phone number to be entered into memory
    //Postcondition: Function has successfully assigned values.
    void setPhoneNumber(string pnumber);
    //Precondition: Function is provided with relationship value. Value must be one of three relationship types that are Family, Friend and Business.
    // If value is not one of these 3 types, it will not be accepted and the default value will be set instead
    //Postcondition: Function has successfully assigned values if valid, and assigned default value if not.
    void setRelationship(string rship);

    //Getters
    string getPhoneNumber() { return phoneNumber;}
    string getAddress() { return address.getAddress(); }
    string getCity() { return address.getCity(); }
    string getState() { return address.getState(); }
    int getZip() { return address.getZipcode(); }
    string getRelationship() { return relationship; }
    int getBirthMonth() { return birthdate.getMonth(); } 
    int getBirthDay() { return birthdate.getDay(); }
    int getBirthYear() { return birthdate.getYear(); }

    //Print function for extPersonType
    //Precondition: print functions for addressType, dateType and personType are all functional and are called in this function
    //Postcondition: All stored information is printed correctly
    void print();

    /*Overload of the == operator
    * Precondition: None
    * Postcondition: None */
    bool operator==(extPersonType othereq);
    /*Overload of the != operator
    * Precondition: None
    * Postcondition: None */
    bool operator!=(extPersonType othernot);
    /*Overload of the >= operator
    * Precondition: None
    * Postcondition: None */
    bool operator>=(extPersonType otherless);
   // friend ostream& operator<<(ostream&, const extPersonType&);

    //Constructor
    //Precondition: Contructor for extPersonType. Accepts client arguments and passes them to appropriate constructors in other classes 
    //Postcondition: Arguments are passed to constructors of other classes as appropriate, they are determined as valid as applicable, and then stored.
    //will store default values if no value is passed or value is invalid.
    extPersonType(string = "", string = "", int = 1, int = 1, int = 1900, string = "", string = "", string = "XX", int = 10000, string = "None", string = "None");
};

