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
};


int main() {

	// Create an object of Employee class
	Employee emp1;

	// Access attributes and set values
	emp1.id = 1;
	emp1.firstName = "Rahul";
	emp1.lastName = "Sharma";

	// Print attribute values
	cout << "ID: " << emp1.id << endl << "Name: " << emp1.firstName << " " << emp1.lastName  << "\n\n";

	// Another employee object
	Employee emp2;
	emp2.id = 2;
	emp2.firstName = "Yajat";
	emp2.lastName = "Agrawal";

	cout << "ID: " << emp2.id << endl << "Name: " << emp2.firstName << " " << emp2.lastName  << "\n\n";

	return 0;
}
