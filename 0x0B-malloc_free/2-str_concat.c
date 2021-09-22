#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat- Function that concantenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: a pointer containing s1+s2
 *	NULL if function fails
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i;
	int j = 0;
	int k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		j++;

	s3 = malloc(sizeof(char) * j);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[k++] = s1[i];
	for (i = 0; s2[i]; i++)
		s3[k++] = s2[i];

	return (s3);
}
