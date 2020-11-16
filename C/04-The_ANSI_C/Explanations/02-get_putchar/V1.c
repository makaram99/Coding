/********************************************************************/
/* Author		: Mahmoud Karam										*/
/* Date			: 21/08/2020										*/
/* Version		: V1												*/
/* Description	: Using getchar to get character, print with putchar*/
/********************************************************************/

#include <stdio.h>

void main (void)
{
	char x;
	
	printf("Enter character: ");
	
	/* recieves only the first entered character ignoring the next 	*/
	x = getchar();
	
	printf("X = ");
	putchar(x);
}