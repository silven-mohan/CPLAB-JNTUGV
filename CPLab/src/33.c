/*Sum of 1D array elements using malloc()*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program calculates the sum of elements in a 1D array using dynamic memory allocation with malloc().
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<stdlib.h>	//For malloc() and free() functions.

//Main Function:
int main()
{
    int *a, n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int)); //Dynamic Memory Allocation.
    if(a == NULL) //Checking if memory allocation was successful.
    {
        printf("Memory allocation failed!\n");
        return 0; 
    }
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); 
        sum += a[i]; //Calculating sum.
    }
    printf("Sum of array elements: %d\n", sum);
    free(a); 

    return 1;
}