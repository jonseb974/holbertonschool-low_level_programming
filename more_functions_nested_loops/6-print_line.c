#include <stdio.h>
#include <ctype.h>
/**
*print_line - print the drawnig of a line.
*@n: is qn integer
*
*
*/

void print_line(int n)
{
	int n = 0;

	while (n < 0)
	{
		putchar(n);
		putchar(95);
		n++;
	if (n <= 0)
		putchar('\n');
	}
}
