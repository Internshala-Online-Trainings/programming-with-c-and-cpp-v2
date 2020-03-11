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
};

void display(Employee);		// Function declaration 

void display(Employee emp) {	// Function definition 
	cout << "Employee name: " << emp.name << ", Phone: " << emp.phNo << endl;
}


int main() {

	Employee employee;
	employee.setPhoneNumber("+91-8093");
	employee.name = "Rishi Raj";

	display(employee);

	return 0;
}
