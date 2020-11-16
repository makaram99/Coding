/* ******************************************** */
/* Author       : Mahmoud Karam                 */
/* Date         : 09/08/2020                    */
/* Version      : V1                            */
/* Description  : Implementation of Week 2 and  */
/*                week 3 in course 103 of Hossam*/
/*                Khiary                        */
/* ******************************************** */

#include <stdio.h>
#include <stdlib.h>

/* ******************************************** */
/* only defining y                              */
/* ******************************************** */
int y;

/* ******************************************** */
/* only declares x not defining it,result in    */
/* undefined reference to x cuz it hasn't       */
/* address in memory, it must be defined i.e.   */
/* int x to get location in memory              */
/* ******************************************** */
extern int x;

/* ******************************************** */
/* Program Driver                               */
/* ******************************************** */
int main()
{
    float z = 1.5;

    x = 5;
    y = 6;

    /* print 5                                  */
    printf("x = %d \n", x);
    /* print 6                                  */
    printf("6 = %d \n", 6);
    /* print null                               */
    printf("z = %d \n", z);
    /* print null cause it's float not decimal  */
    printf("1.5 in decimal = %d \n", 1.5);
    /* print null cause it's float not decimal  */
    printf("1.5 in hexa = %x \n", 1.5);
    /* print AScii of character a               */
    printf("a in AScii = %d \n", 'a');
    /* string in array of a and null characters */
    /* display address not AScii                */
    printf("a in a string with null = %d \n", "a");

    return 0;
}
