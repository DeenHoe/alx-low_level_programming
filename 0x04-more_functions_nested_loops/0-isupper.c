#include "main.h"
/**
 * _isupper - prints 1 if it's an upper case letter
 * @c: this is the function parameter
 * Return: 1 or 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
