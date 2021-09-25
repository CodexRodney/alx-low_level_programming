#include <stdio.h>

/**
 * main- prints alphabet in lowercase followed by new line
 *
 * Return: Always zero
 */
int main(void)
{
	char str;
	char nline;

	nline = '\n';
	str = 'a';
	while (str <= 'z')
	{
		putchar(str);
		str = str + 1;
	}
	putchar(nline);
	return (0);
}
