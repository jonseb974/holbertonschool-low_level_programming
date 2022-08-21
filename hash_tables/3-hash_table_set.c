#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int Inst(hash_node_t **array_ptr, char *value, char *key);
int update(hash_node_t *ptr, char *value, char *key);


/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: pointer to the hash table.
 * @key: key.
 * @value: value.
 *
 * Return: 0 if success 1 if failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht && key && *key)
	{
		unsigned long int index = 0;

		index = key_index((const unsigned char *)key, (unsigned long int)ht->size);
		return (Inst(&ht->array[index], (char *)value, (char *)key));
	}
	return (0);
}
/**
 * update - function to update the key.
 *@ptr: ponter to the hash structure node.
 *@key: key>
 *@value: value.
 *
 * Return: 0 success 1 if failure.
 */
int update(hash_node_t *ptr, char *value, char *key)
{
	while (ptr)
	{
		if (!strcmp(key, ptr->key))
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
		return (0);
	}
}

/**
 * Inst - function inserting key and value.
 * @array_ptr: pointer to structure.
 * @key: key.
 * @value: value.
 *
 * Return: 1 if failure ) is success.
 */
int Inst(hash_node_t **array_ptr, char *value, char *key)
{
	hash_node_t *new = NULL;

	new = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (!new)
		return (0);
	if (!(*array_ptr))
	{
		*array_ptr = new;
		new->nwxt = NULL;
	}
	else
	{
		if (update(*array_ptr, value, key))
		{
			free(new);
			return (1);
		}
		mew->next = *array_ptr;
		*array_ptr = new;
	}
	new->key = strcdup(key);
	new->value = strdup(value);
	return (1);
}
