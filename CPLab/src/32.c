/*Reverse a string with and without using Library functions*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program reverses a given string using two methods:
 * 1. Without using library functions.
 * 2. Using library functions. (strrev function implemented manually here as strrev is not part of C17 standard)
*/

//Function Prototypes:
int strrev(char *str);

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<string.h>	//For String related functions.

//Main Function:
int main()
{
    char str1[100], str2[100];
    int i, len=0;
    printf("\nEnter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    //Reversing without using library functions
    for(len=0;str1[len]!='\0';len++);
    for(i=0;i<len/2;i++)
    {
        str1[i] = str1[i] + str1[len-i-1];
        str1[len-i-1] = str1[i] - str1[len-i-1];    //Swapping the characters
        str1[i] = str1[i] - str1[len-i-1];
    }
    printf("\nReversed string without using library functions: %s", str1);

    //Reversing using library functions
    printf("\nEnter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    strrev(str2);
    printf("\nReversed string using library functions: %s", str2);

    return 1;

}

//Function Definitions:
//strrev():
//This function reverses a given string using library functions.
int strrev(char *str)
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    //Swapping characters from start and end until the middle is reached
    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return 0;
}