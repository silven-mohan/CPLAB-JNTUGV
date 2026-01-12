/*Matrix Multiplication*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes any two numbers from the user.
 * And, multiplies both the matrices and prints the matrix.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int a[10][10], b[10][10], c[10][10]={0}, i, j, k, m, n, p, q;
	printf("\nEnter order of the first matrix: ");
	scanf("%d%d", &m, &n);
	printf("\nEnter order of the second matrix: ");
	scanf("%d%d", &p, &q);
	if(n!=p)
	{
		printf("\nMatrix multiplication is not possible.");
		return 0;
	}
	printf("\nEnter the first matrix: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter the second matrix: \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	//Matrix Multiplication:
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<m;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	//Print the matrices:
	printf("\nThe first matrix is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe second matrix is: \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	printf("\nThe Multiplication of these matrices: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	return 1;
}
