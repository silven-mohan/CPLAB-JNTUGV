/*Area of Triangle Using Heron's Formula*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program computes the area of the triangle using heron's formula.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<math.h>	//For sqrt(),..

//Main Function:
int main()
{
	float a, b, c, s, area;
	printf("\nEnter the all three sides(a, b,c) of the triangle: ");
	scanf("%f%f%f", &a, &b, &c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nThe Area of the triangle is: %.2f", area);

	return 1;
}
