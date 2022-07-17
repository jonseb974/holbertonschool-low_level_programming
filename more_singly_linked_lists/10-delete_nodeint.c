#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @index: target to delete.
 * @head: pointerof the head
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *removenode;
	unsigned int i;

	i = 0;
	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		while (i < index - 1)
		{
			tmp = tmp->next;
			if (tmp == NULL)
				return (-1);
			i++;
		}
		removenode = tmp;
		removenode = removenode->next;
		tmp->next = removenode->next;
		free(removenode);
	}
	return (1);
}
