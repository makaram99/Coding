#include <stdio.h>

// is_Right: tests if the three sides passed can form a right angles triangle
// a, b, c : Sides of the triangle
//         : 0< side < 255
// Return 1 if yes, 0 of no

unsigned char is_right (unsigned char a, unsigned char b, unsigned char c);


int main()
{
    if (is_right(3,4,5))
        printf("3, 4, and 5 can form a right angle triangle \n");
    if (is_right(5,4,3))
        printf("3, 4, and 5 can form a right angle triangle \n");
    if (is_right(13,12,9))
        printf("3, 4, and 5 can form a right angle triangle\n");

    return 0;
}

unsigned char is_right (unsigned char a, unsigned char b, unsigned char c)
{
    unsigned char ret = 0;

    /*Get squares of three sides*/
    /* (unsigned int) for casting char number, multiplying int by char results int*/
    unsigned int a_square = (unsigned int)a*a;
    unsigned int b_square = (unsigned int)b*b;
    unsigned int c_square = (unsigned int)c*c;

    if ((a_square != 0) && (b_square != 0) && (c_square != 0))

    if ( (a_square + b_square == c_square) || (a_square + c_square == b_square) || (c_square + b_square == a_square))
        ret = 1;
     return ret;
}
