#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointert to the head node.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp2;

	tmp2 = *head;
	while (head != NULL && tmp2 != NULL)
	{
		tmp = tmp2;
		tmp2 = tmp2->next;
		free(tmp);
	}
	*head = NULL;
}
