#include "main.h"

/**
 * print_alphabet_x10- Prints alphabet in lowercase x10
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char s = 'a';
	char nline = '\n';

	while (i < 10)
	{
	while (s >= 'a' && s <= 'z')
	{
		_putchar(s);
		s = s + 1;
	}
	_putchar(nline);
	i++;
	}
}
