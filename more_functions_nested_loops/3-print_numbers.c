#include <stdio.h>
#include <ctype.h>

/**
*print_numbers-print numbers from 0 to 9
*Return: no return.
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58 ; i++)
	{
		putchar(i + '0');
	}
}
