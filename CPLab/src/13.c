/*Max and Min of Four Numbers using if-else*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This Program takes any four numbers from the user.
 * Finds the Maximum and Minimum of the four numbers using if-else.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int a, b, c, d, max, min;
	printf("\nEnter any Four Numbers: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(a>b && a>c && a>d)
	{
		max=a;
	}
	else
	{
		if(b>c && b>d)
		{
			max=b;
		}
		else
		{
			if(c>d)
			{
				max=c;
			}
			else
			{
				max=d;
			}
		}
	}
	if(a<b && a<c && a<d)
	{
		min=a;
	}
	else
	{
		if(b<c && b<d)
		{
			min=b;
		}
		else
		{
			if(c<d)
			{
				min=c;
			}
			else
			{
				min=d;
			}
		}
	}
	printf("\n\nThe Maximum and Minimum of the four numbers is: %d and %d", max, min);

	return 1;
}
