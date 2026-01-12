/*Factorial Using Loops*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes any number from the user.
 * And, computes the factorial of the number using loops.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int fact=1, n, i;
	printf("\nEnter any Number: ");
	scanf("%d", &n);
	if(n<0)
	{
		printf("\nFactorial does not exist");
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("\nThe Factorial of the given number is: %d", fact);

	return 1;
}
