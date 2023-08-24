#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: the first node
 * @str: to be duplicated
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t*)malloc(sizeof(list_t));
	char *str_copy;

	if (new == NULL)
		return (NULL);

	str_copy = strdup(str);

	if (str_copy == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = str_copy;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
