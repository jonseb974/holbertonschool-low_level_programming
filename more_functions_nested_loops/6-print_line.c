#include <stdio.h>
#include <ctype.h>
/**
*print_line - print the drawnig of a line.
*@n: is an integer
*
*
*/

void print_line(int n)
{
	int i = 0;

	while  (i < n)
	{
		if (n > 0)
		{
			putchar (95);
			i++;
		}
		else
			putchar ('\n');
	}
	putchar ('\n');
}
