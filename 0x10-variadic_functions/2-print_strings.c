#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings followed by a new line
 * @separator: string to be printed in between other strings
 * @n: number of argument strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;

	va_start(args, n);

	for (a = 0 ; a < n ; a++)
	{
		char *ade = va_arg(args, char *);

		if (ade == NULL)
			printf("(nil)");
		else
			printf("%s", ade);
		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
