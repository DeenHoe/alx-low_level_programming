#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string to be checked
 * @c: character to be located
 * Return: a pointer to the first occurence of the character in the string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
