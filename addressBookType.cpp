#include "addressBookType.h"
#include "linkedList (1).h"

using namespace std;

//Function for creating linked list using .txt for entry input
void addressBookType::initEntry(string entry)
{
	ifstream inFile;
	string firstName, lastName;
	int month, day, year;
	string address, city, state;
	int zip;
	string phone, relation;



	inFile.open(entry);
	if (!inFile.is_open())
	{
		cout << "Could not open file, exit the program and try again" << endl;
	}

	int recCount = 0;
	while (inFile >> firstName)
	{
		//intaking the data
		inFile >> lastName >> month >> day >> year;
		inFile.ignore();
		getline(inFile, address);
		getline(inFile, city);
		inFile >> state >> zip >> phone >> relation;

		extPersonType tperson(firstName, lastName, month, day, year, address, city, state, zip, phone, relation);

		addEntry(tperson);

		recCount++;
	}
	cout << "Read " << recCount << " records" << endl;
}

//Function to add an extPersonType object to the linked list
void addressBookType::addEntry(extPersonType nentry)
{
	insertFirst(nentry);
}

//Function used to find a person using their first and last name
void addressBookType::findPerson(string person) const
{
	nodeType<extPersonType>* current = first;
	bool found = false;
	while (current != nullptr && !found)
	{
		if (current->info.getLastName() == person || current->info.getFirstName() == person)
		{
			found = true;
			current->info.print();
			current = current->link;
		}
		else
		{
			current = current->link;
		}
	}
}

//Function used to identify the extPersonType objects in the list based off the input Birth month
void addressBookType::findBirthday(int month) const
{
	nodeType<extPersonType>* current = first;
	bool found = false;
	while (current != nullptr)
	{
		if (current->info.getBirthMonth() == month)
		{
			//found = true;
			current->info.print();
			current = current->link;
		}
		else
		{
			current = current->link;
		}
	}
}

//Function used to identify extPersonType objects based off of relationship status and return the person from the list
void addressBookType::findRelations(string relationship) const
{
	nodeType<extPersonType>* current = first;
	bool found = false;
	while (current != nullptr && !found)
	{
		if (current->info.getRelationship() == relationship)
		{
			current->info.print();
			current = current->link;
		}
		else
		{
			current = current->link;
		}
	}
}

//Print function
void addressBookType::print() const
{
	nodeType<extPersonType> *current = first;
	while (current != nullptr)
	{
		current->info.print();
		current = current->link;
	}
}

//Function used to input a person into the linked list
void addressBookType::inputPerson()
{
	string firstName, lastName;
	int month, day, year;
	string address, city, state;
	int zip;
	string phone, relation;

	cout << "Taking input for new contact:" << endl;
	cout << "Please input first name" << endl;
	cin >> firstName;
	cout << "Please input last name" << endl;
	cin >> lastName;
	cout << "Please input their birth month, day and year" << endl;
	cin >> month >> day >> year;
	cout << "Please input address, then city, then state, then zip code" << endl;
	cin >> address >> city >> state >> zip;
	cout << "Please input phone number in form XXX-XXX-XXXX" << endl;
	cin >> phone;
	cout << "Please input relation to contact" << endl;
	cin >> relation;
	cout << "Creating new contact..." << endl;
	extPersonType tperson(firstName, lastName, month, day, year, address, city, state, zip, phone, relation);
	addEntry(tperson);
}

//Function used to remove a person from the linked list
void addressBookType::removePerson(string fname, string lname)
{
	extPersonType persontoRemove;
	nodeType<extPersonType>* current = first;
	while (current != nullptr)
	{
		if (current->info.getLastName() == lname && current->info.getFirstName() == fname)
		{
			persontoRemove = current->info;
			//deleteNode(current);
			//current = current->link;
			break;
		}
		current = current->link;
	}

	if (current != nullptr)
	{
		deleteNode(persontoRemove);
	}
}

//Function for saving linked list to .txt file
void addressBookType::saveFile(string filename)
{

	ofstream outFile(filename);
	extPersonType printPerson;
	int iter = 0;

	if (!outFile.is_open())
	{
		std::cerr << "Error: Unable to open file: " << filename << endl;
		return;
	}

	nodeType<extPersonType>* current = first;
	while (current != nullptr)
	{
		current->info.print();
		std::streambuf* cout_buf = std::cout.rdbuf();
		std::cout.rdbuf(outFile.rdbuf());
		current->info.print();
		std::cout.rdbuf(cout_buf);

		//outFile << "This is the Birth Month" << endl;
		//outFile << current->info.getBirthMonth();
		//outFile << 

		current = current->link;
		iter++;
	}
	outFile.close();
	return;
}