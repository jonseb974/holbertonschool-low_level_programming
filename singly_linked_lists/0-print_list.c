#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 *print_list-function that prints all the elements
 *of a list_t list.
 *@str: string input
 */

size_t print_list(const list_t *h) /*pointer of next node*/
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (str == NULL)
			printf("[0] (nil)\n");

		else("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
