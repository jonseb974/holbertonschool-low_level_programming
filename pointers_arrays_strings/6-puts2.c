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
	int j = 0;
	int tmp = 0;

	for (j = 0; j != '\0'; j++)
	{
		if (i % 2 == 0)
		{
			tmp = str[i];
			str[i] = str[j];
			str[j] = tmp;
			i++;
		}
	}
}
