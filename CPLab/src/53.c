/*Copy one string to another using pointers*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program copies one string to another using pointers.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    char str1[100], str2[100];
    char *p1, *p2;
    printf("Enter the source string: ");
    fgets(str1, sizeof(str1), stdin);
    p1 = str1;
    p2 = str2;
    while(*p1 != '\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0'; 
    printf("Original String: %s", str1);
    printf("Copied String: %s", str2);

    return 1;
}