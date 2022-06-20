#include "main.h"
/**
 * _strlen_recursion - returns length of a string.
 *@s: pointer to a charactere>
 *Return: integer.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
