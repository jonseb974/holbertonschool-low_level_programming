#include "main.h"

/**
 * string_toupper - string to be changed
 * to uppercase;
 * @ch: a pointer
 * Return: char
 */

char *string_toupper(char *ch)
{
	int i = 0;

	while (*(ch + i) != '\0')
	{
		if (*(ch + i) >= 97 && *(ch + i) <= 122)
			*(ch + i) = *(ch + i) - 32;
		i++;
	}
	return (ch);
}
