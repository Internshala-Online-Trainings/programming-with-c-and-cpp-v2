#include <iostream>
#include <new>
using namespace std;

class Animal {

	public:
		virtual void sound() {
			cout << "Animal class: making sound" << endl;
		}

		virtual void sleep() {
			cout << "Animal class: sleeping" << endl;
		}
};

class Dog : public Animal {

	public:
		virtual void sound() {
			cout << "Dog class: bow-bow" << endl;
		}

		virtual void sleep() {
			cout << "Dog class: sleeping" << endl;
		}
};


int main() {

	Dog dog;		// dog --> Dog object
	dog.sound();
	dog.sleep();

	Animal *animal = new Dog();		// animal --> Dog object
	animal->sound();
	animal->sleep();

	return 0;
}
