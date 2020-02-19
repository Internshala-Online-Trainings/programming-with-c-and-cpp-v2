/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		User Defined Data Types
*/

#include <stdio.h>
#include <string.h>


struct Employee {

	int id;
	char name[20];
	float salary;
};

int main() {

	/* WAP to store details of an employee. */
	struct Employee e1, e2;
	e1.id = 1;
	strcpy(e1.name, "Peter");
	e1.salary = 23000;

	printf("Employee details: \n Employee ID: %d \n Name: %s \n Salary: Rs. %0.2f\n\n", e1.id, e1.name, e1.salary);

	e2.id = 2;
	strcpy(e2.name, "Adam");
	e2.salary = 40000;

	printf("Employee details: \n Employee ID: %d \n Name: %s \n Salary: Rs. %0.2f\n\n", e2.id, e2.name, e2.salary);

	return 0;
}
