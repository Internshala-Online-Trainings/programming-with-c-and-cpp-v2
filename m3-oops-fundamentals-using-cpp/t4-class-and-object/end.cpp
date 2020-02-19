/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Class and Object
*/

#include <iostream>
#include <string>
using namespace std;

class Employee {

	public:					// Access specifier
		int id;				// Attribute or data member
		string firstName;	// Attribute or data member
		string lastName;	// Attribute or data member

		string getFullName() {		// Method/function definition
			return firstName + " " + lastName;
		}

		void displayDetails();		// Method/function declaration
};

void Employee::displayDetails() {	// Method/function definition
	cout << "ID: " << id << endl << "Name: " << getFullName() << "\n\n";
}


int main() {

	// Create an object of Employee class
	Employee emp1;

	// Access attributes and set values
	emp1.id = 1;
	emp1.firstName = "Rahul";
	emp1.lastName = "Sharma";

	// Print attribute values
	emp1.displayDetails();

	// Another employee object
	Employee emp2;
	emp2.id = 2;
	emp2.firstName = "Yajat";
	emp2.lastName = "Agrawal";

	emp2.displayDetails();

	return 0;
}
