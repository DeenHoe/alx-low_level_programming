#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of elements in na linked list
 * @h: pointer to the list_t list
 */
size_t list_len(const list_t *h)
{
	size_t ade = 0;

	while (h)
	{
		ade++;
		h = h->next;
	}
	return (ade);
}
