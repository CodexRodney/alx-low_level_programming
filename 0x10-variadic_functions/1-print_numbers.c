#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers- Prints numbers 
 * @separator- String separating numbers
 * @n: Number of parameters
 *
 * Return: Numbers to be printed
 *	if n is 0 returns 0
 */
void print_numbers(const char *separator,const unsigned int n, ...)
{
	int i, a;
	va_list ap;
	
	va_start(ap, n);
	
	for (i= 0; i < n; i++)
	{
		a = va_arg(ap, int);
		printf("%d", a);
		if(separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
