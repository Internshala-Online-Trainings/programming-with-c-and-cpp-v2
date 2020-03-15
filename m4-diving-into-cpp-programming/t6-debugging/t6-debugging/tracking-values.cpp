/*
 Author:	Internshala
 Module:	Diving into C++ Programming
 Topic:		Debugging
*/

#include <iostream>
using namespace std;


int main() {

	cout << "Program starts -->" << endl << endl;

	float si;
	int p = 100;
	float r = 5.7;
	int t = 1;

	si = (p * r * t) / 100;

	cout << "Simple interest: " << si << endl << endl;

	cout << "<-- Program ends" << endl;

	return 0;
}
