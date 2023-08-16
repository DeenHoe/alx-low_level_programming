#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes function on each element of array
 * @array: the array
 * @size: size of the array
 * @action: function to perform on each element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0 ; a < size ; a++)
		action(array[a]);
}
