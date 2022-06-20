#include "main.h"
/**
 * is_prime_number - function returns 1 if integer input is prime
 * number, 0 otherwise.
 *@n: integer
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checkNum(n, 2));
}

/**
 * checkNum - return a prime number.
 * @i: integer
 * @j: integer
 * Return: integer.
 */
int checkNum(int j, int i)
{
	if (j == i)
		return (1);
	if (j % i == 0)
		return (0);
	return (checkNum(j, i + 1));
}
