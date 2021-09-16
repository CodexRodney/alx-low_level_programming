#include "main.h"
/**
 * _strlen_recursion- A function that prints the length of a string
 * @s: A pointer fot the string to be inputted
 *
 *Return: Always value of variable i
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	
	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
