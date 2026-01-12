/*Reverse an Array*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes an array from the user and reverses, prints the array.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int a[50], i, n, b[50];
	printf("\nEnter the number of elements you want to enter: ");
	scanf("%d", &n);
	printf("\nEnter the Array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nThe Original Array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[n-1-i];
	}
	printf("\nTHe Reversed Array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ", b[i]);
	}

	return 1;
}
