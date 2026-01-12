/*Sum of series using Recursion*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program computes the sum of series using recursion.
*/

//Function Prototypes:
int sum_series(int n);	

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    int n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum = sum_series(n);
    printf("The sum of series up to %d terms is: %d\n", n, sum);
    
    return 1;
}

//Function Definitions:
//sum_series():
//This function computes the sum of series using recursion.
int sum_series(int n)
{
    if (n == 1)
        return 1;
    
        return n + sum_series(n - 1);
}