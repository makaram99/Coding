/* **************************************************************** */
/* Author       : Mahmoud Karam                                     */
/* Date         : 13/08/2020                                        */
/* Description  : Program find sequence of numbers constitute 10000 */
/* **************************************************************** */

#include <stdio.h>

/*  find_sequence   : find sequence of numbers which their sum = x
*   return          : nothing
*   x               : the sum of sequence                           */
void find_sequence (unsigned int x);

/*  print_sequence  : print the sequence of numbers that sums 10000
*   start           : Start number of the sequence
*   end             : Last number of the sequence                   */
void print_sequence (unsigned short start, unsigned short end);

/*  main         : main driver of the whole program
*   return       : nothing but startup code of toolchain stores in integer  */
int main()
{
    find_sequence (10000);              // Calling find_sequence function passing 10000

    return 0;
}

void find_sequence (unsigned int x)
{
    unsigned short i, j;                // Loops indexes
    unsigned short sum;                 // Sequence sum

    for(i = 0; i <= x; i++)             // Start index of the sequence
    {
        sum = 0;                        // Resetting the sum of sequence
        for (j = i; j <= x; j++)        // End index of the sequence
        {
            sum += j;
            if (sum == x)
                print_sequence(i, j);
            else if (sum >= x)
                break;
        }
    }
}

void print_sequence (unsigned short start, unsigned short end)
{
    unsigned short i;

    printf(">> Start of Sequence: \n");

    for (i = start; i <= end ; i++)
        printf ("%d ", i);
    printf ("\n");                      // New line
    printf(">> End of Sequence. \n\n");
    }
