/*Transpose of a Matrix*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program calculates the transpose of a matrix using a user-defined function.
*/

//Function Prototypes:
int transpose(int arr[10][10], int row, int col);

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    int arr[10][10], row, col, i, j;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &row, &col);
    printf("Enter elements of matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Original matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    transpose(arr, row, col);

    printf("Transpose of the matrix:\n");
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 1;
}

//Function Definitions:
//transpose():
//This function calculates the transpose of a matrix.
int transpose(int arr[10][10], int row, int col)
{
    int i, j, temp;
    for(i = 0; i < row; i++)
    {
        for(j = i + 1; j < col; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    return 0;
}