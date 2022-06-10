#include <stdio.h>
/**
*jack_bauer - prints ;inutes of Jack Bauer day
*start from 00:00 to 23:59.
*
*Return: no return.
*/

void jack_bauer(void)
{
	int x = 0;
	int j = 0;
	
	while (x <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(':');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar('\n');
			j += 1;
		}
		x += 1;
	}

}
