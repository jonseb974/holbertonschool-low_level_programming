#include "main.h"
/**
 *_strspn - get the length of a prefix substring.
 *@s: character
 *@accept: byte
 *Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;
	int j = 0;

	while (*s != '\0')
	{
		j = 0;
		while (*(accept + i) != '\0')
		{
			if (*s == *(accept + i))
				j = 1;
			i++;
		}
		i = 0;
		if (j == 0)
			break;
		count++;
		s++;
	}
	return (count);
}
