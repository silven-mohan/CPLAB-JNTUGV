/*Dangling Pointer Demonstration*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program demonstrates dangling pointer.
*/

//Function Prototypes:
int *DPointer();

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    int *ptr = DPointer();	
    printf("Value at Dangling Pointer: %d\n", *ptr);	

    return 1;
}

//Function Definitions:
//DPointer():
//This function demonstrates dangling pointer.
int *DPointer()
{
    int a = 10;
    int *p = &a;
    	
    return p;	
}