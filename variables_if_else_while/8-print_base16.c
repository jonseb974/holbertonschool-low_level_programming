#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints base 16 numbers
 *
 * Return:0
 */
int main(void)
{
	int i = 48;
	int j = 'a';
	while (i <= 57)
	{
		putchar(i);
		i++;
	
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	
	}
	putchar('\n');
	return (0);
}
