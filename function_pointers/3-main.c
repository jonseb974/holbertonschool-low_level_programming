#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - contain function
 * @argc: counter
 * @argv: vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *sign;
	char operator;
	int a, b, result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2][0];

	if ((operator != '*' && operator != '+' && operator != '%')
	|| argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((operator == '/' || operator == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	sign = argv[2];
	ptr = get_op_func(sign);
	result = (*ptr) (a, b);
	return (0);
}
