/*
 Author:	Internshala
 Module:	Diving into C++ Programming
 Topic:		Debugging
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

	try {
		if (b == 0) {
			throw "The value of 'b' must not be 0. Please try again.";
		}

		int result = a / b;
		cout << "Result: " << result << endl << endl;
	} catch (const char *msg) {
		cout << msg << endl << endl;
	}

	cout << "<-- Program ends" << endl;

	return 0;
}
