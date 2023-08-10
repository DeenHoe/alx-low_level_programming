#include "main.h"
/**
 * alloc_grid - 2d array
 * @width: columns
 * @height: rows of the array
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **ret;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ret = malloc(sizeof(int *) * height);

	if (ret == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		ret[i] = malloc(sizeof(int) * width);

		if (ret[i] == NULL)
		{
			free(ret);
			for (j = 0 ; j <= height; j++)
				free(ret[j]);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			ret[i][j] = 0;
	}
	return (ret);
}
