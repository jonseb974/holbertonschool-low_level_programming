#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: a char.
 * Return: integer.
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
