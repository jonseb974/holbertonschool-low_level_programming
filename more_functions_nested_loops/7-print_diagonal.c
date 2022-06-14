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
	int j = 0;

	while (i < n)
	{
		while (j <= i)
		{
			if (j != i)
				putchar(' ');
			else
				putchar (92);
		j++;
		}
		putchar ('\n');
		i++;
		j = 0;
	}
	if (n <= 0)
		putchar('\n');
}
