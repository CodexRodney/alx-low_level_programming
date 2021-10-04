#include "main.h"

/**
 * print_to_98- prints natural numbers from
 *	somewhere to 98
 * @n: number to start from
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	int cpn = n;

	if (cpn < 98)
	{
		while ( cpn >= n && cpn <= 98)
		{
			if (cpn > n)
			{
				_putchar(',');
				_putchar(' ');
			}
			cpn++;
			_putchar('0' + cpn);
		}
	}
	else
	{
		while ( cpn <= n && cpn >= 98)
		{
			if (cpn < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			cpn--;
			_putchar('0' + cpn);
		}
	}
}
