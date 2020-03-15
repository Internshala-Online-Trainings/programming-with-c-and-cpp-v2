#include <iostream>
using namespace std;

float calculateSI(float, float, int);


int main() {

	cout << "Program starts -->" << endl << endl;

	float si1 = calculateSI(100, 10, 2);
	cout << "Simple interest: " << si1 << endl << endl;

	float si2 = calculateSI(1000, 5, 2);
	cout << "Simple interest: " << si2 << endl << endl;

	cout << "<-- Program ends" << endl;

	return 0;
}

float calculateSI(float principal, float rateOfInterest, int time) {

	float si = (principal * rateOfInterest * time) / 100;

	return si;
}
