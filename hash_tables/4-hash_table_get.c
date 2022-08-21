#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: pointer to structure node.
 * @key: key.
 *
 * Return: value associated with the element,
 * or NULL if key couldn’t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index = 0;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	ptr = ht->array[index];
	if (!ptr)
		return (NULL);

	while (ptr)
	{
		if (!(strcmp(key, ptr->key)))
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
