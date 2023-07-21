#include "main.h"
/**
 * print_square - prints # in a square form
 * @size: function parameter
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int a;
		int b;

		for (a = 1 ; a <= size ; a++)
		{
			for (b = 0 ; b < size ; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
