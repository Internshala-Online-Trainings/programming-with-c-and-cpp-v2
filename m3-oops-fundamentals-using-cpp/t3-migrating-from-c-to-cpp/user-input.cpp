/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Migrating from C to C++
*/

#include <iostream>
#include <string>
using namespace std;


int main() {

	string name;
	char size;
	int personItServes;
	float retailPrice;

	cout << "Enter pizza name: ";
	getline(cin, name);

	cout << "Enter the size of the pizza as either 'S', 'M' or 'L': ";
	cin >> size;

	cout << "Enter the number of persons it serves: ";
	cin >> personItServes;

	cout << "Enter retail price: ";
	cin >> retailPrice;

	// Yay! You have ordered a Farm House pizza of size M that serves 2.
	// Please pay Rs. 368.8 to the delivery person.

	cout << "Yay! You have ordered a " << name << " pizza of size " << size << " that "
			"serves " << personItServes << ".\nPlease pay Rs. " << retailPrice << " to the delivery person.";

	return 0;
}
