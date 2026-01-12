/*Total and Average of n student marks using structures*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program calculates the total and average marks of n students using structures.
*/

//Global Declarations:
typedef struct
{
    int sno, marks;
} student;  

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.
#include<stdlib.h>	//For Standard Library functions.

//Main Function:
int main()
{
    int n, i, sum = 0;
    float average;
    student *s;  
    printf("Enter number of students: ");
    scanf("%d", &n);
    s=(student *)malloc(n * sizeof(student));
    for(i = 0; i < n; i++)
    {
        printf("\nEnter roll number and marks of student %d: ", i + 1);
        scanf("%d %d", &s[i].sno, &s[i].marks);
        sum += s[i].marks;
    }
    average = (float)sum / n;
    printf("\nTotal Marks = %d", sum);
    printf("\nAverage Marks = %.2f", average);
    free(s);

    return 1;
}