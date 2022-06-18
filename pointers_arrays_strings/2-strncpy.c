#include "main.h"
/**
 *_strncpy - copie a string
 *@dest: string copy that will be printed
 *@src: original strig to copy
 *@n: integer size of the string
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	if (i < n)
		dest[i] = '\0';
	i++;
	return (dest);
}
