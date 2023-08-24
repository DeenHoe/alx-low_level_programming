#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add a node at the beginning
 * @head: the first node
 * @str: node to be added
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	unsigned int length = 0;
	char *str_copy = strdup(str);

	if (new == NULL)
		return (NULL);
	while (str[length])
		length++;
	if (str_copy == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = str_copy;
	new->len = length;
	new->next = *head;

	*head = new;

	return (new);
}
