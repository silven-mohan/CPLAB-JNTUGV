/*Function for Length of a String*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program calculates the length of a string using a function.
*/

//Function Prototypes:
int string_length(char str[]);

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    length = string_length(str);
    printf("Length of the string: %d\n", length);

    return 1;
}

//Function Definitions:
//string_length: 
//Function to calculate length of a string.
int string_length(char str[])
{
    int len = 0;
    while(str[len] != '\0' && str[len] != '\n')
    {
        len++;
    }

    return len;
}