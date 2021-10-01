#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings- Prints strings
 * @seperator: String that appears btwn strings
 * @n: Number of strings to be printed
 *
 * Return: String to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strs;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strs);
}
