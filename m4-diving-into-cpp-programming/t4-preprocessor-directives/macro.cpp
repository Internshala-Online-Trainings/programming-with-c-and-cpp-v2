/*
 Author:	Internshala
 Module:	Diving into C++ Programming
 Topic:		Preprocessor Directives
*/

#include <iostream>
using namespace std;

#define UPPER_LIMIT 10		// Macro definition
#define AREA(r) (3.14 * r * r)	// Macro with parameter


int main() {

	// Find even numbers from 1 to 10.
	for (int i = 1; i <= UPPER_LIMIT; i++) {

		if (i % 2 == 0)
			cout << i << endl;
	}

	// Find the area of a circle.
	cout << "Area: " << AREA(5);		// 3.14 * 5 * 5

	return 0;
}
