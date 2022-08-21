#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the hash table.
 * Return: a pointer to the newly created hash table
 * or Null If something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_tab = NULL;/*initialisation of the table*/
	unsigned long int i = 0;/*size of table initialised*/

	if (size < 1)
	{
		return (NULL); /*invalide size, Null pointer means error*/
	}
	h_tab = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!h_tab)
	{
		free(h_tab);
		return (NULL);
	}
	h_tab->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (!h_tab->array)
	{
		return (NULL);
	}
	h_tab->size = size;

	while (i < size)
		h_tab->array[i++] = NULL;
	return (h_tab);
}
