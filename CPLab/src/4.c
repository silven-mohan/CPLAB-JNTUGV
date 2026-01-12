/*Sum and Average of Three Numbers*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes any three numbers from the user using scanf().
 * And, computes, prints, the sum and average of the three numbers.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int a, b, c, sum;
	float average;
	printf("\nEnter any Three Numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	sum=a+b+c;
	average=sum/3;
	printf("\nThe Sum and Average of the Three Numbers is: %d, %.2f", sum, average);

	return 1;
}
