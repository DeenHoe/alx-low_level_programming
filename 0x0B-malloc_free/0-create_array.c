#include "main.h"
/**
 * create_array - create an array
 * @size: the size of the array
 * @c: character to fill the array with
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *dec;

	if (size == 0)
		return (NULL);

	dec = malloc(sizeof(char) * size);

	for (a = 0 ; a < size ; a++)
		dec[a] = c;
	return (dec);
}
