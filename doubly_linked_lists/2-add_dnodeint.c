#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint -  function that adds
 * a new node at the beginning of a dlistint_t list.
 * @n: int
 * @head: pointer.
 * Return: the address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
	}
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}
	return (newNode);

}
