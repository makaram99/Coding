/********************************************************************/
/* Author		: Mahmoud Karam										*/
/* Date			: 23/08/2020										*/
/* Version		: V1												*/
/* Reference	: The C Programming Language by Dennis Ritchie		*/
/* Page			: 22												*/
/* Description	: Count blanks, tabs, newlines						*/
/********************************************************************/
#include <stdio.h>

void main (void)
{
	char c, nl, tab, blank;
	nl = tab = blank = 0;
	
	/* EOF = Ctrl+Z in windows OS (OS dependant)	*/
	while ((c = getchar()) != EOF)
		switch (c)
		{
			/* New line (Enter pressed)		*/
			case '\n':		++nl;		break;
			/* Tab 		(Tab   pressed)		*/
			case '\t':		++tab;		break;
			/* Blanks	(Space pressed)		*/
			case ' ' :		++blank;	break;
		}
	
	/* Print number of lines	*/
	printf("# of Lines : %d \n", nl   );
	/* Print number of Tabs		*/
	printf("# of Tabs  : %d \n", tab  );
	/* Print number of Blanks	*/
	printf("# of Blanks: %d \n", blank);
}