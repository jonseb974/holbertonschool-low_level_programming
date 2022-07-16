#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 *print_list - function that prints all the elements
 *of a list_t list.
 *@str: string.
 *@h: pointer of the next node.
 */

size_t print_list(const list_t *h) /*h == pointer of next node*/
{
	size_t counter = 0; /*count store numbers of integers*/

	while (h != NULL)
	{
		if (str == NULL)
			printf("[0] (nil)\n");/* error meaage if NULL */

		else
		h = h->len;
	        h = h->str;
		h = h->next; /* next node became new h*/
		counter++; /*The counter is incremented */
	}
	return (counter);/*Return data in the counter at the end of the program*/
}
