#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * digit_orNot - adds positive numbers if no number is passed to the program,
 * print 0, followed by a new line
 * if number contains symbols that are not digits, print Error
 * followed by a new line, and return 1.
 * @a: pointer of a char
 * Return: integer, or Error, or 0.
 */

int digit_orNot(char *a)
{
	int i, sum, len;

	i = 0;

	sum = 0;

	len = strlen(a);

	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			sum = sum * 10 + (a[i] - '0');
		i++;
	}
	return (sum);
}


/**
 * main - addition of poitive integer
 *@argc:integer
 *@argv: vector
 *Return: integer.
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = digit_orNot(argv[i]);

		if (j == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum++;
	}
	printf("%d\n", sum);
	return (0);
}
