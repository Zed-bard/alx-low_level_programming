#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D integer array (grid) of specified
 *              width and height, initializes all elements to 0, and returns
 *              a pointer to the allocated grid. If width or height is <= 0,
 *              or if memory allocation fails, the function returns NULL.
 * @width: width input
 * @height: height input
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);

			free(mee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}

	return (mee);
}
