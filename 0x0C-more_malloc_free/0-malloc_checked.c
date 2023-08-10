#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using mallo
 * @b: size of memory
 * Return: pointer to the newly allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ret;

	ret = malloc(b);

	if (ret == NULL)
		exit(98);
	return (ret);
}
