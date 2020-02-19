/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Migrating from C to C++
*/

#include <iostream>
#include <string>
using namespace std;


int main() {

	string name = "Farm House";
	char size = 'M';
	int personItServes = 2;
	float retailPrice = 365.8;

	cout << name << "\n";
	cout << size << endl;
	cout << personItServes << endl;
	cout << retailPrice << endl;

	// Yay! You have ordered a Farm House pizza of size M that serves 2.
	// Please pay Rs. 368.8 to the delivery person.

	cout << "Yay! You have ordered a " << name << " pizza of size " << size << " that "
			"serves " << personItServes << ".\nPlease pay Rs. " << retailPrice << " to the delivery person.";

	return 0;
}
