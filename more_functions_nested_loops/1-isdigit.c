#include <stdio.h>
#include <ctype.h>
/**
*_isdigit-check if the number is digit.
*@c: is an interger or other type
*Return: return 1 if is digit 0 if not.
*
*/

int _isdigit(int c)
{
	if (c >= 48  &&  c <= 58)
	{
		return (1);
	c++;
	}
	else
	{
		return (0);
	}
}
