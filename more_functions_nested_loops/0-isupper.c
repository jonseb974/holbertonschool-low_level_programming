#include <stdio.h>
#include <ctype.h>

/**
*_isupper-check for style of the letter
*@c: is a letter
*Return: 1 if upper, else 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	c++;
	}
	else
	{
		return (0);
	}
}
