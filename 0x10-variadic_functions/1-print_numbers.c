#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers followed by a string
 * @separator: string to be printed
 * @n: number of numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int a;

	va_start(arg, n);

	for (a = 0 ; a < n ; a++)
	{
		printf("%i", va_arg(arg, int));
		if (separator != NULL || a < (n - 2))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
