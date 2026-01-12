/*Numerical Integrations of differential equations using Euler's method*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program performs numerical integration of differential equations using Euler's method.
*/

//Function Prototypes:
int integrateEuler(double (*f)(double, double), double x0, double y0, double h, int n);

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    int n;
    double x0, y0, h, result;
    printf("Enter initial values (x0, y0), step size (h), and number of steps (n): ");
    scanf("%lf %lf %lf %d", &x0, &y0, &h, &n);
    result = integrateEuler(NULL, x0, y0, h, n); 
    printf("Approximate solution after %d steps: %lf\n", n, result);

    return 1;
}

//Function Definitions:
//integrateEuler(): 
//Performs numerical integration using Euler's method.
int integrateEuler(double (*f)(double, double), double x0, double y0, double h, int n)
{
    int i;
    double x = x0, y = y0;

    for(i = 0; i < n; i++)
    {
        //Using a sample differential equation dy/dx = x + y
        double dydx = x + y; 
        y = y + h * dydx;
        x = x + h;
    }

    return y;
}