/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Abstract Class
*/

#include <iostream>
#include <new>
using namespace std;

class Animal {		// Abstract class

	public:
		virtual void sound() = 0;		// Pure virtual function

		virtual void sleep() {
			cout << "Animal class: sleeping" << endl;
		}
};

class Dog : public Animal {		// Concrete class

	public:
		virtual void sound() {
			cout << "Dog class: bow-bow" << endl;
		}

		virtual void sleep() {
			cout << "Dog class: sleeping" << endl;
		}
};


int main() {

//	Animal a;	 // a --> Animal object	 // Error. Cannot create an object of an abstract class. 
	
	Dog dog;		// dog --> Dog object
	dog.sound();
	dog.sleep();

	Animal *animal = new Dog();		// animal --> Dog object
	animal->sound();
	animal->sleep();

	return 0;
}
