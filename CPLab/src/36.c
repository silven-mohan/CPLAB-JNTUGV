/*Reads Students' data from command line*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program reads n students' data from command line arguments and calculates total and average marks.
*/

//Global Declarations:
typedef struct
{
    int roll_no;
    char name[50];
    float marks;
} Student;

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<stdlib.h>	//For Dynamic Memory Allocation functions.
#include<string.h>	//For String functions.

//Main Function:
int main(int argc, char *argv[])
{
    int n, i;
    float total = 0.0, average;
    Student *students;
    if(argc < 2)
    {
        printf("Usage: %s <number_of_students>\n", argv[0]);
        return 0;
    }
    n = atoi(argv[1]);
    students = (Student *)malloc(n * sizeof(Student));
    if(students == NULL)
    {
        printf("\nMemory allocation failed!");
        return 1;
    }
    for(i = 0; i < n; i++)
    {
        students[i].roll_no = atoi(argv[2 + i * 3]);
        strcpy(students[i].name, argv[3 + i * 3]);
        students[i].marks = atof(argv[4 + i * 3]);
        total += students[i].marks;
    }
    average = total / n;
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    free(students); 
    
    return 1;
}