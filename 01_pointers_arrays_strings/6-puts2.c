#include "main.h"
/**
 * puts2 - print only one character
 *from the existing list each time
 *@str: pointer of the string to be printed.
 * Returns: no return.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
