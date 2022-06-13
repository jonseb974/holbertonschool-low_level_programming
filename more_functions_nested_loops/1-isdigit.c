#include <stdio.h>
#include <ctype.h>
/**
*_isdigit-check if the number is digit.
*
*Return: return 1 if is digit 0 if not.
*
*/

int _isdigit(int c)
{
	if (c > 0  &&  c <= 9)
	{
		return (1);
	c++;
	}
	else
	{
		return (0);
	}
}
