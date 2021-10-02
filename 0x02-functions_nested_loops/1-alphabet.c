#include "main.h"

/**
 * print_alphabet- Printys alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char s = 'a';
	char nline = '\n';

	while (s >= 'a' && s <= 'z')
	{
		_putchar(s);
		s = s + 1;
	}
	_putchar(nline);
}
