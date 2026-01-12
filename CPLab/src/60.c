/*Last n characters in a file*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program reads a file and displays the last n characters from it.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    FILE *fp;
    char filename[100], ch;
    int n;
    printf("Enter the filename: ");
    scanf("%s", filename);
    printf("Enter the number of characters to display from the end: ");
    scanf("%d", &n);
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    fseek(fp, -n, SEEK_END);
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);

    return 1;
}