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

        Dog();    // Default constructor declaration 
};

Dog :: Dog() {        // Default constructor definition 
    cout << "Dog object created\n";
}

void Dog :: displayDetails() {
    cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}


int main() {

    Dog dog1;
    dog1.breed = "Dalmatian";
    dog1.age = 7;
    dog1.color = "White-black";
    dog1.petName = "Jackie";
    dog1.displayDetails();

    Dog dog2;
    dog2.breed = "Beagle";
    dog2.age = 4;
    dog2.color = "Brown";
    dog2.petName = "Pluto";
    dog2.displayDetails();

    return 0;
}

