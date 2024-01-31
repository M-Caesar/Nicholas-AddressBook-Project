#pragma once
#include "personType.h"
#include "addressType.h"
#include "dateType.h"
#include <iostream>
//using namespace std;
class extPersonType :
    public personType
{
private:
    addressType address;
    dateType birthdate; //WHY NOT INT... found out, must use getter function
    string phoneNumber;
    string relationship;
public:
    void setPhoneNumber(string pnumber);
    void setRelationship(string rship);
    string getPhoneNumber() { return phoneNumber;}
    string getRelationship() { return relationship; }
    int getBirthMonth() { return birthdate.getMonth(); } //may need to create a function to extract month from birthdate
    void print();

    extPersonType(string = "", string = "", int = 1, int = 1, int = 1900, string = "", string = "", string = "XX", int = 10000, string = "None", string = "None");
};

