#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked- It allocates memory using malloc
 * @b: Integer representing size
 *
 * Return: Always a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
		exit (98);
	return (s);
}
