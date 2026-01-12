/*Merge two files into third file using Command-line arguments*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program merges two text files into a third file using command-line arguments.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main(int argc, char *argv[])
{
    FILE *fp1, *fp2, *mfp;
    char ch;
    if(argc != 4)
    {
        printf("Usage: %s <file1> <file2> <merged_file>\n", argv[0]);
        return 0;
    }
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");
    mfp = fopen(argv[3], "w");
    if(fp1 == NULL || fp2 == NULL || mfp == NULL)
    {
        printf("Error opening files!\n");
        return 0;
    }
    printf("Contents of the first file:\n");
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, mfp);
        fputc(ch, stdout);
    }
    printf("\nContents of the second file:\n");
    while((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, mfp);
        fputc(ch, stdout);
    }
    fclose(mfp);
    mfp = fopen(argv[3], "r");
    printf("\nContents of the merged file:\n");
    while((ch = fgetc(mfp)) != EOF)
    {
        fputc(ch, stdout);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(mfp);

    return 1;
}