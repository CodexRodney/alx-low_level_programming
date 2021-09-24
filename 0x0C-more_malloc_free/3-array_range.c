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
	int *j;
	int i;

	if (min > max)
		return (NULL);
	j = (int * )malloc((max + 1) - min);
	if (j == NULL)
		return (NULL);
	for (i = min; i <= max;)
	{
		int j[i];
		i++;
	}
	return (j);
}
