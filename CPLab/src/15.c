/*Quadratic Roots*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes the coefficients of the Quadratic Equation.
 * And, computes the roots of the equation.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<math.h>	//For sqrt(),...

//Main Function:
int main()
{
	float a, b, c, r1, r2, d;
	printf("\nEnter the Coefficients of the Quadratic Equation(a, b, c): ");
	scanf("%f%f%f", &a, &b, &c);
	d=b*b-4*a*c;
	if(d>0)
	{
		r1=-b+sqrt(d)/(2*a);
		r2=-b-sqrt(d)/(2*a);
		printf("\nnThe Real and Distinct Roots of the Quadratic Equation are: %.2f, %.2f", r1, r2);
	}
	else if(d==0)
	{
		r1=-b/(2*a);
		printf("\nThe Real and Equal Roots of the Quadratic Equation are: %.2f, %.2f", r1, r1);
	}
	else
	{
		printf("\nThe Roots are Imaginary");
	}

	return 1;
}
