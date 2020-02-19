/*
 Author:	Internshala
 Module:	Diving into C++ Programming
 Topic:		Namespaces
*/

#include <iostream>
using namespace std;

namespace jp {

	float dollarValue = 108;	// 1 USD = 108 Japanese Yen

	double toDollars(float currencyUnits) {
		return currencyUnits / dollarValue;
	}
}

namespace cn {

	float dollarValue = 7;		// 1 USD = 7 Chinese Yuan

	double toDollars(float currencyUnits) {
		return currencyUnits / dollarValue;
	}
}


int main() {

	cout << "1 USD = " << jp::dollarValue << " Yen" << endl;
	cout << "1 USD = " << cn::dollarValue << " Yuan" << endl;

	cout << "8960 Yen = " << jp::toDollars(8960) << " USD" << endl;
	cout << "610 Yuan = " << cn::toDollars(610) << " USD" << endl;

	return 0;
}
