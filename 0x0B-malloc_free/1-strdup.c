#include "main.h"
/**
 * _strdup - copy a string parameter and allocate new space in the memory
 * @str: string to be copied
 * Return: a pointer to the newly allocated memory
 */

char *_strdup(char *str)
{
	char *new;
	int i;
	int c = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		c++;
	new = malloc(sizeof(char) * (c + 1));

	if (new == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		new[i] = str[i];
	return (new);
}
