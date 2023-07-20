#include "main.h"
/**
 * _isdigit - prints 1 if c is a number between 0 and 9
 * @c: function parameter
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
