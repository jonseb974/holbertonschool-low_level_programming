#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: pointert to the heard.
 * @n: Input int
 * @idx: position of the target node
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *tmpcount = *h, *tmp2;
	dlistint_t *newNode;
	unsigned int count = 0;

	if (*h == NULL)
		return (NULL);
	while (tmpcount != NULL)
		tmpcount = tmpcount->next;
	count++;

	if (idx > count)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->prev = NULL, newNode->next = *h;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	for (count = 0; count < idx; count++)
		tmp2 = tmp, tmp = tmp->next;
	newNode->next = tmp;
	newNode->prev = tmp2;
	tmp2->next = newNode;
	if (tmp)
		tmp->prev = newNode;
	return (newNode);
}
