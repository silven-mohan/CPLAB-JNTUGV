/*Swapping of Two numbers using Call by Reference*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program swaps two numbers using call by reference.
*/

//Function Prototypes:
void swap(int *a, int *b);	

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    int a, b;
    printf("Enter two numbers to be swapped: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After Swapping: a = %d, b = %d\n", a, b);

    return 1;
}

//Function Definitions:
//swap():
//This function swaps two numbers using call by reference.
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}