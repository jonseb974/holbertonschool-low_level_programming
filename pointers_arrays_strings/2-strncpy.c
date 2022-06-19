#include "main.h"
/**
 *_strncpy - copy strings>
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + 1) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
