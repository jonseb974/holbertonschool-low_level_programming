#include <stdio.h>
/**
*print_last_digit - print last digit of a number
*@c: number
*Return: 0
*
*/

int print_last_digit(int c)
{
	if (c < 0)
		c %= 10;
	c *= (-1);
	putchar(c + '0');
	return (c);
}
