#include <stdlib.h>
#include "main.h"

/**
 * _calloc- Allocates memory for an array
 * @nmemb: no of elements
 * @size: size of memory in bytes
 *
 * Return: if nmeb or size is 0 returns NULL
 *	malloc fails returns NULL
 *	else returns pointer to allocated mem
 */

void* _calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = 0;
	arr = (int *) malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
