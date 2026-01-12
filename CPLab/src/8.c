/*Compound Interest*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program computes and prints the Compound Interest.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<math.h>	//For pow(),...

//Main Function:
int main()
{
	float p, r, n, ci;
	printf("\nEnter the Principal Amount: ");
	scanf("%f", &p);
	printf("\nEnter the Rate of Interest: ");
	scanf("%f", &r);
	printf("\nEnter the Time Period (in years): ");
	scanf("%f", &n);
	ci=p * (pow((1+r/100), n)) - p;
	printf("\n\nThe Compound Interest: %.2f", ci);

	return 1;
}	
