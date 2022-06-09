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
	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

