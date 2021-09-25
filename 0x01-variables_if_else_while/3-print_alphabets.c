#include <stdio.h>

/**
 * main- prints alphabet in lowercase
 *	then uppercase followed by new line
 * Return: Always zero
 */
int main(void)
{
	char str;
	char nline;
	char str1;

	nline = '\n';
	str = 'a';
	while (str <= 'z')
	{
		putchar(str);
		str = str + 1;
	}
	str1 = 'A';
	while (str1 <= 'Z')
	{
		putchar(str1);
		str1 = str1 + 1;
	}
	putchar(nline);
	return (0);
}
