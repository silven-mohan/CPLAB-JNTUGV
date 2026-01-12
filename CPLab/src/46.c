/*Fibbonacci Series using Recursion*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program prints the Fibonacci series up to n terms using recursion.
*/

//Function Prototype:
int fib(int n);

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    int n, i;
    printf("Enter the number of terms you want in Fibonacci Series: ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    return 1;
}

//Function Definition:
//fib():
//This function returns the nth term of the Fibonacci series using recursion.
int fib(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}