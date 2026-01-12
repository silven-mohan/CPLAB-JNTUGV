/*2's Complement of a binary number*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program takes a binary number.
 * And, finds the two's complement of the number.
*/

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
	char bin[65];
	int n, i, carry=1;
	printf("Enter the binary number: ");
	scanf("%s", bin);
	
	for(n=0;bin[n]!='\0';n++);

	//Convert to 1's complement:
	for(i=0;i<n;i++)
	{
		if(bin[i]=='1')
		{
			bin[i]='0';
		}	
		else if(bin[i]=='0')
		{
			bin[i]='1';
		}
		else
		{
			printf("\nInvalid bit");
			return 0;
		}
	}

	//Convert to 2's complement:
	for(i=n-1;i>=0;i--)
	{
		if(carry==0)
		{
			break;
		}
		else if(bin[i]=='1')
		{
			bin[i]='0';
			carry=1;
		}
		else
		{
			bin[i]='1';
			carry=0;
		}
	}

	printf("\n\nThe 2\'s complement of the given binary number is: %s", bin);

	return 1;
}
