#include <stdio.h>
/**
* print_sign - print sign of a number.
* @n: is an interger.
* Return: 1 & + or 0 or -1 & - 
*/
int print_sign(int n) 
{
	if (n > 0)
	{
		putchar (43);
		return (+1);
	}
	else if (n < 0)
	{
		putchar (45);
		return (-1);
	}
	else
	{
		putchar (48);
		return (0);	
	}
}
