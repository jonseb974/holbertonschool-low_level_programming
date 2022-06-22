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

	str = malloc(sizeof(char));

	for (i = 0; i < size; i++)
	{
		if(size != 0)
		{
			str[i] = c;
			i++;
			return (str);
		}
	}
	if (size == 0)
		return (NULL);
	return (str);
}
