/********************************************************************/
/* Author		: Mahmoud Karam										*/
/* Date			: 21/08/2020										*/
/* Version		: V4 												*/
/* Description	: Convert from Celsius to celsiusenheite in table	*/
/*				  given Celsius values (0 to 300 with step = 20)	*/ 
/*						celsiusenheite = Celsius * (9 / 5) + 32		*/
/* 				  using For loop for small size and fast execution	*/
/********************************************************************/
#include <stdio.h>

void main (void)
{
	int celsius;
	
	printf("%s \n", "Celsius \t celsiusenheite");
	for (celsius = 0; celsius <= 300 ; celsius += 20)
		printf("%d \t\t %0.2f \n", celsius, celsius * (9.0 / 5) + 32);
}