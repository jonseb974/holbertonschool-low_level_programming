/**
 * _memset - fills memory with constant byte
 *@s: pointer
 *@b: character
 *@n: integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
