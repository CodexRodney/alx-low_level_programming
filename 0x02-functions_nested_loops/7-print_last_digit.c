#include "main.h"
#include <stdio.h>

/**
 * print_last_digit- Prints the last digit of number
 * @l: Number to be acted upon
 *
 * Return: Value of last digit
 */

int print_last_digit(int l)
{
	int b = l % 10;

	if (b < 0)
		b = b * -1;
	_putchar(b + '0');
	return (b);
}
