/*Maximum using Conditional Operator*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes any three numbers from the user.
 * This finds the maximum of the three numbers using Conditional Operator.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int a, b, c;
	printf("\nEnter any three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("\nThe Maximum of the three numbers is: %d", (a>b && a>c)?a:((b>c)?b:c));

	return 1;
}
