#include <stdio.h>
#include "main.h"
/**
 * main - print number of arguments.
 * @argc: integer
 * @argv: array of char
 * Return: no return.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
