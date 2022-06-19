#include "main.h"
#include <stddef.h>

/**
 *_strstr - function that locates a substring.
 *@haystack: original string
 *@needle: substring>
 *Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *kung;
	char *fu;

	while (*haystack != '\0')
	{
		kung = haystack;
		fu = needle;

		while (*fu == *haystack && *fu != '\0' && *haystack != '\0')
		{
			haystack++;
			fu++;
		}
		if (*fu == '\0')
			return (kung);
		haystack = fu + 1;
	}
	return (NULL);
}
