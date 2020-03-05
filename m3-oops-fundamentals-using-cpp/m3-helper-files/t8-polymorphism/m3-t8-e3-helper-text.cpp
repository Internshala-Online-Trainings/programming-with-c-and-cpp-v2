class Animal {

	public:
		void sound() {
			cout << "Animal class: making sound" << endl;
		}

		void sleep() {
			cout << "Animal class: sleeping" << endl;
		}
};

class Dog {

	public:
		void dogSound() {
			cout << "Dog class: bow-bow" << endl;
		}

		void dogSleep() {
			cout << "Dog class: sleeping" << endl;
		}
};


int main() {

	Animal animal;		
	animal.sound();
	animal.sleep();

	Dog dog;			
	dog.dogSound();
	dog.dogSleep();

	return 0;
}
