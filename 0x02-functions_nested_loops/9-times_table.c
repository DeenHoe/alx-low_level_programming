#include "main.h"
/**
 * times_table - prints the time table to 9
 * Return: void
 */

void times_table(void)
{
	int r, c, result;

	for (r = 0 ; r <= 9 ; r++)
	{
		for (c = 0 ; c < 10 ; c++)
		{
			result = r * c;
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
