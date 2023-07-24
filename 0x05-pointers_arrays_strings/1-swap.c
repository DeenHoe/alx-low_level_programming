#include "main.h"
/**
 * swap_int - function that swaps two integers
 * @a: function parameter
 * @b: function parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int d = *b;
	*b = *a;
	*a = d;
}
