/*Write and Read text into a binary file*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program writes and reads text into a binary file.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<string.h> //For strlen function.

//Main Function:
int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("file55.bin", "w");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 0;
    }
    printf("Enter text to write to the file (Ctrl+D to end):\n");
    while((fgets(str, sizeof(str), stdin)) != NULL)
    {
        fwrite(str, sizeof(char), strlen(str), fp);
    }
    fclose(fp);
    fp = fopen("file55.bin", "r");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 0;
    }
    printf("\nContents of the file:\n");
    while(fread(str, sizeof(char), sizeof(str)-1, fp) > 0)
    {
        str[sizeof(str)-1] = '\0';
        printf("%s", str);
    }
    fclose(fp);

    return 1;
}