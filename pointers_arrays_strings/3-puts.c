#include <string.h>
#include <stdio.h>
/**
 * _puts-print a string
 *
 * @str: pointerto a char.
 * Returns: no return.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
