/*Prime or not*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This Program takes any number from the user.
 * And, checks whether the given number is prime or not.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int i, n;
	printf("\nEnter any Number: ");
	scanf("%d", &n);
	if(n<2)
	{
		printf("%d is not a Prime Number", n);
		return 0;
	}
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("%d is not a Prime Number", n);
			return 0;
		}
	}
	printf("\n%d is a Prime Number.", n);

	return 1;
}
