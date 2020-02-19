/*
 Author:	Internshala
 Module:	Diving into C++ Programming
 Topic:		Standard Libraries
*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {

	/* C++ <cmath> Header */

	int x = 4, y = 9;

	cout << "The greater number: " << fmax(x, y) << endl;		// 9
	cout << "The smaller number: " << fmin(x, y) << endl;		// 4
	cout << "The difference: " << fdim(y, x) << endl;			// 5

	cout << "2 to the power 4: " << pow(2, 4) << endl;	// 2 * 2 * 2 * 2 = 16

	cout << sqrt(64) << endl;		// 8
	cout << round(2.5) << endl;		// 3
	cout << round(2.4) << endl;		// 2
	cout << floor(4.9) << endl;		// 4
	cout << log(2) << endl;			// 0.693

	return 0;
}
