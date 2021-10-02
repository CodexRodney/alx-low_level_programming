#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers- Prints numbers 
 * @separator- String separating numbers
 * @n: Number of parameters
 *
 * Return: Numbers to be printed
 *	if n is 0 returns 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(str, int);
		printf("%d", num);

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(str);

	printf("\n");
}
