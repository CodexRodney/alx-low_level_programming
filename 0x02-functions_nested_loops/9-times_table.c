#include "main.h"
#include <stdio.h>

/**
 * times_table- Prints the x9 table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int num, i = 0, c = 0;

	while (i < 10)
	{
		while (c < 10)
		{
			num = i * c;
			c++;
			_putchar('0' + num);
			_putchar(',');
			_putchar(' ');
		}
		i++;
		_putchar('\n');
	}
}
