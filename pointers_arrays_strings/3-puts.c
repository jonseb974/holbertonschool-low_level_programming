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

	While(str[i] != '\0')

	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
