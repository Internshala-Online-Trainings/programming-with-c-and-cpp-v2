#include "employee.h"	// <string>, <iostream>
using namespace std;


Employee :: Employee() {
	cout << "Employee object created\n";
}

Employee :: Employee(int id, string firstName, string lastName) {
	cout << "Employee object created\n";
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
}

void Employee :: displayDetails() {
	cout << "ID: " << id << endl << "Name: " << getFullName() << "\n\n";
}

string Employee :: getFullName() {
	return firstName + " " + lastName;
}
