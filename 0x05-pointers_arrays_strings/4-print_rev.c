#include "main.h"
/**
 * print_rev - funtion that prints the reverse of a string
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int a;
	int count = 0;
	int b;

	for (a = 0 ; s[a] != '\0' ; a++)
		count++;
	for (b = count - 1 ; b >= 0 ; b--)
		_putchar(s[b]);
	_putchar('\n');
}
