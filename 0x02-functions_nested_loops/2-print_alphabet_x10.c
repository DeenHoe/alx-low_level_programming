#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in 10 lines
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
	_putchar('\n');
	}

}
