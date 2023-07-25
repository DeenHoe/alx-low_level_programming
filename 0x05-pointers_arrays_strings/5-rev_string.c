#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int count = 0;
	char b;

	for (a = 0 ; s[a] != '\n' ; a++)
		count++;
	for (a = 0 ; a < count / 2; a++)
	{
		b = s[a];
		s[a] = s[count - 1 - a];
		s[count - 1 - a] = b;
	}
}
