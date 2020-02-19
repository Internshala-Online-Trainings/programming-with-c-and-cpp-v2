/*
 Author:	Internshala
 Module:	Diving into C++ Programming
 Topic:		Preprocessor Directives
*/

#include <iostream>
using namespace std;


int main() {

	// Find even numbers from 1 to 10.
	for (int i = 1; i <= 10; i++) {

		if (i % 2 == 0)
			cout << i << endl;
	}

	// Find the area of a circle.
	cout << "Area: " << 3.14 * 5 * 5;

	return 0;
}
