/*Square Root of a Number*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program computes and prints the square root of a number using the function sqrt() defined in the header file <math.h>.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<math.h>	//For sqrt(),..

//Main Function:
int main()
{
	double n;
	printf("\nEnter any number: ");
	scanf("%lf", &n);
	printf("\nThe Square root of %.2lf is: %.2lf", n, sqrt(n));

	return 1;
}
