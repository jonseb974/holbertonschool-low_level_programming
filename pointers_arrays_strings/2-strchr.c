#include "main.h"
#include <stddef.h>
/**
 *_strchr - locates a character in a string.
 *@s: pointer of the string.
 *@c: character.
 *Return: c, s, or NULL.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
