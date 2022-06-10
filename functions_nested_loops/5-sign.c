#include <stdio.h>
#include "main.h"
/**
* print_sign - print sign of a number.
* @n: is an interger.
* Return:1,+,0,-1.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
