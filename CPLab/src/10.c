/*Distance travelled by an object*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes speed and time of an object, computes the distance travelled by the object.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	float d, s, t;
	printf("\nEnter the Speed of the object: ");
	scanf("%f", &s);
	printf("\nEnter the time taken: ");
	scanf("%f", &t);
	d=s*t;
	printf("\n\nThe Distance travelled by the object: %.2f", d);

	return 1;
}
