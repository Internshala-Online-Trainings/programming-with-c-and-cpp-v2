/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		User Defined Data Types
*/

#include <stdio.h>
#include <string.h>


union Employee {

	int id;			// 2 Bytes
	char name[20];	// 20 Bytes
	float salary;	// 4 Bytes
					// Memory occupied = 20 Bytes
};

int main() {

	/* WAP to store details of multiple employees. */
	union Employee e1, e2;

	puts("Employee details: ");

	e1.id = 1;
	printf(" Employee ID: %d \n", e1.id);

	strcpy(e1.name, "Peter");
	printf(" Name: %s \n", e1.name);

	e1.salary = 23000;
	printf(" Salary: Rs. %0.2f\n\n", e1.salary);

	puts("Employee details: ");

	e2.id = 2;
	printf(" Employee ID: %d \n", e2.id);

	strcpy(e2.name, "Adam");
	printf(" Name: %s \n", e2.name);

	e2.salary = 40000;
	printf(" Salary: Rs. %0.2f\n\n", e2.salary);

	return 0;
}
