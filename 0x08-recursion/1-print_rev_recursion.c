#include "main.h"
/**
 * _print_rev_recursion- A function that prints a string in reverse
 * @s: Pointer for the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if(strlen(s) == 0)
	{
		_putchar('\n');
	}
	if(strlen(s) == 1)
	{
		_putchar(*s);
	}
	int index;
	index = strlen(s);
	index = index - 1;
	putchar(s[index]);
	s = s[index];
	_print_rev_recursion(s);
}


