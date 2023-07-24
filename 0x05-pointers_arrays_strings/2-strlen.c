#include "main.h"
/**
 * _strlen - prints the string length
 * @s: function parameter
 * Return: returns the length of s[]
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[0] != '\0' ; i++)
		count++;
	return (count);
}
