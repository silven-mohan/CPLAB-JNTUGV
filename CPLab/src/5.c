/*Fahrenheit to Celsius and vice versa*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program converts temperature in Fahrenheit to Celsius and vice versa.
 * The inputs are taken from the user through scanf().
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	float c, f;
	printf("\nEnter the temperature in Fahrenheit: ");
	scanf("%f", &f);
	c=5/9.0*(f-32);
	printf("\n%.2f F = %.2f C", f, c);
	printf("\n\nEnter the temperature in Celsius: ");
	scanf("%f", &c);
	f=9/5.0*(c)+32;
	printf("\n%.2f C = %.2f F", c, f);

	return 1;	
}
