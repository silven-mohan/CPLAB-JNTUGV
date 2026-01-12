/*Number of Lowercase, Uppercase, Other Characters in a String using pointers*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program counts the number of lowercase, uppercase and other characters in a string using pointers.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    char str[100], *ptr = str;
    int l=0, u=0, o=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(*ptr != '\0')
    {
        if(*ptr >= 'a' && *ptr <= 'z')
            l++;
        else if(*ptr >= 'A' && *ptr <= 'Z')
            u++;
        else
            o++;
        ptr++;
    }
    printf("Lowercase letters: %d\n", l);
    printf("Uppercase letters: %d\n", u);
    printf("Other characters: %d\n", o);

    return 1;

}