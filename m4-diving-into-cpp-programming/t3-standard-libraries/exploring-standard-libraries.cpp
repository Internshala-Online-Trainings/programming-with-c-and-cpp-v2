/*
 Author:	Internshala
 Module:	Diving into C++ Programming
 Topic:		Standard Libraries
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;


int main() {

	/* WAP to roll a dice.*/

	int randomValue;

	srand(time(NULL));

	randomValue = (rand() % 6) + 1;		// 1, 2, 3, 4, 5, 6

	cout << "Rolling the dice...\n\n";
	usleep(2000000);

	cout << "You got: " << randomValue;

	return 0;
}
