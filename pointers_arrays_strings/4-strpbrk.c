#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of the set of bytes>
 *@accept: pointer
 *@s : char
 *
 *Return: s or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (*s != '\0')
	{
		j = 0;
		while (*(accept + i) != '\0')
		{
			if (*s == *(accept + i))
				i = 1;
			j++;
		}
		i = 0;
		if (j == 1)
			return (s);
		s++;
	}
	return (NULL);
}
