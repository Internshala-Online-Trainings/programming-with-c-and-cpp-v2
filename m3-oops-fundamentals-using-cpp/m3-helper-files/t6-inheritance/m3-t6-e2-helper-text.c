#include <iostream>
#include <string>
using namespace std;

class Dog {

	public:
		int age;
		string color;
		string petName;

		void bark() {
			cout << "Barking" << endl;
		}

		void run() {
			cout << "Running" << endl;
		}
};

class Lion {

	public:
		int age;
		string color;
		
		void roar() {
			cout << "Roaring" << endl;
		}

		void run() {
			cout << "Running" << endl;
		}
};
