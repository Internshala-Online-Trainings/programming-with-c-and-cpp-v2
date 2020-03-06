#include <fstream>
#include <iostream>
using namespace std;


int main() {

    // Part 1: Write on a file.
    ofstream oFile;
    oFile.open("my-bio.txt");

    string name;
    int age;

    // User input. 
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    oFile << "My name is " << name << ". \n";
    oFile << "I am " << age << " years old. \n";

    oFile.close();

    // Part 2: Read from a file.
    string str;

    ifstream iFile;
    iFile.open("my-bio.txt");

    cout << "\nReading data from the file: \n\n";

    while(!iFile.eof()) {
        getline(iFile, str);
        cout << str << endl;
    }

    iFile.close();

    return 0;
}

