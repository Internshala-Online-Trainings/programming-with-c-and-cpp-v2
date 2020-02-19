/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Inheritance
*/

#include <iostream>
#include <string>
using namespace std;

class Animal {

	public:
		int age;
		string color;

		void run() {
			cout << "Running" << endl;
		}
};

class Dog : public Animal {

	public:
		string petName;

		void bark() {
			cout << "Barking" << endl;
		}
};

class Lion : public Animal {

	public:
		void roar() {
			cout << "Roaring" << endl;
		}
};


int main() {

	Dog dog;
	dog.age = 5;
	dog.color = "Black";
	dog.petName = "Jackie";
	dog.bark();
	dog.run();

	Lion lion;
	lion.age = 10;
	lion.color = "Brown";
	lion.roar();
	lion.run();

	Animal animal;
	animal.age = 7;
	animal.color = "White";
	animal.run();

	return 0;
}
