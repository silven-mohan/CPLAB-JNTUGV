/*Leap Year or not*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program checks whether a year is a Leap Year or not.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int year;
	printf("\nEnter the year: ");
	scanf("%d", &year);
	if((year%4==0 && year%100!=0) || (year%400==0))
	{
		printf("\n%d is a Leap Year.", year);
	}
	else
	{
		printf("\n%d is not a Leap Year.", year);
	}

	return 1;
}
