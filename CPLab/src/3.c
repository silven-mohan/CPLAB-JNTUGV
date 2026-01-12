/*Simple Program Using printf(), scanf()*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes any number from the user using scanf(), and prints the entered the number using printf().
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	int a;
	printf("\nEnter any number: ");
	scanf("%d", &a);
	printf("\n\nYou've entered the number: %d", a);

	return 1;
}
