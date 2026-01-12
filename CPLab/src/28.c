/*Addition of Two Matrices*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes two matrices from the user.
 * And, adds these matrices and prints the resultant matrix.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2, i, j;
	printf("\nEnter the order of the first matrix: ");
	scanf("%d%d", &r1, &c1);
	printf("\nEnter the order of the second matrix: ");
	scanf("%d%d", &r2, &c2);
	if(r1!=r2 || c1!=c2)
	{
		printf("\nAddition is not possible");
		return 0;
	}
	printf("\nEnter the first matrix: ");

	//Reading First Matrix:
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	//Reading Second Matrix:
	printf("\nEnter the second matrix: ");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	//Adding Both Matrices:
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j] + b[i][j];
		}
	}

	//Print the all the matrices:
	printf("\n\nThe first matrix is: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n\nThe second matrix is: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	printf("\n\nThe Addition of these two matrices is: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	return 1;

}
