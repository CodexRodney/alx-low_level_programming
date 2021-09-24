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
 
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = malloc(size * nmemb);

	if (cal == NULL)
		return (NULL);

	ch = cal;

	for (i = 0; i < (size * nmemb); i++)
		ch[i] = '\0';

	return (cal);
}
