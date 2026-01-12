/*Shift/Rotate using bit-fields*/

/*
 * Author: Silven
 * Date: 10/01/2026
 * Platform: Other Than TurboC.
 * This program demonstrates left and right shift and rotate operations using bit-fields in a structure.
*/

//Global Declarations:
struct bits
{
    unsigned int b0 : 1;
    unsigned int b1 : 1;
    unsigned int b2 : 1;
    unsigned int b3 : 1;
    unsigned int b4 : 1;
    unsigned int b5 : 1;
    unsigned int b6 : 1;
    unsigned int b7 : 1;    
};

//Function Prototypes:
int left_shift(struct bits *b);
int right_shift(struct bits *b);
int rotate_left(struct bits *b);
int rotate_right(struct bits *b);

//Preprocessing Directives:
#include<stdio.h>	//For Basic I/O functions.

//Main Function:
int main()
{
    struct bits b;
    int choice;
    unsigned int bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7;
    printf("Enter 8 bits (0 or 1): ");
    scanf("%1u%1u%1u%1u%1u%1u%1u%1u", &bit0, &bit1, &bit2, &bit3, &bit4, &bit5, &bit6, &bit7);
    b.b0 = bit0;
    b.b1 = bit1;
    b.b2 = bit2;
    b.b3 = bit3;
    b.b4 = bit4;
    b.b5 = bit5;
    b.b6 = bit6;
    b.b7 = bit7;
    printf("Choose operation:\n1. Left Shift\n2. Right Shift\n3. Rotate Left\n4. Rotate Right\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            left_shift(&b);
            break;
        case 2:
            right_shift(&b);
            break;
        case 3:
            rotate_left(&b);
            break;
        case 4:
            rotate_right(&b);
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    printf("Resulting bits: %u%u%u%u%u%u%u%u\n", b.b0, b.b1, b.b2, b.b3, b.b4, b.b5, b.b6, b.b7);

    return 0;
}

//Function Definitions:
//Left Shift Function:
//This function shifts all bits to the left by one position.
int left_shift(struct bits *b)
{
    struct bits temp = *b;
    b->b0 = temp.b1;
    b->b1 = temp.b2;
    b->b2 = temp.b3;
    b->b3 = temp.b4;
    b->b4 = temp.b5;
    b->b5 = temp.b6;
    b->b6 = temp.b7;
    b->b7 = 0; // Clear the last bit
    return 0;  
}

//Right Shift Function:
//This function shifts all bits to the right by one position.
int right_shift(struct bits *b)
{
    struct bits temp = *b;
    b->b7 = temp.b6;
    b->b6 = temp.b5;
    b->b5 = temp.b4;
    b->b4 = temp.b3;
    b->b3 = temp.b2;
    b->b2 = temp.b1;
    b->b1 = temp.b0;
    b->b0 = 0; // Clear the first bit
    return 0;  
}

//Rotate Left Function:
//This function rotates all bits to the left by one position.
int rotate_left(struct bits *b)
{
    struct bits temp = *b;
    b->b0 = temp.b1;
    b->b1 = temp.b2;
    b->b2 = temp.b3;
    b->b3 = temp.b4;
    b->b4 = temp.b5;
    b->b5 = temp.b6;
    b->b6 = temp.b7;
    b->b7 = temp.b0; // Rotate the last bit to first
    return 0;  
}

//Rotate Right Function:
//This function rotates all bits to the right by one position.
int rotate_right(struct bits *b)
{
    struct bits temp = *b;
    b->b7 = temp.b6;
    b->b6 = temp.b5;
    b->b5 = temp.b4;
    b->b4 = temp.b3;
    b->b3 = temp.b2;
    b->b2 = temp.b1;
    b->b1 = temp.b0;
    b->b0 = temp.b7; // Rotate the first bit to last
    return 0;  
}