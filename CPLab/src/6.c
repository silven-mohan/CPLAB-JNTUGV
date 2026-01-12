/*Simple Interest*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program calculates the Simple Interest.
 * This takes Principal Amount, Rate of Interest, Time Period as inputs from the user.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	float p, r, t, si;
	printf("\nEnter the Principal Amount: ");
	scanf("%f", &p);
	printf("\nEnter the Rate of Interest: ");
	scanf("%f", &r);
	printf("\nEnter the Time Period (in years): ");
	scanf("%f", &t);
	si=p*r*t/100.0;
	printf("\nThe Simple Interest is: %.2f", si);

	return 1;
}
