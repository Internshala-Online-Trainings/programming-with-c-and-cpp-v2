#include <iostream>
#include <string>
using namespace std;


int main() {

    string name = "India";
    char dollar = '$';
    float gdp = 2.2;
    int year = 2015;

    cout << "Enter country name:";
    getline(cin, name);

    cout << "Enter dollar symbol:";
    cin >> dollar;

    cout << "Enter GDP:";
    cin >> gdp;

    cout << "Enter year:";
    cin >> year;

    cout << "As economic reforms picked up the pace, " << name << "'s GDP grew five-fold to reach US" << dollar << gdp <<" trillion in " << year << " (as per IMF estimates).";

    return 0;
}

