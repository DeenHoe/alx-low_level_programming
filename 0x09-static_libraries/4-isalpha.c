#include "main.h"
/**
 * _isalpha - to check if it is an alphabet
 * @c: parameter to be checked
 * Return: either 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
