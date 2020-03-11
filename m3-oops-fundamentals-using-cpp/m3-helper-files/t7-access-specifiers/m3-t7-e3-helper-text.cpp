#include <iostream>
#include <string>
using namespace std;

class Person {

	private:
		string phoneNumber;

	public:
		string fullName;

		void setPhoneNumber(string phoneNumber) {
			this->phoneNumber = phoneNumber;
		}

		void displayPersonDetails() {
			cout << "Name: " << fullName << ", Phone: " << phoneNumber << endl;
		}
};

int main() {

	Person person; 
	person.fullName = "Rahul Kamal"; 
	person.setPhoneNumber("+91-9431");	
	person.displayPersonDetails(); 

	return 0;
}
