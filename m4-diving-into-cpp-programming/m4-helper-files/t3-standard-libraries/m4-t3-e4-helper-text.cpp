#include <iostream>
using namespace std;


int main() {

	/* C++ <vector> Header
	   Vectors are similar to arrays, but it can change its size. */
	
	vector<string> names;
	names.push_back("Rahul");		// Adds element at the end
	names.push_back("Peter");
	names.push_back("Ravi");

	// Check the size.
	cout << "Size: " << names.size() << endl;		// 3

	// Accessing an element.
	cout << "Element at index 0: " << names[0] << endl;		// Rahul

	// Remove element from the end.
	names.pop_back();		// Removes "Ravi"
	cout << "Size: " << names.size() << endl;		// 2

	// Modify element.
	names[0] = "Aditya";
	cout << "Element at index 0: " << names[0] << endl;		// Aditya

	return 0;
}
