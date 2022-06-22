#include <stdlib.h>
#include "main.h"
/**
 *_strdup - function that returns a pointer to a newly allocated space
 * in memory,which contains a copy of the string given as a parameter.
 *@str: string to copy
 * Return: char
 */

char *_strdup(char *str)
{
	char *str2;
	unsigned int j = 0;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	if (str[i] != '\0')
		i++;
	str2 = malloc(i * sizeof(*str2));
	if (str2 == NULL)
		return (NULL);
	while (i < j)
	{
		str2[i] = str[j];
		i++;
	}
	return (str2);
}
