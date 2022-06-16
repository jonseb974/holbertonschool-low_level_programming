#include "main.h"
/**
 *puts_half - print half of the string
 *@str: is a string.
 *Returns: no return.
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	for (str[i] = 0; str[i] != '\0'; str[i]++)
	{
		str[j] = str[i] / 2;
		_putchar(str[j]);
	}
	_putchar('\n');
}
