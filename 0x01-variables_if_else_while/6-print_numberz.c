#include <stdio.h>

/**
 * main- Prints all single digits of base 10
 *
 * Return: Always zero
 */
int main(void)
{
	int num;
	int nline;

	num = '0';
	nline = '\n';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar(nline);
	return (0);
}
