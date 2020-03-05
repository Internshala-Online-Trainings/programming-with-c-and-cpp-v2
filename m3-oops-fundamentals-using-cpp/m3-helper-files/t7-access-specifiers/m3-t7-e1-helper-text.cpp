#include <iostream>
using namespace std;

class Circle {

	public:		// Access Specifier
		float radius;

		double getArea() {
			return 3.14 * radius * radius;
		}
};


int main() {

	Circle circle;
	circle.radius = 5;
	double area = circle.getArea();
	cout << "Area of the circle is " << area << " square units." << endl;

	return 0;
}
