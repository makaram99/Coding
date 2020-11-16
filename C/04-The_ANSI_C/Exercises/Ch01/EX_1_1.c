/********************************************************************/
/* Author		: Mahmoud Karam										*/
/* Date			: 21/08/2020										*/
/* Version		: V1 												*/
/* Reference	: The C Programming by Dennis Ritchie				*/
/* Page			: 11												*/
/* Description	: what error you get when leaving out parts of prog	*/
/********************************************************************/
#include <stdio.h>

void main(void)
{
	/* Compiler errors: 
						error1: missing terminating " character in printf("hello,
						error2: missing terminating " character in world");
						error3: 'world' undeclared (first use in this function) in world");		*/
	printf("hello, 
			world");
}