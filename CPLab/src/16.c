/*Simple Calculator Using Switch-case*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This Program takes any two numbers and an operator.
 * And, performs operation based on the given Arithmetic Operator.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	char op;
	int a, b;
	printf("\nEnter any Two Numbers: ");
	scanf("%d%d", &a, &b);
	printf("\nEnter the Operator(+, -, *, /, %): ");
	scanf(" %c", &op);
	switch(op)
	{
		case '+':
			{
				printf("\n%d + %d = %d", a, b, a+b);
				break;
			}
		case '-':
			{
				printf("\n%d - %d = %d", a, b, a-b);
				break;
			}
		case '*':
			{
				printf("\n%d * %d = %d", a, b, a*b);
				break;
			}
		case '/':
			{
				printf("\n%d / %d = %.2f", a, b, (float)(a/b));
				break;
			}
		case '%':
			{
				printf("\n%d %% %d = %d", a, b, a%b);
				break;
			}
		default:
			{
				printf("\nInvalid Operator!");
			}
	}

	return 1;
}
