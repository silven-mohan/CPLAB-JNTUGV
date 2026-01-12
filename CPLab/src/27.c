/*Eliminate Duplicate Elements of the Array*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes an array and eliminates the duplicate eliminates them.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int a[50], i, j, k, n;
	printf("\nEnter how number of elements you want to enter: ");
	scanf("%d", &n);
	printf("\nEnter the Array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nThe Original Array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	printf("\nThe New Array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}

	return 1;
}
