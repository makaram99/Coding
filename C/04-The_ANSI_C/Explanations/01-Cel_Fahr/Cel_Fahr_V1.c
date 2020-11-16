/********************************************************************/
/* Author		: Mahmoud Karam										*/
/* Date			: 21/08/2020										*/
/* Version		: V1												*/
/* Description	: Convert from Fahrenheite to Celsius in table		*/
/*				  given Fahrenheite values (0 to 300 with step = 20)*/ 
/*					Celsius = (5/9)(Fahrenheite - 32)				*/
/********************************************************************/
#include <stdio.h>

void main (void)
{
	int fahr	, celsius		;
	int lower	, upper,	step;
	
	lower	=	0	;	/* Lower Limit of temp scale	*/
	upper	=	300	;	/* Upper Limit	*/
	step	=	20	;	/* Step size	*/
	
	fahr = lower;
	/* ("Fahrenheite\tCelsius\n") = ("%s\n", "Fahrenheite\tCelsius\n")	*/
	printf("Fahrenheite\tCelsius\n");
	while (fahr <= upper )
	{
		/* modify arrangement of formula to avoid int truncation of (5 / 9) */
		celsius	= 5 * (fahr - 32) / 9;
		/* %3d and %6d for Right Justification	*/
		printf("%3d\t\t%6d\n", fahr, celsius);
		fahr += step;
	}
}