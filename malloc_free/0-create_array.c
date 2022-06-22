#include <stdlib.h>
#include "main.h"

/**
 * create_array - function hat creates an array of chars,
 * and initializes it with a specific char.
 * @size: integer.
 * @c: character.
 * Return: character.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char  *str;

	i = 0;

	if (size != 0)
		str = malloc(size * sizeof(char));
	else
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
