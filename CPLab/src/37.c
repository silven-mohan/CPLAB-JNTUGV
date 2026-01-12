/*Implementation of realloc()*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program demonstrates the use of realloc() to resize a dynamically allocated array and calculates the sum of all elements.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<stdlib.h>	//For Dynamic Memory Allocation functions.

//Main Function:
int main()
{
    int n, i, *a, sum=0, Nn;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    //Dynamic Memory Allocation using malloc():
    a = (int*)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("\nHow many more elements: ");
    scanf("%d", &Nn);
    a = (int*)realloc(a, Nn * sizeof(int)); //Reallocating memory to hold 2 more elements
    printf("Enter %d more elements:\n", Nn);
    for(i=0; i<Nn; i++)
    {
        scanf("%d", &a[i+n]);
        sum += a[i+n];
    }
    printf("Sum of all elements: %d\n", sum);
    free(a); 

    return 1;

}