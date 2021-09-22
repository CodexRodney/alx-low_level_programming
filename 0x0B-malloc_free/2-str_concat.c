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
char *str_concat(char *s1, char *s2);
{
	char s3;
	unsigned int i;

	i = strlen(s1) + strlen(s2);
	if (s1 == NULL && s2 == NULL)
	{
		s3 = "";
	}
	s3 = malloc(sizeof(char) * i);
	if (s3 == NULL)
	{
		return (NULL);
	}
	else
	{
		s3 = strcat(s1,s2);
		return (s3);
	}
	return (s3);
}
