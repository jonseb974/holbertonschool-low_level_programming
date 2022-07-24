#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes
 * the node at index index of a dlistint_t linked list.
 * @head: head of the data linked list.
 * @index: position of the target node to delete.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp; /* temporary variable */
	unsigned int count = 0;/* counter for data storage */

	if (*head == NULL) /* error condition */
		return (-1);
	tmp = *head; /* temporary variable become the head */

	while (tmp != NULL && count < index)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL)
		return (-1);
	if (count == index)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(tmp);
			return (1);
		}
		while  (tmp->next == NULL)
		{
			tmp->prev = NULL;
			free(tmp);
			return (1);
		}
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
		return (1);
	}
	return (-1);
}
