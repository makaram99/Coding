/********************************************************************/
/* Author		: Mahmoud Karam										*/
/* Date			: 21/08/2020										*/
/* Version		: V2												*/
/* Reference	: The C Programming by Dennis Ritchie				*/
/* Page			: 18												*/
/* Description	: Check if the entered character not equal EOF		*/
/*							EOF: end-of-file 						*/
/*						EOF = Ctrl+Z in windows OS					*/
/*	 sizeof(EOF)	= 4 bytes ==> integer. So, x is int not char	*/
/********************************************************************/

#include <stdio.h>

void main (void)
{
	int x;
	
	/* recieves only the first entered character ignoring the next 	*/
	x = getchar();
	
	while (x != EOF)
	{
		putchar(x);
		x = getchar();
	}
}