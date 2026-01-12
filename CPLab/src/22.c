/*Pyramid of Numbers*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes the no. of rows and prints a number pyramind upto that limit.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int n, i, j;
	printf("\nEnter any Number: ");
	scanf("%d", &n);
	if(n<0)
	{
		printf("\nInvalid Number");
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=40-i;j>0;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	return 1;
}
