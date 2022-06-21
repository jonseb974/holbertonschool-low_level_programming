#include <stdio.h>
#include "main.h"

/**
 * main - print numbers of arguments encounter.
 * @argc: integer
 * @argv: character
 * Return: integer.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
