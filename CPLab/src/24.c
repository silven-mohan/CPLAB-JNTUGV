/*Linear Search*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes an array of elements from the user.
 * And, finds a specific element in that array.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int a[50], i, n, key;
	printf("\nEnter how many number of elements you want to enter: ");
	scanf("%d", &n);
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nEnter the key element: ");
	scanf("%d", &key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("%d is found at the array index %d", key, i+1);
			return 1;
		}
	}
	printf("\nThe element was not found in the array");

	return 0;
}
