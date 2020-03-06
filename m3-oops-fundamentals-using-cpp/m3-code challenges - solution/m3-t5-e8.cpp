#include <iostream>
#include <string>
using namespace std;

class Dog {

    public:
        string breed;
        int age;
        string color;
        string petName;

        void displayDetails();

        Dog();
        Dog(int, string, string, string);
        ~Dog();    // Destructor declaration 
};

Dog :: Dog() {
    cout << "Dog object created\n";
}

Dog :: Dog(int age, string breed, string color, string petName) {
    this->age = age;
    this->breed = breed;
    this->color = color;
    this->petName = petName;
}

Dog :: ~Dog() {    // Destructor definition 
    cout << this->petName << ": Dog object deleted\n";
}

void Dog :: displayDetails() {
    cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}


int main() {

    Dog dog1(7, "Dalmatian", "White-black", "Jackie");
    dog1.displayDetails();

    Dog dog2(4, "Beagle", "Brown", "Pluto");
    dog2.displayDetails();

    return 0;
}

