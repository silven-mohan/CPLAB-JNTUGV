/*Max and Min of 1D Array*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This Program takes an 1D array.
 * And, finds out the max and min of the array.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int a[50], max, min, n, i;
	printf("\nEnter how many elements you want to enter: ");
	scanf("%d", &n);
	printf("\nEnter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	max=a[0], min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nThe Maximum and Minimum elements of the array are: %d, %d", max, min);

	return 1;
}
