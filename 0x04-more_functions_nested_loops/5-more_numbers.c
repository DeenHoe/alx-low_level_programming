#include "main.h"
/**
 * more_numbers - prints more numbers
 * Return: void
 */

void more_numbers(void)
{
	int b = 0;
	int d = 0;

	for (b = 0 ; b < 10 ; b++)
	{
		for (d = 0 ; d <= 14 ; d++)
		{
			if (d > 9)
				_putchar(d / 10 + '0');
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
