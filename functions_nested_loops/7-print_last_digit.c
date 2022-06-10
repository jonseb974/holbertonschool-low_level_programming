#include <stdio.h>
/**
*print_last_digit - print last digit of a number
*@c: number
*Return: 0
*
*/

int print_last_digit(int c)
{
	c = c % 10;
	if ((c > 0) || (c == 0))
	{
		putchar (c % 10 + '0');
		return (c % 10);
	}
	else
	{
		c = c * (-1);
		putchar (c % 10 + '0');
		return (c % 10);
	}
}
