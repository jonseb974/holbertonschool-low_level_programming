#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all
 * the elements of a listint_t
 * @h: pointer of the header
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
