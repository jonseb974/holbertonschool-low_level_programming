#include <stdio.h>
#include <ctype.h>

/**
*more_numbers - print a list of numbers
*on several lines.
*
*Return: return 0.
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				putchar ((j / 10) + '0');
			putchar ((j % 10) + '0');
		}
		putchar('\n');
	}
}
