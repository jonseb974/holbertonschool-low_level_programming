#include <stdio.h>
/**
*times_table - prints times tables
*
*Return: no return.
*
*/

void times_table(void)
{
	int row, col;
	int multi = 0;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			multi = (row * col);
			if (multi < 10)
			{
				if (col != 0)
				{
					putchar(' ');
					putchar(' ');
				}
				putchar(multi + '0');
			}
			else
			{
				putchar(' ');
				putchar((multi / 10) + '0');
				putchar((multi % 10) + '0');
			}
			if (col != 9)
				putchar(',');

		}
		putchar('\n');
	}
}
