#include "main.h"
/**
 * puts_half - function that prints the second half of a string
 * @str: string to be inputed
 * Retyrn: void
 */

void puts_half(char *str)
{
	int a;
	int n;
	int count = 0;

	for (a = 0 ; str[a] != '\0' ; a++)
		count++;
	n = (count - 1) / 2;

	for (a = n + 1 ; a < count ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
