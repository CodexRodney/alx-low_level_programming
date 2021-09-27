#include <stdio.h>
/**
 * main- A program that prints hexadecimal
 *	numbers in lowercase
 *
 * Return: Always zero
 */
int main(void)
{
	int num;
	char con, nline;

	con = 'a';
	num = '0';
	nline = '\n';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (con < 'g')
	{
		putchar(con);
		con++;
	}
	putchar(nline);
	return (0);
}
