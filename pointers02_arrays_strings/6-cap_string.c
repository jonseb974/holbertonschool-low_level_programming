/**
 * cap_string - put a capital font to a string
 * @s: pointer to a char
 * Return: char
 */

char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((i == 0) && (*(s + i) >= 97 && *(s + i) <= 122))
		{
			*(s + i) = (*(s + i) - 32);
			i++;
		}
		if (*(s + i) == 32 || *(s + i) == '\n' || *(s + i) == '\t'
				|| *(s + i) == 44 || *(s + i) == 59 || *(s + i) == 46
				|| *(s + i) == 21 || *(s + i) == 63 || *(s + i) == 34
				|| *(s + i) == 40 || *(s + i) == 41 || *(s + i) == 123
				|| *(s + i) == 125)
		{
			i++;
			if (*(s + i) >= 97 && *(s + i) <= 122)
			{
				*(s + i) = (*(s + i) - 32);
			}
			else
				i++;
		}
	}
	return (s);
}
