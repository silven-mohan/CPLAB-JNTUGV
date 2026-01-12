/*NCR Using Functions*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program calculates nCr (combinations) using functions in C.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    int n, r, nf=1, rf=1, nrf=1, i;
    printf("Enter value of n and r: ");
    scanf("%d%d", &n, &r);
    for(i=1;i<=n;i++)
    {
        nf *= i;
    }
    for(i=1;i<=r;i++)
    {
        rf *= i;
    }
    for(i=1;i<=(n-r);i++)
    {
        nrf *= i;
    }
    printf("nCr = %d\n", nf/(rf*nrf));

    return 1;
}