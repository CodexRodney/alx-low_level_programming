#include "main.h"
/**
 * _strlen_recursion- A function that prints the length of a string
 * @s: A pointer fot the string to be inputted
 */
int _strlen_recursion(char *s)
{
	if (s == 0)
	{
		return 0;
	}else
	{ 
		return 1;
		_putchar(_strlen_recursion(s) + _strlen_recursion(s + 1));
	;}
}


