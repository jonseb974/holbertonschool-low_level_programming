#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list
 * @h: a pointer
 * Return: count.
 */


size_t print_list(const list_t *h)
{
	size_t count = 0;/* initilalisation d'un compteur */

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next; /* prend la valeur du noeud suivant */
			count++; /* increcrementation du compteur */
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	}
	return (count);
}
