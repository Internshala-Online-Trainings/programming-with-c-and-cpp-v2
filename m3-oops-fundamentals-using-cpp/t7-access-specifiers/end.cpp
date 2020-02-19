/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Access Specifiers
*/

#include <iostream>
#include <string>
using namespace std;

class Person {

	protected:
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

class Student : public Person {

	public:
		int id;

		void displayStudentDetails() {
			cout << "Id: " << id << ", Name: " << fullName << ", Phone: " << phoneNumber << endl;
		}
};


int main() {

	Person person;
	person.fullName = "Rahul Kamal";
	person.setPhoneNumber("+91-943135522");
	person.displayPersonDetails();
//	string phone = person.phoneNumber; 	// protected: Cannot be accessed. Error. 
	
	Student student;
	student.id = 1;
	student.fullName = "Aditya Sharma";
	student.setPhoneNumber("+91-887700132");
	student.displayStudentDetails();
//	string phNo = student.phoneNumber;		// protected: cannot be accessed. Error. 

	return 0;
}
