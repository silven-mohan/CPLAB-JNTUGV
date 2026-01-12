/*Bubble Sort*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes any unsorted array of elements.
 * Sorts them using Bubble sort and prints the array.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    int a[50], i, j, n;
    printf("\nEnter how many array elements you want to enter: ");
    scanf("%d", &n);
    printf("\nEnter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe unsorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }

    //Sorting the array:
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    printf("\nThe sorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }

    return 1;
}
