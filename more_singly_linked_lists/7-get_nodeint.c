#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to the head node.
 * @index: index of the variable
 * Return: NULL if he node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;/* create temporary var */
	unsigned int i = 0;

	tmp = head;
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (tmp);
}
