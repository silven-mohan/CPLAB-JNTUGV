/*Electricity Bill*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This Program takes billed units from the users.
 * And, computes the total bill amount.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	float billed_units, rate, total;
	printf("\nEnter the Billed Units: ");
	scanf("%f", &billed_units);
	if(billed_units>=0 && billed_units<=100)
	{
		rate=3.75;
	}
	else if(billed_units>=101 && billed_units<=200)
	{
		rate=4.65;
	}
	else if(billed_units>=201 && billed_units<=300)
	{
		rate=6.85;
	}
	else if(billed_units>=301)
	{
		rate=9.45;
	}
	else
	{
		printf("\nInvalid Input");
	}
	total=billed_units*rate;
	printf("\nThe Total Amount is: %.4f", total);

	return 1;
}
