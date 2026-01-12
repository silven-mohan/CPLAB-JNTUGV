/*Factorial using Recursion*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program calculates the factorial of a number using recursion.
*/

//Function Prototypes:
int factorial(int n);

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, factorial(n));

    return 1;
}

//Function Definitions:
//factorial():
//This function calculates the factorial of a number using recursion.
int factorial(int n)
{
    if (n == 0 || n == 1) 
        return 1;

    return n * factorial(n - 1); 
}