/*LCM using Recursion*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program calculates the Least Common Multiple (LCM) of two numbers using recursion.
*/

//Function Prototypes:	
int LCM(int a, int b, int multiple);	

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    int a, b, lcm, start;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    start = (a > b) ? a : b;
    lcm = LCM(a, b, start);

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 1;
}

//Function Definitions:
//lcm():
//This function returns the LCM of two numbers using recursion.
int LCM(int a, int b, int multiple)
{
    if(multiple%a==0 && multiple%b==0)
        return multiple;

    return LCM(a, b, multiple+1);
}   