/********************************************************************/
/* Author		: Mahmoud Karam										*/
/* Date			: 21/08/2020										*/
/* Version		: V1 												*/
/* Reference	: The C Programming by Dennis Ritchie				*/
/* Page			: 11												*/
/* Description	: what error you get when give \c to printf?		*/
/********************************************************************/
#include <stdio.h>

void main(void)
{
	/* Compiler error: unknown escape sequence: '\c'	*/
	printf("hello: \c");
}