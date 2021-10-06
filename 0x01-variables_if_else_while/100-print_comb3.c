#include <stdio.h>

/**
 * main- Prints all possible combinations
 * of two digit number
 *
 * Return: Always zero
 */

int main(void)
{
	int b = '0';
	int c;

	while (b < '9')
	{
		c = b + '1';
		while (c <= '9')
		{
			putchar(b);
			putchar(c);
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	putchar('\n');
	return (0);
}
