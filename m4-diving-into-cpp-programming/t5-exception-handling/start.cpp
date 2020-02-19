/*
 Author:	Internshala
 Module:	Diving into C++ Programming
 Topic:		Exception Handling
*/

#include <iostream>
using namespace std;


int main() {

	// Divide two integers: a divided by b.
	cout << "Program starts -->" << endl << endl;

	int a, b;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	int result = a / b;
	cout << "Result: " << result << endl << endl;

	cout << "<-- Program ends" << endl;

	return 0;
}
