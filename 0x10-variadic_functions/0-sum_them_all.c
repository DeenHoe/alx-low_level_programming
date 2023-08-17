#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - variadic function to sum all the argument int
 * @n: number of arguments passed and to be sumed
 * Return: g, the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int f, g = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (f = 0 ; f < n ; f++)
		g = g + va_arg(ap, int);

	va_end(ap);
	return (g);
}
