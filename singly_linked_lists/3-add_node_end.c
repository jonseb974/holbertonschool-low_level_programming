#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @str: a string.
 * @head: pointer to the node.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL; /* last node */
	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}

/**
 * _strlen - return length of the string
 * @s: string.
 * Return: int length of the string.
 *
 */
int _strlen(const char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}
