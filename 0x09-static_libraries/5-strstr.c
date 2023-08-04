#include "main.h"
/**
 * _strstr - function name
 * @_haystack: pointer to a string
 * @needle: string parameter
 * Return: character
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0 ; needle[i] != '\0' ; i++)
	{
		haystack[i] = needle[i];
	}
	haystack[i] = '\0';
	return (haystack);
}
