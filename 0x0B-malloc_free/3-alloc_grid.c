#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid- returns a pointer to a 2D array of integers
 * @width: one of the integers
 * @height: the other integer
 *
 * Return: NULL on failure and
 *	if width or height is 0
 *	pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ar, _height, _width;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
		return (NULL);

	_height = 0;

	while (_height < height)
	{
		ar[_height] = malloc(sizeof(int) * width);

		if (ar[_height] == NULL)
		{
			while (_height >= 0)
			{
				free(ar[_height]);
				_height--;
			}

			free(ar);
			return (NULL);
		}
		_height++;
	; }

	for ( ; _height < height; _height++)
	{
		for (_width = 0; _width < width; _width++)
		{
			ar[_height][_width] = 0;
		}
	}

	return (ar);
}


