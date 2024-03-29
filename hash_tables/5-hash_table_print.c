#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table.
 *@ht: pointer to node structure.
 *
 * Return: no return.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *ptr;
	int flag = 0;

	if (!ht)
		return;
	putchar('{');
	while (index < ht->size - 1)
	{
		if (ht->array[index])
		{
			ptr = ht->array[index];

			while (ptr)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				flag = 1;
			}
		}
		index++;
	}
	putchar('}');
	putchar('\n');
}
