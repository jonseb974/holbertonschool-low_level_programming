/**
 * _memcpy - copy memory area.
 * @dest: pointer destination file.
 * @src: pointer origin file.
 * @n: number of character to copy.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
