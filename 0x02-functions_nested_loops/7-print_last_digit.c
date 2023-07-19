#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * Return: k
 * @a: parameter of the function
 */


int print_last_digit(int a)
{
	int k;

	k = a % 10;
		if (k < 0)
			k = -k;
	_putchar(k + '0');
	return (k);

}
