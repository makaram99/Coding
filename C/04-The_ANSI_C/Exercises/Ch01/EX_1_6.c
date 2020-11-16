/********************************************************************/
/* Author		: Mahmoud Karam										*/
/* Date			: 21/08/2020										*/
/* Version		: V1												*/
/* Reference	: The C Programming by Dennis Ritchie				*/
/* Page			: 20												*/
/* Description	: Check if the entered character not equal EOF		*/
/*						EOF: end-of-file 							*/
/*						EOF = Ctrl+Z in windows OS					*/
/********************************************************************/
#include <stdio.h>

void main (void)
{
	printf("X = ");
	printf("Condition (getchar() != EOF) = %d \n", getchar() != EOF);
}