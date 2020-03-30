/*
 Author:	Internshala 
 Module:	Building Cricket Game Application 
 Topic:		Getting Started 
*/

#include <iostream>
#include <string>
using namespace std;

class Employee {

	public:					
		int id;				
		string firstName;	
		string lastName;	

		Employee();			
		Employee(int, string, string);	

		string getFullName() {	
			return firstName + " " + lastName;
		}

		void displayDetails();	
};

Employee :: Employee(int id, string firstName, string lastName) {
	cout << "Employee object created\n";
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
}

Employee :: Employee() {
	cout << "Employee object created\n";
}

void Employee :: displayDetails() { 
	cout << "ID: " << id << endl << "Name: " << getFullName() << "\n\n";
}


int main() {

	// Create an object of Employee class
	Employee emp1(1, "Rahul", "Sharma");

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
