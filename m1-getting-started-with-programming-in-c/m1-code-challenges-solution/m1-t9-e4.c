#include <stdio.h>

int main() {

    // WAP to find out the grade of a student based on marks secured in the exam.
    // Code challenge solution

    char grade = 'X';
    int marks;
    puts("Please enter your marks: ");
    fflush(stdout);
    scanf("%d", &marks);

    if (marks >= 450 && marks <=500) {
        grade = 'A';
    } else if (marks >= 400 && marks < 450) {
        grade = 'B';
    } else if (marks >= 350 && marks < 400) {
        grade = 'C';
    } else if (marks >= 250 && marks < 350) {
        grade = 'D';
    } else if (marks >= 150 && marks < 250) {
        grade = 'E';
    } else if (marks >= 0 && marks < 150) {
        grade = 'F';
    } else {    // For negative value or a value greater than 500
        puts("Invalid input.");
    }

/* If the marks entered by the user is a valid mark between 0 and 500 then ‘grade’ would not be equal to ‘X’ i.e. he has been assigned a valid grade.  */
    if (grade != 'X')
        printf("\nYour grade is: %c", grade);

    return 0;
}
