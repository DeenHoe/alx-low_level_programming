#include "main.h"
/**
 * print_most_numbers - prints from 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	char d;

	for (d = '0' ; d <= '9' ; d++)
	{
		if (d == '2' || d == '4')
			continue;
		_putchar(d);
	}
	_putchar('\n');
}
