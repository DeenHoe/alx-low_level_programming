#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array using calloc
 * @nmemb: number of array numbers
 * @size: size of array
 * Return: pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *outpu;

	if (nmemb == 0 || size == 0)
		return (NULL);
	outpu = calloc(nmemb, size);
	if (outpu == NULL)
		return (NULL);
	else
		return (outpu);
}
