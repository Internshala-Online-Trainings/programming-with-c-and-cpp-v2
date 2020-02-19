/*
 Author:	Internshala
 Module:	Diving into C++ Programming
 Topic:		File Handling
*/

#include <fstream>
#include <iostream>
using namespace std;


int main() {

	// Create an ofstream (Output File Stream) object.
	ofstream oFile;

	// Create a file (if it doesn't exist) and open it.
	oFile.open("my-note.txt");

	// Write on the file.
	oFile << "Hi! \n";
	oFile << "I love to travel. \n";
	oFile << "I am " << 25 << " years old. \n";

	// Close the opened file.
	oFile.close();

	return 0;
}
