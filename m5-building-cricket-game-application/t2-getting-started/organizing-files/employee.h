#include <string>


class Employee {

	public:
		int id;
		std::string firstName;
		std::string lastName;

		Employee();
		Employee(int, std::string, std::string);

		std::string getFullName();
		void displayDetails();
};
