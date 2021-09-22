#include "main.h"
#include <stdlib.h>

/**
 * create_array- creates an array of chars and
 * initializes it with specific char
 *
 * @size: Size of array of characters
 * @c: the character
 * Return: NULL if size is 0 or it fails
 *	pointer
 */
char *create_array( unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	ch = malloc(sizeof(*ch) * size);
	if (ch)
	{
		for (i = 0; i <= size; i++)
		{
			ch[i] = c;
			return (ch);
		}
	}
	else
	{
		return (NULL);
	};
}
