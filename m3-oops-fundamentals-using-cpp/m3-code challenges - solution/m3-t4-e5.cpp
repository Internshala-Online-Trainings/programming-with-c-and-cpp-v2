#include <iostream>
#include <string>
using namespace std;

class Dog {    // Defining class

    public:    // public section 
        string breed;
        int age;
        string color;
        string petName;

        void displayDetails();    // Method declaration 
};

void Dog :: displayDetails() {    // Method definition
    cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}


int main() {

    // Creating dog object 
    Dog dog1;
    dog1.breed = "Dalmatian";
    dog1.age = 7;
    dog1.color = "White-black";
    dog1.petName = "Jackie";
    dog1.displayDetails();

    // Creating dog object 
    Dog dog2;
    dog2.breed = "Beagle";
    dog2.age = 4;
    dog2.color = "Brown";
    dog2.petName = "Pluto";
    dog2.displayDetails();

    return 0;
}

