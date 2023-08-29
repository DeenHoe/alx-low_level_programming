#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: points to the first node
 * @n: data to insert in that new node
 * Return: pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
