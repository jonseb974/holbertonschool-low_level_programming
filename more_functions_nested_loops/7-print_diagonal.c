#include <stdio.h>
#include <ctype.h>
/**
*print_diagonal-print the pattern of a diagonal
*@n: integer.
*Return: no return
*/

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			putchar (92);
			putchar('\n');
			i++;
		}
		else
			putchar ('\n');
	}
}
