#include <stdlib.h>
#include "main.h"

/**
 * array_range- creates an array of integers
 * @min: minimum array number 
 * @max: maximum array number
 *
 * Return: pointer to newly created array
 *	NULL if min>max
 *	NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
