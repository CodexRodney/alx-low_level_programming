#include "main.h"

/**
 * print_alphabet- Printys alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
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
