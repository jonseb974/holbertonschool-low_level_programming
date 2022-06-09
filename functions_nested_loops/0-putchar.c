#include <stdio.h>
#include <unistd.h>

/**
 * main - print a charactere
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int i;
	char str[8] = "_putchar";
	for (i = 0; str[i] != 0; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
