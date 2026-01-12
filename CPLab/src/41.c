/*Copy of one structure variable to another*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program copies values from one structure variable to another structure variable of same type.
*/

//Global Declarations:
typedef struct s1
{
    int a;
    float b;
} s1;

typedef struct s2
{
    int x;
    float y;
} s2;

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    s1 obj1;
    s2 obj2;

    printf("Enter an integer and a float value for obj1:\n");
    scanf("%d %f", &obj1.a, &obj1.b);

    obj2.x = obj1.a;
    obj2.y = obj1.b;
    printf("Values in obj2:\nInteger: %d\nFloat: %.2f\n", obj2.x, obj2.y);

    return 1;
}