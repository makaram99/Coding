/********************************************************************/
/* Author		: Mahmoud Karam										*/
/* Date			: 21/08/2020										*/
/* Version		: V5 												*/
/* Description	: Convert from Celsius to celsiusenheite in table	*/
/*				  given Celsius values (300 to 0 with step = -20)	*/ 
/*						celsiusenheite = Celsius * (9 / 5) + 32		*/
/* 				  using For loop for small size and fast execution	*/
/********************************************************************/
#include <stdio.h>

/* Magic numbers 	*/
#define 	LOWER 	0		/* Lower limit of temperature scale	*/
#define 	UPPER 	300		/* Upper limit						*/
#define 	STEP	20		/* Step size						*/


void main (void)
{
	int celsius;
	
	printf("%s \n", "Celsius \t celsiusenheite");
	for (celsius = UPPER; celsius >= LOWER ; celsius -= STEP)
		printf("%d \t\t %0.2f \n", celsius, celsius * (9.0 / 5) + 32);
}