/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Friend Class and Friend Function
*/

#include <iostream>
#include <string>
using namespace std;

class Employee {

	private:
		string phNo;

	public:
		string name;

		void setPhoneNumber(string phoneNumber) {
			this->phNo = phoneNumber;
		}

		friend class Car;
};

class Car {			// Friend class of class Employee

	public:
		string carName;

		void display(Employee emp) {
			cout << "Employee name: " << emp.name << ", Phone: " << emp.phNo << ", Car name: " << carName << endl;
		}
};


int main() {

	Employee employee;
	employee.setPhoneNumber("+91-809362221");
	employee.name = "Rishi Raj";

	Car car;
	car.carName = "Ferrari 488";
	car.display(employee);

	return 0;
}
