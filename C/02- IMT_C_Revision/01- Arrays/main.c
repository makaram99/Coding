/* **************************************************************** */
/* Author       : Mahmoud Karam                                     */
/* Date         : 11/08/2020                                        */
/* Version      : V1                                                */
/*  Description : Implementation of concepts discussed at Arrays    */
/*                revision by IMT School done for ARM diploma       */
/* **************************************************************** */

#include <stdio.h>

int main()
{
    char name [15] = "IMT_School";

    /* ************************************************************ */
    /* Print content of the characters array                        */
    /* ************************************************************ */
    for (char i = 0; i<15; i++)
    {
        printf("%c\t", name[i]);
        // print the decimal value of Nul (zero) in AScii Table
        // all positions after character 'L' will be zeros
        if (i >= 11)
            printf("%d\t", name[i]);
    }
    /* ************************************************************ */

    // Add new Line
    printf("\n");

    /* ************************************************************ */
    /* The Same Example but the size of array = # of characters     */
    /* ************************************************************ */
    char imt [3] = "IMT";
    for (char i = 0; i<3; i++)
        printf("%c\t", name[i]);
    /* ************************************************************ */

    // Add new Line
    printf("\n");

    /* ************************************************************ */
    /*                          FFlush                              */
    /* Scanf store in 4bytes (int), but we use are storing in char. */
    /* We try access not allowed memory resulting in run time error */
    /* ************************************************************ */
    printf ("Enter your name: ");
    scanf("%c", name [0]);

    return 0;
}
