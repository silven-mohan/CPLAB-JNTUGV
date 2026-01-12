/*Write and Read text into a File*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program writes and reads text into a file.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    FILE *fp;
    char str[100];

    fp = fopen("sample.txt", "w"); 
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 0;
    }
    printf("Enter text to write to the file (Ctrl+D to end):\n");
    while((fgets(str, sizeof(str), stdin)) != NULL)
    {
        fputs(str, fp);
    }
    fclose(fp);
    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 0;
    }
    printf("Contents of the file:\n");
    while(fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);

    return 1;
}