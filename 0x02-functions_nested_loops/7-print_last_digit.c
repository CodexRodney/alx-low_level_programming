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
	char b = l % 10;
	_putchar(b);
	return (b);
}
