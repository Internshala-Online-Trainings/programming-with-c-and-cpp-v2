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

        friend void display(Employee); // Friend function declaration was required
};    // Semi-colon was missing from class definition 

void display(Employee emp) { 
    cout << "Employee name: " << emp.name << ", Phone: " << emp.phNo << endl;
}


int main() {

    Employee employee;
    employee.setPhoneNumber("+91-809362221");
    employee.name = "Rishi Raj";

    display(employee);

    return 0;
}


/* Explanation 
While running the faulty program, at the compilation stage the program execution will stop. Under the problems tab or console tab, you will get two noticeable errors.
Error: expected ';' after class
Solution: A class definition requires a semi-colon at the end. 
Error: 'phNo' is a private member of 'Employee'
Solution: You cannot access a private member of a class inside a function which is defined outside the class. So you must declare that function as a friend function within the class under the public section. 
*/

