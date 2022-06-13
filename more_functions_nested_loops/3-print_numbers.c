#include <stdio.h>
#include <ctype.h>

/**
*print_numbers-print numbers from 0 to 9
*Return: no return.
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
