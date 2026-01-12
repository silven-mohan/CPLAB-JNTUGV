/*Entry of n students' data using calloc() and display failed students list*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes entry of n students' data using calloc() and displays the list of failed students (marks < 40).
*/

//Global Declarations:
typedef struct Student
{
    int rollno;
    char name[20];
    float marks;
} STUDENT;

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<stdlib.h>	//For Dynamic Memory Allocation functions.

//Main Function:
int main()
{
    int n, i;
    STUDENT *students;
    printf("Enter number of students: ");
    scanf("%d", &n);
    students = (STUDENT *)calloc(n, sizeof(STUDENT));
    if (students == NULL)
    {
        printf("\nMemory allocation failed!");
        return 1;
    }
    
    printf("\nEnter student details:\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d:", i + 1);
        printf("\nRoll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nList of failed students (marks < 40):\n");
    for (i = 0; i < n; i++)
    {
        if (students[i].marks < 40)
        {
            printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
        }
    }
    free(students);

    return 1;
}