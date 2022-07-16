#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @str: string.
 * @head: pointer to the first node.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * _strlen - returns yhe length of the string.
 * @s: string character.
 * Return: length of the string.
 */
int _strlen(const char *s)
{
	int i;

	while (s[i] != 0) /* Tant que l'index de i != 0*/
		i++; /* incrementer i */
	return (i); /* Afficher la valeur de i en fin de program */
}
