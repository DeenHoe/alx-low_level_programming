#include <stdio.h>
#include "lists.h"
/**
 * free_list - free a list_t list
 * @head: list_t to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
