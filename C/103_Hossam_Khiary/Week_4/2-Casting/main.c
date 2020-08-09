/* **************************************************** */
/* Author       : Mahmoud Karam                         */
/* Date         : 09/08/2020                            */
/* Version      : V1                                    */
/* Description  : Implementation of casting in course   */
/*                103 of Hossam Khiary week 4           */
/* **************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* ******************************************************************** */
/*                          Implicit Casting                            */
/* ******************************************************************** */
    unsigned char x;
    unsigned short int y;

    /* y has two bytes as it's short int                */
    y = 0x1234;

    /* Casting short int y to unsigned char x           */
    x = y;

    /* ************************************************ */
    /* Print only 34 (Least Significant Byte) as x.     */
    /* Compiler take the first bytes equivalent to the  */
    /* bytes which x have (1-byte in char data type)    */
    /* and overflow happens.                            */
    /* ************************************************ */
    printf("x = %x \n", x);

    x = 0xab;
    /* Casting unsigned char x to short int y           */
    y = x;

    /* Print the LSB only cuz the MSB is zeros          */
    printf ("y = %x \n",y);

    signed char z;
    x = 0xff;
    z = x;

    /* ************************************************ */
    /* 0xff = 255 for unsigned var but = -1 for signed  */
    /* %x displays data as unsigned long integer(32bits)*/
    /* so, when casting x to z, it maintain the sign bit*/
    /* and shifted it to be constitute -1 in 32bits     */
    /* ************************************************ */
    printf ("z = %x \n", z);

    signed char a;
    unsigned short int b;

    a = 0xff;
    b = a;
    /* ************************************************ */
    /* Casting signed char (negative 0xff) of 1 byte    */
    /* to unsigned short int firstly extend the sign bit*/
    /* to the 16th bit and then assigning the result    */
    /* 0xffff to x                                      */
    /* ************************************************ */
    printf ("b = %x \n", b);

/* ******************************************************************** */
/*                           Explicit Casting                           */
/* ******************************************************************** */
    signed char m;
    unsigned short int n;

    m = 0xff;
    n = (unsigned short int)m;
    /* ************************************************ */
    /* Casting signed char (negative 0xff) of 1 byte    */
    /* to unsigned short int firstly extend the sign bit*/
    /* to the 16th bit and then assigning the result    */
    /* 0xffff to x                                      */
    /* ************************************************ */
    printf ("n = %x \n", n);

    return 0;
}
