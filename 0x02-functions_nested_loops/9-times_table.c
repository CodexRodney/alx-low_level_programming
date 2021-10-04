#include "main.h"
#include <stdio.h>

/**
 * times_table- Prints the x9 table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int num, i = 0, c, j = 0;

	while (i <= 9 && j <=9)
	{
	    c = 0;
		while (c <= 9)
		{
			m = i * c;
			
			if (c > 0)
			{
			putchar(',');
			putchar(' ');
			}
			c = c + 1;
	        _putchar('0' + num);
			
		}
		i++;
		j++;
		putchar('\n');
	}
}
