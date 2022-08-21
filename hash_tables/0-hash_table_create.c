#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: a pointer to the newly created hash table
 * or Null If something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	if (size < 1)
	{
		return (NULL); /*invalide size, Null pointer means error*/
	}
	hash_table_t *newTable = malloc(sizeof(hash_table_t))

	if (!newTable)
	{
		free(newTable);
		return (NULL);
	}
	newTable->arraySize = size

	newTable->buckets = calloc((int)size, sizeof(listNode *))

	if (!newTable->buckets)
	{
		free(newTable)
	}

}
