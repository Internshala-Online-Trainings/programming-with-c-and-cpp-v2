/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Migrating from C to C++
*/

#include <iostream>
using namespace std;

void display(int, float, string message = "Welcome!");


int main() {

	// Functions: Default parameters
	display(2, 40.8, "Welcome! Hope you are doing great.");

	display(10, 7.8);

	return 0;
}

void display(int num1, float num2, string message) {

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "message: " << message << endl << endl;
}
