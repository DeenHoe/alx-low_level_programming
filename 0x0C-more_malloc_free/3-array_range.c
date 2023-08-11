#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: parameter 1
 * @max: parameter 2
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ment;
	int a;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	ment = malloc(sizeof(int) * size);

	if (ment == NULL)
		return (NULL);
	for (a = 0; a < size ; a++)
		ment[a] = min + a;
	return (ment);
}
