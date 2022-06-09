#include<stdio.h>
#include <ctype.h>
/**
*_islower(int) - return 1 or 0.
*
*/

int _islower(int c)
{
	if (c >= 98 && c <= 122)
		return(1);
	else
		return (0);
}
