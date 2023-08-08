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

	new = malloc(sizeof(str));

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		new[i] = str[i];
	return (new);
}
