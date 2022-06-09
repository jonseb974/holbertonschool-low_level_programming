#include<stdio.h>
#include <ctype.h>
/**
*function_islower-return 1 or 0.
*@c is an ascii integer
*
* Return 1 or 0
*/

int _islower(int c)
{
	if (c >= 98 && c <= 122)
		return(1);
	else
		return (0);
}
