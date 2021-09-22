#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup- returns a pointer space in memory which
 * contains a copy of the string 
 * @str: string given as parameter
 *
 * Return: NULL if str is null or insufficient memory
 *	if successful returns pointer
 */
char *_strdup(char *str)
{
	unsigned int size;
	int i;

	str = malloc(sizeof(*str) *size);
	i = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	if (i > size)
	{
		return (NULL);
	}
	else
	{
		return (*str);
		free(str);
	}
}
