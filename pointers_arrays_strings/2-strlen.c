#include <string.h>
#include <stdio.h>

/**
* _strlen - return the length of a string
*@s: a char.
*Returns: return length of a string.
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
