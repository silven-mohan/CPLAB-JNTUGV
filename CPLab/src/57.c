/*Copy one binary file to another*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program copies one text file to another.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("source.txt", "w");
    if(fp1 == NULL)
    {
        printf("Error opening source file!\n");
        return 0;
    }
    printf("Enter text to write to the source file (Ctrl+D to end):\n");
    while((ch = getchar()) != EOF)
    {
        fputc(ch, fp1);
    }
    fclose(fp1);
    fp1 = fopen("source.txt", "r");
    fp2 = fopen("destination.txt", "w");
    if(fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening files!\n");
        return 0;
    }
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }   
    fseek(fp1, 0, SEEK_SET);
    fclose(fp2);
    fp2 = fopen("destination.txt", "r");
    printf("\nContents of the source file:\n");
    while((ch = fgetc(fp1)) != EOF)
    {
        putchar(ch);
    }
    printf("\n\nContents of the destination file:\n");
    while((ch = fgetc(fp2)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp1);
    fclose(fp2);

    return 1;
}