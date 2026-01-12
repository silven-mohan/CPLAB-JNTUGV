/*sin and cos series*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This Program takes the angle(in degrees), number of terms from the user.
 * And, computes sin (or) cos value using Taylor's Series.
*/
//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int ch, n, i;
	float x, term, sum;
	printf("\nEnter x (in degrees): ");
	scanf("%f", &x);
	printf("\nEnter the Number of terms: ");
	scanf("%d", &n);
	x*=3.14/180;
	printf("\nChoose one:\n1. sin(x)\n2. cos(x) :");
	scanf("%d", &ch);
	if(ch==1)
	{
		term = x;
		sum = term;
		for(i=1;i<n;i++)
		{
			term = -term * x * x/((2*i) * (2*i+1));
			sum+=term;
		}
		printf("\n\nsin(%.2f) = %.2f", x, sum);
	}
	else if(ch==2)
	{
		term = 1;
		sum = term;
		for(i=1;i<n;i++)
		{
			term = -term * x * x/((2*i) * (2*i-1));
			sum+=term;
		}
		printf("\n\ncos(%.2f) = %.2f", x, sum);
	}
	else
	{
		printf("\nInvalid Option");
	}

	return 1;
}
