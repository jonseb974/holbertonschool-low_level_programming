#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: pointer.
 * Return: 0 if he list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	sum = 0;
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
