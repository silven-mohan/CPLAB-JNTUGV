/*Read and Print a date with and without bit-fields*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program reads a date from the user and prints it using both bit-field and non-bit-field structures.
*/

//Global Declarations:
struct date		//Structure Declaration.
{
    unsigned int day:5;		//Bit-field for Day (0-31).
    unsigned int month:4;	//Bit-field for Month (0-12).
    unsigned int year:15;	//Bit-field for Year (0-32767).
};

struct date_no_bitfield		//Structure Declaration without Bit-fields.
{
    unsigned int day;		//Day.
    unsigned int month;		//Month.
    unsigned int year;		//Year.
};

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    struct date today;	
    struct date_no_bitfield today_no_bitfield;
    int d, m, y;
    printf("Enter today's date (DD MM YYYY): ");
    scanf("%d %d %d", &d, &m, &y);
    today.day = d;
    today.month = m;
    today.year = y;
    printf("Today's date (using bit-fields): %02u/%02u/%04u\n", today.day, today.month, today.year);
    printf("sizeof(today) = %zu bytes\n", sizeof(today));

    today_no_bitfield.day = d;
    today_no_bitfield.month = m;
    today_no_bitfield.year = y;
    printf("Today's date (without using bit-fields): %02u/%02u/%04u\n", today_no_bitfield.day, today_no_bitfield.month, today_no_bitfield.year);
    printf("sizeof(today_no_bitfield) = %zu bytes\n", sizeof(today_no_bitfield));

    return 1;
}