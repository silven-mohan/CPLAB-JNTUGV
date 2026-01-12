/*Ackermann using Recursion*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program computes the Ackermann function using recursion.
*/

//Function Prototypes:
int ackermann(int m, int n);

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    int m, n;
    printf("Enter two non-negative integers (m and n): ");
    scanf("%d %d", &m, &n);
    printf("Ackermann(%d, %d) = %d\n", m, n, ackermann(m, n));
    
    return 1;
}

//Function Definitions:
//ackermann():
//This function computes the Ackermann function using recursion.
int ackermann(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if(m>0 && n == 0)
        return ackermann(m - 1, 1);
    else 
        return ackermann(m - 1, ackermann(m, n - 1));
}
        