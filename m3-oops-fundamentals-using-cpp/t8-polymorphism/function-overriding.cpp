/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Polymorphism
*/

#include <iostream>
using namespace std;

class Animal {

	public:
		void sound() {
			cout << "Animal class: making sound" << endl;
		}

		void sleep() {
			cout << "Animal class: sleeping" << endl;
		}
};

class Dog : public Animal {

	public:
		void sound() {
			cout << "Dog class: bow-bow" << endl;
		}

		void sleep() {
			cout << "Dog class: sleeping" << endl;
		}
};


int main() {

	Animal animal;
	animal.sound();
	animal.sleep();

	Dog dog;
	dog.sound();
	dog.sleep();

	return 0;
}
