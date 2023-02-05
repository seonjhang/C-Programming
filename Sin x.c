#include<stdio.h>
#include<math.h> // for using advanced mathematics

int main(void) // main function
{
    double X, result; // creating variable for user input (X) & to store value of sin function (result)

    printf("please enter a number between 0 and 1 to calculate sine:");

    scanf_s("%lf", &X);

    result = sin(X);

    printf("The sine value of %lf is %lf", X, result); //to print output

    return 0;
}