/*Palindrome or not*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This Program checks whether a given number is palindrome or not.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int n, n1, rev=0;
	printf("\nEnter any number: ");
	scanf("%d", &n);
	n1=n;
	while(n1!=0)
	{
		rev=(rev*10) + (n1%10);
		n1/=10;
	}
	if(n==rev)
	{
		printf("\n%d is a Palindrome.", n);
	}
	else
	{
		printf("\n%d is not a Palindrome.", n);
	}

	return 1;
}
