/*Demonstration of differences between struct and union*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program demonstrates the differences between structures and unions in C.
*/

//Global Declarations:
struct marks
{
    char str[20];
    int i;
    float f;
};

union data
{
    char str[20];
    int i;
    float f;
};

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    struct marks student;
    union data info;
    printf("\n-- Structure Demonstration ---\n");
    printf("\nEnter Name: ");
    scanf("%s", student.str);
    printf("Enter Marks: ");
    scanf("%d", &student.i);
    printf("Enter Average: ");
    scanf("%f", &student.f);
    printf("\nStudent Details (Using Structure):\n");
    printf("Name: %s\n", student.str);
    printf("Marks: %d\n", student.i);
    printf("Average: %.2f\n", student.f);

    printf("\n-- Union Demonstration ---\n");
    printf("\nEnter Name: ");
    scanf("%s", info.str);
    printf("Name: %s\n", info.str);
    printf("Enter Marks: ");
    scanf("%d", &info.i);
    printf("Marks: %d\n", info.i);
    printf("Enter Average: ");
    scanf("%f", &info.f);
    printf("Average: %.2f\n", info.f);

    return 1;
}