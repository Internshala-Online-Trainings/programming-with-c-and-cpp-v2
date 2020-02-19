/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Access Specifiers
*/

#include <iostream>
using namespace std;

class Circle {

	private:		// Access Specifier
		float radius;

	public:
		void setRadius(float radius) {
			this->radius = radius;
		}

		double getArea() {
			return 3.14 * radius * radius;
		}
};


int main() {

	Circle circle;
	circle.setRadius(5);
	double area = circle.getArea();
	cout << "Area of the circle is " << area << " square units." << endl;

	return 0;
}
