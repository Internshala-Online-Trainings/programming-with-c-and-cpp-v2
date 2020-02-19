/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Migrating from C to C++
*/

#include <iostream>
using namespace std;


int main() {

	// Boolean values: true or false.
	bool isCodingFun = true;	// 1 means true and 0 means false.
	if (isCodingFun) {
		cout << "Let's code more.\n";
	} else {
		cout << "Find another job.\n";
	}

	int x = 9, y = 20;
	bool b1 = x > y;		// false
	bool b2 = x < y;		// true
	bool b3 = x == y;		// false
	cout << "b1: " << b1 << endl;
	cout << "b2: " << b2 << endl;
	cout << "b3: " << b3 << endl;

	cout << true + 7;		// 1 + 7 = 8

	return 0;
}
