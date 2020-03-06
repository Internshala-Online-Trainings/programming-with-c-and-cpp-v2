#include <stdio.h>


enum Month {

    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {

    enum Month month;

    month = JUL;

    switch (month) {

        case 1:
            puts("January");
        break;

        case 2:
            puts("February");
        break;

        case 3:
            puts("March");
        break;

        case 4:
            puts("April");
        break;

        case 5:
            puts("May");
        break;

        case 6:
            puts("June");
        break;

        case 7:
            puts("July");
        break;

        case 8:
            puts("August");
        break;

        case 9:
            puts("September");
        break;

        case 10:
            puts("October");
        break;

        case 11:
            puts("November");
        break;

        case 12:
            puts("December");
        break;
    }

    return 0;
}

