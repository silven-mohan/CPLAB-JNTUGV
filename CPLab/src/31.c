/*Concatenation of two strings without using Library functions*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * 
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<string.h>  //For string handling functions.

//Main Function:
int main()
{
    char str1[100], str2[50];
    int i, j;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
    for(i=strcspn(str1, "\n"), j=0; str2[j]!='\0'; i++, j++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    printf("Concatenated String: %s\n", str1);

    return 1;
}