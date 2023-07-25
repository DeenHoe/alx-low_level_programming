#include "main.h"
#include <stdio.h>
/**
 * print_array - Function to print an array of integers
 * @a: function parameter
 * @n: function parameter
 * Return: void
 */

void print_array(int *a, int n)
{
	int b, m;

	m = n - 1;

	for (b = 0 ; b < n ; b++)
	{
		if (b == m)
			printf("%d", a[b]);
		else
			printf("%d, ", a[b]);
	}
	printf("\n");
}
