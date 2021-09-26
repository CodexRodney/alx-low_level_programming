#include <stdio.h>

/**
 * main- prints alphabet lowercase in reverse
 *	followed by new line
 * Return: Always zero
 */
int main(void)
{
	char str;
	char nline;

	nline = '\n';
	str = 'z';
	while (str >= 'a')
	{
		putchar(str);
		str = str - 1;
	}
	putchar(nline);
	return (0);
}
