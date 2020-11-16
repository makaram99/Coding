/********************************************************************/
/* Author		: Mahmoud Karam										*/
/* Date			: 21/08/2020										*/
/* Reference	: The C Programming by Dennis Ritchie				*/
/* Page			: 16												*/
/* Version		: V1 												*/
/* Description	: Convert from Celsius to Fahrenheite in table		*/
/*				  given Celsius values (0 to 300 with step = 20)	*/ 
/*						Fahrenheite = Celsius * (9 / 5) + 32		*/
/********************************************************************/
#include <stdio.h>

void main (void)
{
	float fahr	, celsius		;
	int lower	, upper,	step;
	
	lower	=	0	;	/* Lower Limit of temp scale	*/
	upper	=	300	;	/* Upper Limit	*/
	step	=	20	;	/* Step size	*/
	
	/* Casting int to float	*/
	celsius = lower;
	printf("%s \n", "Celsius \t Fahrenheite");
	while (celsius <= upper )
	{	
		/* If we write (9 / 5) not (9.0 / 5), result = 1		*/
		/* making celsius * (9 / 5) = celsius					*/
		/*			(9.0 / 5) = (9 / 5.0) = 1.8					*/
		/*			(9   / 5) = 1								*/
		fahr = celsius * (9.0 / 5) + 32.0;

		/* %3.0f means Fahrenheite is printed with 3 cahracters */
		/* wide and 0 digits after decimal point.				*/
		printf("%3.0f \t\t %0.2f \n", celsius, fahr);
		celsius += step;
	}
}