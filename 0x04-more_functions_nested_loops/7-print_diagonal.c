#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: function parameter
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a;
		int j;

		for (a = 0 ; a < n ; a++)
		{
			for (j = 0 ; j <= a ; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
