/*Five Subject Marks*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes marks of five subject marks in integer.
 * Computes total and average in float.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int s1, s2, s3, s4, s5, total;
	float average;
	printf("\nEnter the Marks of the Five Subjects: ");
	scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
	total=s1+s2+s3+s4+s5;
	average=total/5.0;
	printf("\nThe Total Marks of the Subjects is: %d", total);
	printf("\nThe Average Marks of these Subjects is: %.2f", average);

	return 1;
}
