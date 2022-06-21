#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main -print the result of the multiplication
 * followed by a new line,If the program does not receive two arguments,
 * print Error, followed by a new line, and return 1.
 * @argc: integer count.
 * @argv: vector.
 * Return: integer or Error.
 */

int main(int argc, char *argv[])
{
	int cont, i, j, mul;

	cont = i = j = mul = 0;

	if (argc > 0)
	{
		while (cont < argc)
		{
			if (argc == 3)
			{
				if (cont == 1)
					i = atoi(argv[cont]);
				else if (cont == 2)
					j = atoi(argv[cont]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			mul = (i * j);
			cont++;
		} printf("%d %d %d", i, j, mul);
	}
	return (0);
}
