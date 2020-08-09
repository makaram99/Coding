/* ******************************************** */
/* Author       : Mahmoud Karam                 */
/* Date         : 09/08/2020                    */
/* Version      : V1                            */
/* Description  : Implementation of week 4 in   */
/*                course 103 of Hossam Khiary   */
/*                (Assignment Operator)         */
/* ******************************************** */

#include <stdio.h>
#include <stdlib.h>

/* declaration and defining of x in RAM         */
/* Static Variable                              */
int x ;

/* ******************************************** */
/* declaration and definition of y, initialized */
/* with value of 20, Not shown in disassembly   */
/* or doesn't have executable code cuz it's     */
/* saved before initializing the code           */
/* ******************************************** */
int y = 20;

/* ******************************************** */
/* Program Driver Function                      */
/* ******************************************** */
int main()
{
    /* Modifying value in stack pointer         */
    /* Immediate addressing mode                */
    x = 5;
    y = 30;

    /* **************************************** */
    /* Declaration and definition of z has ex   */
    /* code cuz it has dynamic address (stack)  */
    /* **************************************** */
    int z = 35;

    z = 40;

    /* Save y value in a register and then      */
    /* assigning to x address                   */
    x = y;

    /* Save y value in a register, then add 1   */
    /* then assigning the final value to x      */
    x = y + 1;

    return 0;
}
