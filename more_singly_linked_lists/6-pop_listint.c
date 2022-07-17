#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * @head: pointetr to the head node.
 *
 * Return: if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{

	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);
	return (data);
}
