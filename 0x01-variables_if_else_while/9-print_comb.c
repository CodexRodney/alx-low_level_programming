#include <stdio.h>

/**
 * main- Prints all possible
 * combinations of single-digit numbers
 *
 * Return: Always 0
 */

int main()
{
	int b = '0';

	while (b >= '0' && b <= '9')
	{
		putchar(b);
		if (b != '9')
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	return (0);
}
