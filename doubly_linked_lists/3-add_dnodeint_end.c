#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 * @n: int
 * @head: pointer to the head
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t  *tail;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = newNode;
		newNode->prev = tail;
	}
	return (newNode);

}
