#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element
 * @n: data to insert
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *men;
	listint_t *temp = *head;

	Men = malloc(sizeof(listint_t));
	if (men == NULL)
		return (NULL);
	men->n = n;
	men->next = NULL;

	if (*head == NULL)
	{
		*head = men;
		return (men);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = men;

	return (men);
}
