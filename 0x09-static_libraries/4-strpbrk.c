#include "main.h"
/**
 * _strpbrk - function name
 * @S: string 1
 * @accept: string 2
 * Return: accept
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
		accept[a] = s[a];
	_putchar('\0');
	return (accept);
}
