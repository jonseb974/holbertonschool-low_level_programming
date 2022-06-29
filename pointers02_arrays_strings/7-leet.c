/**
 * leet - encodes a string into 1337
 *@s: pointer of the string to transform.
 *Return: s
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *start = "aAeEoOtTlL";
	char *end = "4433001177";

	while (*(s + i) != '\0')
	{
		while (*(start + j) != '\0')
		{
			if (*(s + i) == *(start + j))
			{
				*(s + i) = *(end + j);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
