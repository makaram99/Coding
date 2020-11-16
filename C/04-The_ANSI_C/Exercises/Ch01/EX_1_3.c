/********************************************************************/
/* Author		: Mahmoud Karam										*/
/* Date			: 21/08/2020										*/
/* Version		: V1 												*/
/* Reference	: The C Programming by Dennis Ritchie				*/
/* Page			: 16												*/
/* Description	: Convert from Fahrenheite to Celsius in table		*/
/*				  given Fahrenheite values (0 to 300 with step = 20)*/ 
/*					Celsius = (5/9)(Fahrenheite - 32)				*/
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
	fahr = lower;
	
	/* Print a headinf abive table	*/
	/* ("Fahrenheite\tCelsius\n") = ("%s\n", "Fahrenheite\tCelsius\n")	*/
	printf("Fahrenheite \t Celsius \n");
	while (fahr <= upper )
	{	
		/* If we write (5 / 9) not (5.0 / 9), Celsius truncates	*/
		/* cuz it's written in integer format, but any floating	*/
		/* operand forces the compiler to convert any int 		*/
		/* values to float before operation.					*/
		/*			(5.0 / 9) = (5 / 9.0) = 0.5555				*/
		/*			(5   / 9) = 0								*/
		celsius	= (5.0 / 9) * (fahr - 32);	

		/* %3.0f means Fahrenheite is printed with 3 cahracters */
		/* wide and 0 digits after decimal point.				*/
		printf("%3.0f \t\t %.2f\n", fahr, celsius);
		fahr += step;
	}
}