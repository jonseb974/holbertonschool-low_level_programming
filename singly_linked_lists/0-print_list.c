#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list
 * @h: a pointer to the head node.
 * Return: count number of nodes.
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
			h = h->next; /* Prend la valeur du noeud suivant */
			count++; /* incrementation compteur */
		}
	}
	return (count);/* retourne, compteur total de noeuds */
}
