#include <iostream>
#include <cmath>
using namespace std;

void findSquareRoot(float n);


int main() {

    // Find the square root of 'n' entered by the user.
    cout << "Program starts -->" << endl << endl;

    float n;

    cout << "Enter n: ";
    cin >> n;

    findSquareRoot(n);

    cout << "<-- Program ends" << endl;

    return 0;
}

void findSquareRoot(float n) {

    try {
        if (n < 0) {
            throw "The value of 'n' must be greater than or equal to 0. Please try again.";
        }

        float result = sqrt(n);
        cout << "Result: " << result << endl << endl;
    } catch (const char *msg) {
        cout << msg << endl << endl;
    }
}
