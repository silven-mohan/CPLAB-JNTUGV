/*Number of lines, words, characters in a file*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program finds the number of lines, words and characters in a file.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    FILE *fp;
    char str[100], ch;
    int l=0, w=0, c=0;
    printf("Enter text to write to the file (Ctrl+D to end):\n");
    fp = fopen("file.txt", "w");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 0;
    }
    while((fgets(str, sizeof(str), stdin)) != NULL)
    {
        fputs(str, fp);
    }
    fclose(fp);
    fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 0;
    }
    while((ch = fgetc(fp)) != EOF)
    {
        c++;
        if(ch == ' ' || ch == '\n' || ch == '\t')
            w++;
        if(ch == '\n')
            l++;
    }
    if(c > 0)
        w++; 
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", l, w, c);
    fclose(fp);

    return 1;
}
