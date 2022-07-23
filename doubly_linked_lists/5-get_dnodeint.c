#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -function that returns
 * the nth node of a dlistint_t linked list.
 * @head: pointer to head.
 * @index: index of next node
 * Return: if the node does not exist, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count = 0;

	node = head;
	while (node != NULL && count <= index)
	{
		if (count == index)
			return (node);
		node = node->next;
		count++;
	}
	return (NULL);
}
